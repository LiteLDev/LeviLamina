#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/LevelArguments.h"

// auto generated forward declare list
// clang-format off
class CommandManager;
class ResourcePackManager;
// clang-format on

struct ServerLevelArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 312, ::LevelArguments>                  mBase;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>              mServerResourcePackManager;
    ::ll::TypedStorage<8, 8, ::ResourcePackManager&>              mClientResourcePackManager;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandManager>> mCommandManager;
    // NOLINTEND

public:
    // prevent constructor by default
    ServerLevelArguments& operator=(ServerLevelArguments const&);
    ServerLevelArguments(ServerLevelArguments const&);
    ServerLevelArguments();
};
