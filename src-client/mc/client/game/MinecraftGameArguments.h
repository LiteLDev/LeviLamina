#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class AppPlatform;
class IMinecraftEventing;
class IReconnectController;
class ServicesManager;
struct GameReconnector;
namespace Memory { class MemoryPageInfoSampler; }
namespace Social { class MultiplayerServiceManager; }
namespace Social { class UserManager; }
namespace World { class WorldSystem; }
namespace World { struct WorldSystemModuleGameDependencies; }
// clang-format on

struct MinecraftGameArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk9fb877;
    ::ll::UntypedStorage<8, 8>  mUnkbedbcc;
    ::ll::UntypedStorage<8, 64> mUnk970eb0;
    ::ll::UntypedStorage<8, 64> mUnk93dce2;
    ::ll::UntypedStorage<8, 64> mUnk569bc7;
    ::ll::UntypedStorage<8, 64> mUnke11c65;
    ::ll::UntypedStorage<8, 64> mUnkd0996a;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameArguments& operator=(MinecraftGameArguments const&);
    MinecraftGameArguments(MinecraftGameArguments const&);
    MinecraftGameArguments();
};
