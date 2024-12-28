#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class CompoundTag;
// clang-format on

class ParticlesTeleportTrailEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk98eb22;
    ::ll::UntypedStorage<4, 12> mUnkf368b2;
    ::ll::UntypedStorage<4, 8>  mUnkce5ffe;
    ::ll::UntypedStorage<4, 4>  mUnk6b7152;
    ::ll::UntypedStorage<4, 4>  mUnk2dc625;
    // NOLINTEND

public:
    // prevent constructor by default
    ParticlesTeleportTrailEvent& operator=(ParticlesTeleportTrailEvent const&);
    ParticlesTeleportTrailEvent(ParticlesTeleportTrailEvent const&);
    ParticlesTeleportTrailEvent();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::std::unique_ptr<::CompoundTag> save() const;
    // NOLINTEND
};
