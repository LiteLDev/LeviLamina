#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BaseGameVersion;
class ClientInputMappingFactory;
class CommandRegistry;
class Experiments;
class GameModuleDocumentation;
class IClientInstance;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class MultiPlayerLevel;
class ResourcePackStack;
// clang-format on

class GameModuleClient : public ::AppExtensions::AppExtensionsNonOwner {
public:
    // GameModuleClient inner types define
    enum class ResourceLoadingPhase : int {
        AppStartup = 0,
        Frontend   = 1,
        InGame     = 2,
    };

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameModuleClient() /*override*/;

    virtual void init(::IClientInstance& client, ::Bedrock::NotNullNonOwnerPtr<::Level> const& level) = 0;

    virtual void configureLevel(
        ::IClientInstance&                                       client,
        ::Bedrock::NotNullNonOwnerPtr<::MultiPlayerLevel> const& level,
        ::Experiments const&                                     experiments,
        ::BaseGameVersion const&                                 baseGameVersion
    ) = 0;

    virtual void deconfigureLevel(::IClientInstance& client) = 0;

    virtual void initializeResourceStack(
        ::Experiments const*                                            experiments,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const& repo,
        ::ResourcePackStack&                                            stack,
        ::BaseGameVersion const&                                        baseGameVersion,
        ::GameModuleClient::ResourceLoadingPhase                        loadingPhase,
        bool                                                            includeEditorPacks
    ) = 0;

    virtual void configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const) = 0;

    virtual void tick() = 0;

    virtual void setupStandardCommands(::CommandRegistry& commandRegistry) = 0;

    virtual void setupStartMenuScreenCommands(::CommandRegistry& commandRegistry) = 0;

    virtual void setupUI() = 0;

    virtual void registerActorRenderers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& client) = 0;

    virtual ::std::unique_ptr<::ClientInputMappingFactory> createInputMappingFactory(::IClientInstance& client) = 0;

    virtual void registerVanillaGoalsForUpgrader(::ActorMigratedDefinitionFactory& migratedFactory) const = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
