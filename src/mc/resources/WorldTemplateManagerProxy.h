#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct WorldTemplateManagerProxyCallbacks;
// clang-format on

class WorldTemplateManagerProxy {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 192> mUnk812f17;
    // NOLINTEND

public:
    // prevent constructor by default
    WorldTemplateManagerProxy& operator=(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy(WorldTemplateManagerProxy const&);
    WorldTemplateManagerProxy();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WorldTemplateManagerProxy(::WorldTemplateManagerProxyCallbacks const& callbacks);

    MCAPI ~WorldTemplateManagerProxy();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::WorldTemplateManagerProxyCallbacks const& callbacks);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
