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

#pragma once

#include "ParticipantManagerInterface.h"

class dptf_export ParticipantManager : public ParticipantManagerInterface
{
public:
	ParticipantManager(DptfManagerInterface* dptfManager);
	~ParticipantManager(void);

	virtual UIntN allocateNextParticipantIndex(void) override;
	virtual void createParticipant(
		UIntN participantIndex,
		const AppParticipantDataPtr participantDataPtr,
		Bool participantEnabled) override;

	virtual void destroyAllParticipants(void) override;
	virtual void destroyParticipant(UIntN participantIndex) override;

	virtual std::set<UIntN> getParticipantIndexes(void) const override;
	virtual Participant* getParticipantPtr(UIntN participantIndex) const override;

	// This will clear the cached data stored within all participants *within* the framework.  It will not ask the
	// actual participants to clear their caches.
	virtual void clearAllParticipantCachedData() override;
	virtual Bool participantExists(const std::string& participantName) const override;
	virtual std::shared_ptr<IParticipant> getParticipant(const std::string& participantName) const override;
	virtual std::string GetStatusAsXml(void) override;

private:
	// hide the copy constructor and assignment operator.
	ParticipantManager(const ParticipantManager& rhs);
	ParticipantManager& operator=(const ParticipantManager& rhs);

	DptfManagerInterface* m_dptfManager;
	EsifServicesInterface* getEsifServices();
	std::map<UIntN, std::shared_ptr<Participant>> m_participants;
};
