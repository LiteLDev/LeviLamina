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
    virtual ~IGameModuleShared() /*override*/ = default;

    virtual ::std::unique_ptr<::GameModuleServer> createGameModuleServer() = 0;

    virtual ::std::shared_ptr<::IInPackagePacks> createInPackagePacks() = 0;

    virtual void registerMolangQueries() = 0;

    virtual void registerServerInstanceHandler(::ServerInstanceEventCoordinator&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
