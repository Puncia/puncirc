/*
	This file is part of puncirc.

    puncirc is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    puncirc is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    Full license: https://github.com/Puncia/puncirc/blob/master/LICENSE.md
	Copyright (c) 2016 Marco Tolu [puncia]
*/


#include "network.h"

net::network::network()
{
	memset(&callbacks, 0, sizeof(callbacks));

	init_callbacks();
	
	irc_session_t *session = irc_create_session(&callbacks);
	irc_option_set(session, LIBIRC_OPTION_STRIPNICKS);

	if (irc_connect(session, "cho.ppy.sh", 6667, "", "puncia", "", ""))
	{
		//same
	}
}

void net::network::init_callbacks()
{
	callbacks.event_connect = net::event_connect;
}

// thread hosting irc's main loop
void net::network::t_receiver()
{

}



net::network::~network()
{
}