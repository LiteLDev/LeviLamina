#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/biome/glue/BiomeJsonDocumentGlue.h"
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
class LinkedAssetValidator;
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
    virtual ~VanillaGameModuleServer() /*override*/ = default;

    virtual void init(::ServerInstance& server, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level) /*override*/;

    virtual void initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
    ) /*override*/;

    virtual void configureLevel(
        ::Bedrock::NotNullNonOwnerPtr<::Level>& level,
        ::Experiments const&                    experiments,
        ::ResourcePackManager&                  resourcePackManager,
        ::BaseGameVersion const&                baseGameVersion,
        ::ServerScriptManager const*            scriptManager,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    virtual void configureNewPlayer(::Player& player) /*override*/;

    virtual void configureDocumentation(
        ::IGameModuleDocumentation& moduleDocumentation,
        ::ItemRegistryRef const     docItemRegistry
    ) /*override*/;

    virtual void tick() /*override*/;

    virtual void setupCommands(::CommandRegistry& commandRegistry) /*override*/;

    virtual void configureServerNetworkHandler(
        ::ServerInstance&                                     server,
        ::Bedrock::NotNullNonOwnerPtr<::ServerNetworkHandler> handler
    ) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _configureWorldGen(
        ::IWorldRegistriesProvider&                        worldRegistries,
        ::SpawnSettings const&                             spawnSettings,
        ::Experiments const&                               experiments,
        ::ResourcePackManager&                             resourcePackManager,
        ::BaseGameVersion const&                           baseGameVersion,
        ::LevelStorage*                                    levelStorage,
        ::cereal::ReflectionCtx&                           ctx,
        ::Bedrock::NonOwnerPointer<::LinkedAssetValidator> linkedAssetValidator,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCAPI void _registerListeners(::Bedrock::NotNullNonOwnerPtr<::Level> const& level, bool realmsStoriesEnabled);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::ServerInstance& server, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level);

    MCAPI void $initializeBehaviorStack(
        ::Experiments const&                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        bool                                                            includeEditorPacks
    );

    MCAPI void $configureLevel(
        ::Bedrock::NotNullNonOwnerPtr<::Level>& level,
        ::Experiments const&                    experiments,
        ::ResourcePackManager&                  resourcePackManager,
        ::BaseGameVersion const&                baseGameVersion,
        ::ServerScriptManager const*            scriptManager,
        ::std::optional<::std::reference_wrapper<
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlue::ResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCFOLD void $configureNewPlayer(::Player& player);

    MCFOLD void
    $configureDocumentation(::IGameModuleDocumentation& moduleDocumentation, ::ItemRegistryRef const docItemRegistry);

    MCFOLD void $tick();

    MCAPI void $setupCommands(::CommandRegistry& commandRegistry);

    MCAPI void $configureServerNetworkHandler(
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
