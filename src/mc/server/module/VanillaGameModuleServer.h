#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/module/GameModuleServer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class CommandRegistry;
class Experiments;
class IGameModuleDocumentation;
class IResourcePackRepository;
class IWorldRegistriesProvider;
class ItemRegistryRef;
class Level;
class LevelStorage;
class Player;
class ResourcePackManager;
class ResourcePackStack;
class ServerInstance;
class ServerNetworkHandler;
class ServerScriptManager;
struct SpawnSettings;
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaGameModuleServer : public ::GameModuleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk1138e3;
    ::ll::UntypedStorage<8, 8>  mUnk1e51f3;
    ::ll::UntypedStorage<8, 8>  mUnk2d0737;
    ::ll::UntypedStorage<8, 16> mUnkf08fc4;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaGameModuleServer& operator=(VanillaGameModuleServer const&);
    VanillaGameModuleServer(VanillaGameModuleServer const&);
    VanillaGameModuleServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaGameModuleServer() /*override*/ = default;

    // vIndex: 1
    virtual void init(::Bedrock::NotNullNonOwnerPtr<::Level> const& level) /*override*/;

    // vIndex: 2
    virtual void initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
    ) /*override*/;

    // vIndex: 3
    virtual void configureLevel(
        ::Bedrock::NotNullNonOwnerPtr<::Level> const& level,
        ::Experiments const&                          experiments,
        ::ResourcePackManager&                        resourcePackManager,
        ::BaseGameVersion const&                      baseGameVersion,
        ::ServerScriptManager const*                  scriptManager
    ) /*override*/;

    // vIndex: 4
    virtual void configureNewPlayer(::Player& player) /*override*/;

    // vIndex: 5
    virtual void configureDocumentation(
        ::IGameModuleDocumentation& moduleDocumentation,
        ::ItemRegistryRef const     docItemRegistry
    ) /*override*/;

    // vIndex: 6
    virtual void tick() /*override*/;

    // vIndex: 7
    virtual void setupCommands(::CommandRegistry& commandRegistry) /*override*/;

    // vIndex: 8
    virtual void configureServerNetworkHandler(
        ::ServerInstance&                                     server,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> handler
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _configureWorldGen(
        ::IWorldRegistriesProvider&    worldRegistries,
        ::SpawnSettings const&         spawnSettings,
        ::Experiments const&           experiments,
        ::ResourcePackManager&         resourcePackManager,
        ::BaseGameVersion const&       baseGameVersion,
        ::LevelStorage*                levelStorage,
        ::cereal::ReflectionCtx const& ctx
    );

    MCNAPI void _registerListeners(::Bedrock::NotNullNonOwnerPtr<::Level> const& level);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $init(::Bedrock::NotNullNonOwnerPtr<::Level> const& level);

    MCNAPI void $initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
    );

    MCNAPI void $configureLevel(
        ::Bedrock::NotNullNonOwnerPtr<::Level> const& level,
        ::Experiments const&                          experiments,
        ::ResourcePackManager&                        resourcePackManager,
        ::BaseGameVersion const&                      baseGameVersion,
        ::ServerScriptManager const*                  scriptManager
    );

    MCNAPI void $configureNewPlayer(::Player& player);

    MCNAPI void
    $configureDocumentation(::IGameModuleDocumentation& moduleDocumentation, ::ItemRegistryRef const docItemRegistry);

    MCNAPI void $tick();

    MCNAPI void $setupCommands(::CommandRegistry& commandRegistry);

    MCNAPI void $configureServerNetworkHandler(
        ::ServerInstance&                                     server,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> handler
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
