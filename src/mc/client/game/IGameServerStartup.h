#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/StartIntent.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class LevelSettings;
class TaskGroup;
// clang-format on

class IGameServerStartup {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameServerStartup() = default;

    // vIndex: 1
    virtual bool canStartLocalServer() const = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<void> startLocalServerAsync(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::StartIntent
    ) = 0;

    // vIndex: 3
    virtual bool isHostingLocalDedicatedServer() const = 0;

    // vIndex: 4
    virtual ::TaskGroup& _getServerInitTaskGroup() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
