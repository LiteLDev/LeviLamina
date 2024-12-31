#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/game/StartIntent.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
class ContentIdentity;
class LevelSettings;
struct LevelSummary;
// clang-format on

class IGameServerStartup {
public:
    // prevent constructor by default
    IGameServerStartup& operator=(IGameServerStartup const&);
    IGameServerStartup(IGameServerStartup const&);
    IGameServerStartup();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameServerStartup() = default;

    // vIndex: 1
    virtual bool canStartLocalServer() const = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>>
    startLocalServerAsyncFromSummary(::LevelSummary const&) = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<void>> startLocalServerAsync(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::StartIntent
    ) = 0;

    // vIndex: 4
    virtual bool startLocalServerBlocking(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::StartIntent
    ) = 0;

    // vIndex: 5
    virtual bool isHostingLocalDedicatedServer() const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
