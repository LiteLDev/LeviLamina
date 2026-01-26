#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ECS::Profiling {

class EntitySystemProfiler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>      mUnkeaafc6;
    ::ll::UntypedStorage<8, 8>      mUnk206cab;
    ::ll::UntypedStorage<8, 16>     mUnk65eb32;
    ::ll::UntypedStorage<8, 64>     mUnka1e533;
    ::ll::UntypedStorage<8, 3256>   mUnka6ff4b;
    ::ll::UntypedStorage<8, 736056> mUnk150727;
    // NOLINTEND

public:
    // prevent constructor by default
    EntitySystemProfiler& operator=(EntitySystemProfiler const&);
    EntitySystemProfiler(EntitySystemProfiler const&);
    EntitySystemProfiler();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C void UninstallHooks();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace ECS::Profiling
