/*
 * Camara Lucida
 * www.camara-lucida.com.ar
 *
 * Copyright (C) 2011  Christian Parsons
 * www.chparsons.com.ar
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#include "cmlMesh.h"
#include <XnOpenNI.h>
#include <XnCppWrapper.h>
#include <XnLog.h>

namespace cml
{
	class Mesh_openni : public Mesh
	{
	public:
		
		Mesh_openni(uint16_t *raw_depth_pix,
					xn::DepthGenerator *depth_generator);
		~Mesh_openni();
		
		void print();
		
	protected:
		
		//// Mesh impl
		
		void update_pts();
				
		////
		
	private:
		
		xn::DepthGenerator *depth_generator;
		
	};
};
