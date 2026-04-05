#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class EntityRegistry;
// clang-format on

namespace RewindSimulation {

class ExternalDataSwapper {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk715c15;
    ::ll::UntypedStorage<8, 8> mUnk35b1b9;
    ::ll::UntypedStorage<8, 8> mUnkbe32a4;
    ::ll::UntypedStorage<8, 8> mUnk6bac2b;
    // NOLINTEND

public:
    // prevent constructor by default
    ExternalDataSwapper& operator=(ExternalDataSwapper const&);
    ExternalDataSwapper(ExternalDataSwapper const&);
    ExternalDataSwapper();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit ExternalDataSwapper(::EntityRegistry& registry);

    MCNAPI ~ExternalDataSwapper();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::EntityRegistry& registry);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};

} // namespace RewindSimulation
