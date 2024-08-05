#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"
#include "mc/world/module/GameModuleServer.h"

// auto generated forward declare list
// clang-format off
namespace VanillaSystemsRegistration { struct RegistrationOptions; }
// clang-format on

class VanillaGameModuleServer : public ::GameModuleServer {
public:
    // prevent constructor by default
    VanillaGameModuleServer& operator=(VanillaGameModuleServer const&);
    VanillaGameModuleServer(VanillaGameModuleServer const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~VanillaGameModuleServer() = default;

    // vIndex: 1
    virtual void init(class ServerInstance& server, Bedrock::NotNullNonOwnerPtr<class Level> const& level);

    // vIndex: 2
    virtual void initializeBehaviorStack(
        class Experiments const&,
        Bedrock::NotNullNonOwnerPtr<class IResourcePackRepository> const&,
        class ResourcePackStack&,
        class BaseGameVersion const&,
        bool
    );

    // vIndex: 3
    virtual void
    configureLevel(Bedrock::NotNullNonOwnerPtr<class Level> const&, class Experiments const&, class ResourcePackManager&, class BaseGameVersion const&, std::optional<gsl::not_null<class ServerScriptManager const*>>);

    // vIndex: 4
    virtual void configureNewPlayer(class Player& player);

    // vIndex: 5
    virtual void configureDocumentation(class IGameModuleDocumentation& moduleDocumentation, class ItemRegistryRef);

    // vIndex: 6
    virtual void tick();

    // vIndex: 7
    virtual void setupCommands(class CommandRegistry& commandRegistry);

    // vIndex: 8
    virtual void configureServerNetworkHandler(
        class ServerInstance&                                   server,
        Bedrock::NotNullNonOwnerPtr<class ServerNetworkHandler> handler
    );

    MCAPI VanillaGameModuleServer();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void
    _configureEntitySystems(Bedrock::NotNullNonOwnerPtr<class Level> const& level, class ResourcePackManager& resourcePackManager, class Experiments const&, struct VanillaSystemsRegistration::RegistrationOptions const&);

    MCAPI void _configureWorldGen(
        class IWorldRegistriesProvider& worldRegistries,
        struct SpawnSettings const&     spawnSettings,
        class Experiments const&        experiments,
        class ResourcePackManager&      resourcePackManager,
        class BaseGameVersion const&    baseGameVersion
    );

    MCAPI void _registerListeners(Bedrock::NotNullNonOwnerPtr<class Level> const&, bool);

    // NOLINTEND
};
