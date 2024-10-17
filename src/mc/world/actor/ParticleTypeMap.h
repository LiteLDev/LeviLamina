#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/actor/ParticleType.h"

class ParticleTypeMap {
public:
    // prevent constructor by default
    ParticleTypeMap& operator=(ParticleTypeMap const&);
    ParticleTypeMap(ParticleTypeMap const&);
    ParticleTypeMap();

public:
    // NOLINTBEGIN
    MCAPI static class HashedString const& getParticleName(::ParticleType type);

    MCAPI static ::ParticleType getParticleTypeId(std::string const& str);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ParticleType, class HashedString> const& map();

    // NOLINTEND
};
