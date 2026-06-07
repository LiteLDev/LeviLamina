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
class LinkedAssetValidator;
class Player;
class ResourcePackManager;
class ResourcePackStack;
class ServerInstance;
class ServerNetworkHandler;
class ServerScriptManager;
struct BiomeJsonDocumentGlueResolvedBiomeData;
struct SpawnSettings;
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

class VanillaGameModuleServer : public ::GameModuleServer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk7ee23b;
    ::ll::UntypedStorage<8, 8>  mUnk3398c6;
    ::ll::UntypedStorage<8, 8>  mUnkf51e1c;
    ::ll::UntypedStorage<8, 16> mUnkf08fc4;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaGameModuleServer& operator=(VanillaGameModuleServer const&);
    VanillaGameModuleServer(VanillaGameModuleServer const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaGameModuleServer() /*override*/;

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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    ) /*override*/;

    virtual void configureNewPlayer(::Player&) /*override*/;

    virtual void
    configureDocumentation(::IGameModuleDocumentation& docItemRegistry, ::ItemRegistryRef const) /*override*/;

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
    MCAPI VanillaGameModuleServer();

    MCAPI void _configureEntitySystems(
        ::Bedrock::NotNullNonOwnerPtr<::Level> const& level,
        ::ResourcePackManager&                        registrationOptions,
        ::Experiments const&,
        ::VanillaSystemsRegistration::RegistrationOptions const&
    );

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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCAPI void _registerListeners(::Bedrock::NotNullNonOwnerPtr<::Level> const& level, bool realmsStoriesEnabled);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
            ::std::unordered_map<::std::string, ::std::unique_ptr<::BiomeJsonDocumentGlueResolvedBiomeData>>>>
            biomeIdToResolvedData
    );

    MCFOLD void $configureNewPlayer(::Player&);

    MCAPI void $configureDocumentation(::IGameModuleDocumentation& docItemRegistry, ::ItemRegistryRef const);

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
