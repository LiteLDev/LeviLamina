#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class GameModuleServer;
class IInPackagePacks;
class ServerInstanceEventCoordinator;
// clang-format on

class IGameModuleShared {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameModuleShared() = default;

    // vIndex: 1
    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() = 0;

    // vIndex: 3
    virtual void registerMolangQueries() = 0;

    // vIndex: 4
    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator&) = 0;
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
