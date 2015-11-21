/******************************************************************************
** Copyright (c) 2013-2015 Intel Corporation All Rights Reserved
**
** Licensed under the Apache License, Version 2.0 (the "License"); you may not
** use this file except in compliance with the License.
**
** You may obtain a copy of the License at
**     http://www.apache.org/licenses/LICENSE-2.0
**
** Unless required by applicable law or agreed to in writing, software
** distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
** WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
**
** See the License for the specific language governing permissions and
** limitations under the License.
**
******************************************************************************/

#pragma once

#include "Dptf.h"
#include "SensorMotion.h"
#include "SensorOrientation.h"
#include "SensorSpatialOrientation.h"
#include "OsLidState.h"
#include "OsPowerSource.h"
#include "CoolingMode.h"
#include "OsPlatformType.h"
#include "OsDockMode.h"

class PlatformStateInterface
{
public:

    virtual ~PlatformStateInterface()
    {
    };

    virtual SensorMotion::Type getMotion(void) const = 0;
    virtual SensorOrientation::Type getOrientation(void) const = 0;
    virtual SensorSpatialOrientation::Type getSpatialOrientation(void) const = 0;
    virtual OsLidState::Type getLidState(void) const = 0;
    virtual OsPowerSource::Type getPowerSource(void) const = 0;
    virtual const std::string& getForegroundApplicationName(void) const = 0;
    virtual CoolingMode::Type getCoolingMode(void) const = 0;
    virtual UIntN getBatteryPercentage(void) const = 0;
    virtual OsPlatformType::Type getPlatformType(void) const = 0;
    virtual OsDockMode::Type getDockMode(void) const = 0;
};