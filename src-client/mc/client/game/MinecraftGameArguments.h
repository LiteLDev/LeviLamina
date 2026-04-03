#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IMinecraftEventing;
namespace World { class WorldSystem; }
namespace World { struct WorldSystemModuleGameDependencies; }
// clang-format on

struct MinecraftGameArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkbedbcc;
    ::ll::UntypedStorage<8, 64> mUnk970eb0;
    ::ll::UntypedStorage<8, 64> mUnk93dce2;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameArguments& operator=(MinecraftGameArguments const&);
    MinecraftGameArguments(MinecraftGameArguments const&);
    MinecraftGameArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~MinecraftGameArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
