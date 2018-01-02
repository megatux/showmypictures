/*-
 * Copyright (c) 2017-2017 Artem Anufrij <artem.anufrij@live.de>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 * The Noise authors hereby grant permission for non-GPL compatible
 * GStreamer plugins to be used and distributed together with GStreamer
 * and Noise. This permission is above and beyond the permissions granted
 * by the GPL license by which Noise is covered. If you modify this code
 * you may extend this exception to your version of the code, but you are not
 * obligated to do so. If you do not wish to do so, delete this exception
 * statement from your version.
 *
 * Authored by: Artem Anufrij <artem.anufrij@live.de>
 */

namespace ShowMyPictures.Widgets.Views {
    public class AlbumsView : Gtk.Grid {
        ShowMyPictures.Services.LibraryManager library_manager;

        public signal void album_selected (Objects.Album album);

        Gtk.FlowBox albums;

        construct {
            library_manager = ShowMyPictures.Services.LibraryManager.instance;
            library_manager.added_new_album.connect ((album) => {
                Idle.add (() => {
                    add_album (album);
                    return false;
                });
            });
        }

        public AlbumsView () {
            build_ui ();
        }

        private void build_ui () {
            albums = new Gtk.FlowBox ();
            albums.margin = 24;
            albums.valign = Gtk.Align.START;
            albums.max_children_per_line = 99;
            albums.set_sort_func (albums_sort_func);
            albums.row_spacing = 24;
            albums.column_spacing = 24;
            albums.child_activated.connect ((child) => {
                album_selected ((child as Widgets.Album).album);
            });

            var scroll = new Gtk.ScrolledWindow (null, null);
            scroll.expand = true;

            scroll.add (albums);

            this.add (scroll);
        }

        public void add_album (Objects.Album album) {
            lock (albums) {
                var a = new Widgets.Album (album);
                albums.add (a);
            }
        }

        private int albums_sort_func (Gtk.FlowBoxChild child1, Gtk.FlowBoxChild child2) {
            var item1 = (Widgets.Album)child1;
            var item2 = (Widgets.Album)child2;
            if (item1.year != item2.year) {
                return item2.year - item1.year;
            }
            if (item1.month != item2.month) {
                return item2.month - item1.month;
            }
            if (item1.day != item2.day) {
                return item2.day - item1.day;
            }
            return 0;
        }
    }
}