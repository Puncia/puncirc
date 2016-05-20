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

#pragma once

#include "include\libircclient.h"
#include "include\libirc_rfcnumeric.h"
#include <thread>

namespace net
{
	class network
	{
	public:
		network();
		~network();
	private:
		irc_callbacks_t callbacks;
		void t_receiver();

		// callbacks
		void event_connect(irc_session_t *session, const char *event, const char *origin, const char **params, unsigned int count);
		void event_numeric(irc_session_t *session, unsigned int event, const char *origin, const char **params, unsigned int count);

		void init_callbacks();
		std::thread receiver;

	};
}