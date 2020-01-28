/***************************************************************************
 *   Copyright (C) 2012 by Mathias Paulin                                  *
 *   Mathias.Paulin@irit.fr                                                *
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 *   This program is distributed in the hope that it will be useful,       *
 *   but WITHOUT ANY WARRANTY; without even the implied warranty of        *
 *   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the         *
 *   GNU General Public License for more details.                          *
 *                                                                         *
 *   You should have received a copy of the GNU General Public License     *
 *   along with this program; if not, write to the                         *
 *   Free Software Foundation, Inc.,                                       *
 *   59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.             *
 ***************************************************************************/
#ifndef OPENGL_H
#define OPENGL_H
/**
 * OpenGL library and implementation management
 */

// system independent stuff
#define GLM_FORCE_RADIANS

#include "glm/glm.hpp"
#include "glm/gtc/matrix_transform.hpp"

#ifndef M_PI
#define M_PI 3.14159265359
#endif

// system dependent stuff
#ifdef __APPLE__

    #include <OpenGL/gl3.h>
    #define __gl_h_

#else // Linux /windows
    #define GLEW_STATIC // Static link of GLEW
    #include "gl_utils/glew/glew.h"
    #include <GL/gl.h>
    #include <GL/glu.h>
#endif

#include "glassert.h"

#endif // OPENGL_H