#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/data/BidirectionalUnorderedMap.h"
#include "mc/enums/ParticleType.h"

class ParticleTypeMap {
public:
    // prevent constructor by default
    ParticleTypeMap& operator=(ParticleTypeMap const&);
    ParticleTypeMap(ParticleTypeMap const&);
    ParticleTypeMap();

public:
    // NOLINTBEGIN
    MCAPI static class HashedString const& getParticleName(::ParticleType);

    MCAPI static ::ParticleType getParticleTypeId(std::string const& str);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static class BidirectionalUnorderedMap<::ParticleType, class HashedString> const map;

    // NOLINTEND
};
