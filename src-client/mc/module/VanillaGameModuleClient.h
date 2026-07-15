#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/module/GameModuleClient.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BaseGameVersion;
class ClientInputMappingFactory;
class ClientLevel;
class CommandRegistry;
class Experiments;
class GameModuleDocumentation;
class IClientInstance;
class IResourcePackRepository;
class ItemRegistryRef;
class Level;
class ResourcePackStack;
class ServerboundDiagnosticsPacket;
// clang-format on

class VanillaGameModuleClient : public ::GameModuleClient {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5e0158;
    ::ll::UntypedStorage<8, 8>  mUnkf1ce19;
    ::ll::UntypedStorage<8, 8>  mUnke1f776;
    ::ll::UntypedStorage<8, 8>  mUnk4ab956;
    ::ll::UntypedStorage<8, 8>  mUnkdd8a64;
    ::ll::UntypedStorage<8, 8>  mUnk6f8df0;
    ::ll::UntypedStorage<8, 8>  mUnkadce9b;
    ::ll::UntypedStorage<8, 8>  mUnk84fc3a;
    ::ll::UntypedStorage<8, 8>  mUnkee2df3;
    ::ll::UntypedStorage<8, 8>  mUnkcb9508;
    ::ll::UntypedStorage<8, 16> mUnk33240b;
    ::ll::UntypedStorage<8, 16> mUnk436b59;
    ::ll::UntypedStorage<8, 24> mUnk31c50a;
    ::ll::UntypedStorage<8, 24> mUnkeda6d9;
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
    virtual ~VanillaGameModuleClient() /*override*/ = default;

    virtual void init(::IClientInstance&, ::Bedrock::NotNullNonOwnerPtr<::Level> const&) /*override*/;

    virtual void initializeResourceStack(
        ::Experiments const*,
        ::Bedrock::NotNullNonOwnerPtr<::IResourcePackRepository> const&,
        ::ResourcePackStack&,
        ::BaseGameVersion const&,
        ::GameModuleClient::ResourceLoadingPhase,
        bool
    ) /*override*/;

    virtual void configureLevel(
        ::IClientInstance&,
        ::Bedrock::NotNullNonOwnerPtr<::ClientLevel> const&,
        ::Experiments const&,
        ::BaseGameVersion const&
    ) /*override*/;

    virtual void deconfigureLevel(::IClientInstance&) /*override*/;

    virtual void configureDocumentation(::GameModuleDocumentation&, ::ItemRegistryRef const) /*override*/;

    virtual void tick() /*override*/;

    virtual void setupStandardCommands(::CommandRegistry&) /*override*/;

    virtual void setupStartMenuScreenCommands(::CommandRegistry&) /*override*/;

    virtual void setupUI() /*override*/;

    virtual void registerActorRenderers(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&) /*override*/;

    virtual ::std::unique_ptr<::ClientInputMappingFactory> createInputMappingFactory(::IClientInstance&) /*override*/;

    virtual ::std::shared_ptr<void> registerVanillaGoalsForUpgrader(
        ::Experiments const&,
        ::BaseGameVersion const&,
        ::ItemRegistryRef const,
        ::ActorMigratedDefinitionFactory&
    ) const /*override*/;

    virtual ::ServerboundDiagnosticsPacket createServerboundDiagnosticsPacket() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
