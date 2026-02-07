#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
class Vec3;
// clang-format on

class ParticlesPointCloudEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::ParticleType>                              mParticleType;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::Vec3, ::Vec3>>> mParticles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void load(::CompoundTag const& data);

    MCNAPI ~ParticlesPointCloudEvent();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
