#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace ScriptModuleMinecraftNet {

struct ScriptNetModuleConfig {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkca2a65;
    ::ll::UntypedStorage<1, 2>  mUnk3c990f;
    ::ll::UntypedStorage<4, 8>  mUnk6d2d69;
    ::ll::UntypedStorage<4, 8>  mUnk68ca5d;
    ::ll::UntypedStorage<8, 72> mUnk369b95;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptNetModuleConfig& operator=(ScriptNetModuleConfig const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptNetModuleConfig();

    MCNAPI ScriptNetModuleConfig(::ScriptModuleMinecraftNet::ScriptNetModuleConfig const&);

    MCNAPI ::ScriptModuleMinecraftNet::ScriptNetModuleConfig&
    operator=(::ScriptModuleMinecraftNet::ScriptNetModuleConfig&&);

    MCNAPI ~ScriptNetModuleConfig();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::ScriptModuleMinecraftNet::ScriptNetModuleConfig const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraftNet
