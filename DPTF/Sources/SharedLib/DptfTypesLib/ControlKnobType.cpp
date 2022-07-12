/******************************************************************************
** Copyright (c) 2013-2022 Intel Corporation All Rights Reserved
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

#include "ControlKnobType.h"

namespace ControlKnobType
{
	std::string ToString(ControlKnobType::Type type)
	{
		switch (type)
		{
		case ControlKnobType::PowerControlPl1:
			return "PowerControlPL1";
		case ControlKnobType::PowerControlPl2:
			return "PowerControlPL2";
		case ControlKnobType::PowerControlPl3:
			return "PowerControlPL3";
		case ControlKnobType::PowerControlPl4:
			return "PowerControlPL4";
		case ControlKnobType::PerformanceControlPerfFrequency:
			return "PerformanceControlPerfFrequency";
		case ControlKnobType::PerformanceControlThrottleFrequency:
			return "PerformanceControlThrottleFrequency";
		case ControlKnobType::DbptControlIccMax:
			return "DbptControlIccMax";
		case ControlKnobType::CoreControlLpo:
			return "CoreControlLpo";
		case ControlKnobType::DisplayControlBrightness:
			return "DisplayControlBrightness";
		case ControlKnobType::PercentageFanControl:
			return "PercentageFanControl";
		case ControlKnobType::TauControlPl1:
			return "TauControlPl1";
		case ControlKnobType::TauControlPl2:
			return "TauControlPl2";
		case ControlKnobType::TauControlPl3:
			return "TauControlPl3";
		case ControlKnobType::DataThroughput:
			return "DataThroughput";
		case ControlKnobType::PerformanceControlPerfIndex:
			return "PerformanceControlPerfIndex";
		case ControlKnobType::PSysPowerControlPl1:
			return "PSysPowerControlPL1";
		case ControlKnobType::PSysPowerControlPl2:
			return "PSysPowerControlPL2";
		case ControlKnobType::PSysPowerControlPl3:
			return "PSysPowerControlPL3";
		case ControlKnobType::RPMFanControl:
			return "RPMFanControl";
		default:
			throw dptf_exception("ControlKnobType::Type is invalid.");
		}
	}
}
