/******************************************************************************
** Copyright (c) 2013-2023 Intel Corporation All Rights Reserved
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

#include "SocWorkloadSource.h"

namespace SocWorkloadSource
{
	std::string ToString(SocWorkloadSource::Source source)
	{
		switch (source)
		{
		case SocWorkloadSource::Software:
			return "Software";
		case SocWorkloadSource::Hardware:
			return "Hardware";
		default:
			return ToString(SocWorkloadSource::Software);
		}
	}
}