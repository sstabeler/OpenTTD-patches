/* $Id$ */

/*
 * This file is part of OpenTTD.
 * OpenTTD is free software; you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, version 2.
 * OpenTTD is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with OpenTTD. If not, see <http://www.gnu.org/licenses/>.
 */

/** @file newgrf_sl.h Code handling saving and loading of NewGRF mappings. */

#ifndef SAVELOAD_NEWGRF_SL_H
#define SAVELOAD_NEWGRF_SL_H

#include "../newgrf_commons.h"
#include "saveload_buffer.h"

void Save_NewGRFMapping(SaveDumper *dumper, const OverrideManagerBase &mapping);
void Load_NewGRFMapping(LoadBuffer *reader, OverrideManagerBase &mapping);

#endif /* SAVELOAD_NEWGRF_SL_H */
