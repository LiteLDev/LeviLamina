#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CommandRegistry;
class Experiments;
class IGameModuleDocumentation;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class Player;
class ResourcePackManager;
class ResourcePackStack;
class ServerInstance;
class ServerNetworkHandler;
class ServerScriptManager;
// clang-format on

class GameModuleServer : public ::AppExtensions::AppExtensionsNonOwner {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~GameModuleServer() /*override*/;

    // vIndex: 2
    virtual void init(::ServerInstance&, ::Bedrock::NotNullNonOwnerPtr<::Level> const&) = 0;

    // vIndex: 3
    virtual void initializeBehaviorStack(::Experiments const&, ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&, ::ResourcePackStack&, ::BaseGameVersion const&, bool) = 0;

    // vIndex: 4
    virtual void configureLevel(::Bedrock::NotNullNonOwnerPtr<::Level>&, ::Experiments const&, ::ResourcePackManager&, ::BaseGameVersion const&, ::ServerScriptManager const*, ::std::optional<::std::reference_wrapper<::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>) = 0;

    // vIndex: 5
    virtual void configureNewPlayer(::Player&) = 0;

    // vIndex: 6
    virtual void configureDocumentation(::IGameModuleDocumentation&, ::ItemRegistryRef const) = 0;

    // vIndex: 7
    virtual void tick() = 0;

    // vIndex: 8
    virtual void setupCommands(::CommandRegistry&) = 0;

    // vIndex: 9
    virtual void configureServerNetworkHandler(::ServerInstance&, ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
