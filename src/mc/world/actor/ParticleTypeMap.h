#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/BidirectionalUnorderedMap.h"
#include "mc/world/actor/ParticleType.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

class ParticleTypeMap {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::HashedString const& getParticleName(::ParticleType type);

    MCAPI static ::ParticleType getParticleTypeId(::std::string const& str);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::BidirectionalUnorderedMap<::ParticleType, ::HashedString> const& map();
    // NOLINTEND
};
