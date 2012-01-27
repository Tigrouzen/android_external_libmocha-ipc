/**
 * This file is part of libsamsung-ipc.
 *
 * Copyright (C) 2012 KB <kbjetdroid@gmail.com>
 *
 * Implemented as per the Mocha AP-CP protocol analysis done by Dominik Marszk
 *
 * libsamsung-ipc is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * libsamsung-ipc is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with libsamsung-ipc.  If not, see <http://www.gnu.org/licenses/>.
 */

#include <radio.h>
#include <tapi_packet.h>
#include <tapi_ss.h>

/*
 * All the TAPI SS handling will be done here
 *
 */

void tapi_ss_handler(uint16_t tapiSsType, uint32_t tapiSsLength, uint8_t *tapiSsData)
{
	struct tapiRequest tx_packet;

	struct modem_io request;
    uint8_t *frame;
    uint8_t *payload;
    uint32_t frame_length;

    switch(tapiSsType)
    {
    case 0x01:
    	break;
    default:
    	break;
    }
}
