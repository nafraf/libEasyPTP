/**
 * Copyright 2013 Bobby Graese <bobby.graese@gmail.com>
 * 
 * This file is part of libEasyPTP.
 *
 *  libEasyPTP is free software: you can redistribute it and/or modify
 *  it under the terms of the GNU Lesser General Public License as
 *  published by the Free Software Foundation, either version 3 of the
 *  License, or (at your option) any later version.
 *
 *  libEasyPTP is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU Lesser General Public License for more details.
 *
 *  You should have received a copy of the GNU Lesser General Public
 *  License along with libEasyPTP.  If not, see
 *  <http://www.gnu.org/licenses/>.
 */

#ifndef LIBPTP_PP_PTPCAMERA_H_
#define LIBPTP_PP_PTPCAMERA_H_

#include "CameraBase.hpp"

namespace PTP {
    
    class CameraBase;
    
    class PTPCamera : public CameraBase {
        public:
            PTPCamera();
    };
    
}

#endif /* LIBPTP_PP_PTPCAMERA_H_ */