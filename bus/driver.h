/* -*- mode: C; c-file-style: "gnu" -*- */
/* driver.h  Bus client (driver)
 *
 * Copyright (C) 2003  CodeFactory AB
 *
 * Licensed under the Academic Free License version 1.2
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 *
 */

#ifndef BUS_DRIVER_H
#define BUS_DRIVER_H

#include <dbus/dbus.h>

void bus_driver_handle_message    (DBusConnection *connection,
				   DBusMessage    *message);
void bus_driver_remove_connection (DBusConnection *connection);

#endif /* BUS_DRIVER_H */
