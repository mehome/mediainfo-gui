///////////////////////////////////////////////////////////////////////////////
// MediaInfoXP
// Copyright (C) 2004-2015 LoRd_MuldeR <MuldeR2@GMX.de>
//
// This program is free software; you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation; either version 2 of the License, or
// (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
//
// http://www.gnu.org/licenses/gpl-2.0.txt
///////////////////////////////////////////////////////////////////////////////

//Version
static unsigned int mixp_versionMajor = 2;
static unsigned int mixp_versionMinor = 16;

//MediaInfo Version
static unsigned int mixp_miVersionMajor = 0;
static unsigned int mixp_miVersionMinor = 7;
static unsigned int mixp_miVersionPatch = 74;

//MediaInfo Checksum
static const char *mixp_checksum = "2020ba36b1844c7b0204b22d486a4b9ebec7dddb";

//Build date
static const char *mixp_buildDate = __DATE__;
static const char *mixp_buildTime = __TIME__;

//Show console
#define MIXP_CONSOLE (0)

//Debug build
#if defined(_DEBUG) && defined(QT_DEBUG) && !defined(NDEBUG) && !defined(QT_NO_DEBUG)
	#define MIXP_DEBUG (1)
#else
	#define MIXP_DEBUG (0)
#endif
