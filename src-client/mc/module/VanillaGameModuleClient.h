#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/module/GameModuleClient.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BaseGameVersion;
class BiomeRegistry;
class ClientInputMappingFactory;
class CommandRegistry;
class EntitySystems;
class Experiments;
class FrameAnomalyDetector;
class GameModuleDocumentation;
class IClientInstance;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class MultiPlayerLevel;
class ResourcePackStack;
class ServerboundDiagnosticsPacket;
struct GameModuleClientArgs;
namespace GameplayUI { struct GameplayUIContext; }
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class VanillaGameModuleClient : public ::GameModuleClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5e0158;
    ::ll::UntypedStorage<8, 8>  mUnkf1ce19;
    ::ll::UntypedStorage<8, 8>  mUnk4ab956;
    ::ll::UntypedStorage<8, 8>  mUnkdd8a64;
    ::ll::UntypedStorage<8, 8>  mUnk6f8df0;
    ::ll::UntypedStorage<8, 8>  mUnkadce9b;
    ::ll::UntypedStorage<8, 8>  mUnk84fc3a;
    ::ll::UntypedStorage<8, 8>  mUnkee2df3;
    ::ll::UntypedStorage<8, 8>  mUnkcb9508;
    ::ll::UntypedStorage<8, 16> mUnk33240b;
    ::ll::UntypedStorage<8, 24> mUnk31c50a;
    ::ll::UntypedStorage<8, 8>  mUnkd23d66;
    ::ll::UntypedStorage<8, 16> mUnkd24109;
    ::ll::UntypedStorage<8, 16> mUnk852403;
    ::ll::UntypedStorage<1, 1>  mUnk16e252;
    // NOLINTEND

public:
    // prevent constructor by default
    VanillaGameModuleClient& operator=(VanillaGameModuleClient const&);
    VanillaGameModuleClient(VanillaGameModuleClient const&);
    VanillaGameModuleClient();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~VanillaGameModuleClient() /*override*/;

    virtual void init(::IClientInstance& client, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level) /*override*/;

    virtual void initializeResourceStack(
        ::Experiments const*                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        ::GameModuleClient::ResourceLoadingPhase                        loadingPhase,
        bool                                                            includeEditorPacks
    ) /*override*/;

    virtual void configureLevel(
        ::IClientInstance&                                       client,
        ::Bedrock::NotNullNonOwnerPtr<::MultiPlayerLevel> const& level,
        ::Experiments const&                                     experiments,
        ::BaseGameVersion const&                                 baseGameVersion
    ) /*override*/;

    virtual void deconfigureLevel(::IClientInstance& client) /*override*/;

    virtual void
    configureDocumentation(::GameModuleDocumentation& docItemRegistry, ::ItemRegistryRef const) /*override*/;

    virtual void tick() /*override*/;

    virtual void setupStandardCommands(::CommandRegistry& commandRegistry) /*override*/;

    virtual void setupStartMenuScreenCommands(::CommandRegistry&) /*override*/;

    virtual void setupUI() /*override*/;

    virtual void registerActorRenderers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client) /*override*/;

    virtual ::std::unique_ptr<::ClientInputMappingFactory>
    createInputMappingFactory(::IClientInstance& client) /*override*/;

    virtual ::std::shared_ptr<void> registerVanillaGoalsForUpgrader(
        ::Experiments const&              experiments,
        ::BaseGameVersion const&          baseGameVersion,
        ::ItemRegistryRef const           itemRegistryRef,
        ::ActorMigratedDefinitionFactory& migratedFactory
    ) const /*override*/;

    virtual ::ServerboundDiagnosticsPacket createServerboundDiagnosticsPacket() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI VanillaGameModuleClient(
        ::GameModuleClientArgs                                       args,
        ::GameplayUI::GameplayUIContext&                             gameplayUIContext,
        ::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector> const& frameAnomalyDetector
    );

    MCAPI void _configureEntitySystems(
        ::EntitySystems&                                         systemRegistry,
        ::IClientInstance&                                       client,
        ::VanillaSystemsRegistration::RegistrationOptions const& registrationOptions,
        bool                                                     defaultRegistration
    );

    MCAPI void _registerListeners(::IClientInstance& client, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void _onLevelBiomesRegistered(::BiomeRegistry& biomeRegistry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::GameModuleClientArgs                                       args,
        ::GameplayUI::GameplayUIContext&                             gameplayUIContext,
        ::Bedrock::NotNullNonOwnerPtr<::FrameAnomalyDetector> const& frameAnomalyDetector
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::IClientInstance& client, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level);

    MCAPI void $initializeResourceStack(
        ::Experiments const*                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        ::GameModuleClient::ResourceLoadingPhase                        loadingPhase,
        bool                                                            includeEditorPacks
    );

    MCAPI void $configureLevel(
        ::IClientInstance&                                       client,
        ::Bedrock::NotNullNonOwnerPtr<::MultiPlayerLevel> const& level,
        ::Experiments const&                                     experiments,
        ::BaseGameVersion const&                                 baseGameVersion
    );

    MCAPI void $deconfigureLevel(::IClientInstance& client);

    MCFOLD void $configureDocumentation(::GameModuleDocumentation& docItemRegistry, ::ItemRegistryRef const);

    MCAPI void $tick();

    MCAPI void $setupStandardCommands(::CommandRegistry& commandRegistry);

    MCFOLD void $setupStartMenuScreenCommands(::CommandRegistry&);

    MCAPI void $setupUI();

    MCAPI void $registerActorRenderers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client);

    MCFOLD ::std::unique_ptr<::ClientInputMappingFactory> $createInputMappingFactory(::IClientInstance& client);

    MCAPI ::std::shared_ptr<void> $registerVanillaGoalsForUpgrader(
        ::Experiments const&              experiments,
        ::BaseGameVersion const&          baseGameVersion,
        ::ItemRegistryRef const           itemRegistryRef,
        ::ActorMigratedDefinitionFactory& migratedFactory
    ) const;

    MCAPI ::ServerboundDiagnosticsPacket $createServerboundDiagnosticsPacket();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
