#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"

// auto generated forward declare list
// clang-format off
class GameModuleServer;
class IInPackagePacks;
class ServerInstanceEventCoordinator;
// clang-format on

class IGameModuleShared : public ::AppExtensions::AppExtensionsNonOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IGameModuleShared() /*override*/ = default;

    // vIndex: 2
    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() = 0;

    // vIndex: 4
    virtual void registerMolangQueries() = 0;

    // vIndex: 5
    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
