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
struct LevelSummary;
// clang-format on

class IGameServerStartup {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IGameServerStartup() = default;

    virtual bool canStartLocalServer() const = 0;

    virtual ::Bedrock::Threading::Async<void> startLocalServerAsync(
        ::std::string const&,
        ::std::string const&,
        ::ContentIdentity const&,
        ::LevelSettings const&,
        ::StartIntent
    ) = 0;

    virtual bool isHostingLocalDedicatedServer() const = 0;

    virtual ::TaskGroup& _getServerInitTaskGroup() = 0;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Threading::Async<void> startLocalServerAsyncFromSummary(::LevelSummary const& levelSummary);

    MCNAPI bool startLocalServerBlocking(
        ::std::string const&     levelId,
        ::std::string const&     levelName,
        ::ContentIdentity const& premiumTemplateContentIdentity,
        ::LevelSettings const&   settings,
        ::StartIntent            startIntent
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
