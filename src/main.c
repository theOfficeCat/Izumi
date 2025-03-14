/*
 * This file is part of Izumi.
 * 
 * Izumi is free software: you can redistribute it and/or modify it under the
 * terms of the GNU General Public License as published by the Free Software
 * Foundation, either version 3 of the License, or (at your option) any later
 * version.
 * 
 * Izumi is distributed in the hope that it will be useful, but WITHOUT ANY
 * WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS
 * FOR A PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License along with
 * Izumi. If not, see <https://www.gnu.org/licenses/>. 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>

#include "data_structs.h"
#include "parser.h"
#include "window.h"
#include "files.h"

int main(int argc, char *argv[]) {
    // print instructions
    InstructionTableArray tables_array;
    tables_array.tables = NULL;
    tables_array.avail_tables = 0;
    tables_array.qtty_tables = 0;

    ApplicationData app_data;
    
    init_application(&app_data);

    WindowData win_data;

    init_window(&win_data);

    add_window(&app_data, &win_data);

    main_loop(&app_data, &win_data, &tables_array);

    close_window();
}

