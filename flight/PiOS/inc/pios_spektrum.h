/**
 ******************************************************************************
 *
 * @file       pios_spektrum.h  
 * @author     The OpenPilot Team, http://www.openpilot.org Copyright (C) 2010.
 * 	       Parts by Thorsten Klose (tk@midibox.org)
 * @brief      Spektrum satellite functions header.
 * @see        The GNU Public License (GPL) Version 3
 *
 *****************************************************************************/
/* 
 * This program is free software; you can redistribute it and/or modify 
 * it under the terms of the GNU General Public License as published by 
 * the Free Software Foundation; either version 3 of the License, or 
 * (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful, but 
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY 
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License 
 * for more details.
 * 
 * You should have received a copy of the GNU General Public License along 
 * with this program; if not, write to the Free Software Foundation, Inc., 
 * 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#ifndef PIOS_SPEKTRUM_H
#define PIOS_SPEKTRUM_H


/* Global Types */

/* Public Functions */
extern void PIOS_SPEKTRUM_Init(void);

extern int32_t PIOS_SPEKTRUM_RxBufferFree();
extern int32_t PIOS_SPEKTRUM_RxBufferUsed();
extern int32_t PIOS_SPEKTRUM_RxBufferGet();
extern int32_t PIOS_SPEKTRUM_RxBufferPeek();
extern int32_t PIOS_SPEKTRUM_RxBufferPut(uint8_t b);

#endif /* PIOS_SPEKTRUM_H */
