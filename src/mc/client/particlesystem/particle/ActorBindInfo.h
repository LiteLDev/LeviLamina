#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ParticleSystem {

struct ActorBindInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkc7e244;
    ::ll::UntypedStorage<8, 48> mUnk8ed9e2;
    ::ll::UntypedStorage<4, 12> mUnkcb02d8;
    // NOLINTEND

public:
    // prevent constructor by default
    ActorBindInfo& operator=(ActorBindInfo const&);
    ActorBindInfo(ActorBindInfo const&);
    ActorBindInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ~ActorBindInfo();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ParticleSystem
