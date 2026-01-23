#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/app_extensions/AppExtensionsNonOwner.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class ClientInputMappingFactory;
class CommandRegistry;
class Experiments;
class GameModuleDocumentation;
class IClientInstance;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class ResourcePackStack;
struct MultiPlayerLevel;
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
        ::IClientInstance&,
        ::Bedrock::NotNullNonOwnerPtr<::MultiPlayerLevel> const&,
        ::Experiments const&,
        ::BaseGameVersion const&
    ) = 0;

    virtual void deconfigureLevel(::IClientInstance&) = 0;

    virtual void initializeResourceStack(
        ::Experiments const*,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&,
        ::ResourcePackStack&,
        ::BaseGameVersion const&,
        ::GameModuleClient::ResourceLoadingPhase,
        bool
    ) = 0;

    virtual void configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const) = 0;

    virtual void tick() = 0;

    virtual void setupStandardCommands(::CommandRegistry&) = 0;

    virtual void setupStartMenuScreenCommands(::CommandRegistry&) = 0;

    virtual void setupUI() = 0;

    virtual void registerActorRenderers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&) = 0;

    virtual ::std::unique_ptr<::ClientInputMappingFactory> createInputMappingFactory(::IClientInstance&) = 0;
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
