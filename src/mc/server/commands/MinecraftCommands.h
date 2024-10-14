#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/utility/MCRESULT.h"
#include "mc/server/commands/CommandContext.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputType.h"
#include "mc/server/commands/CurrentCmdVersion.h"

class MinecraftCommands {
public:
    std::unique_ptr<class CommandOutputSender> mOutputSender; // this+0x8
    std::unique_ptr<class CommandRegistry>     mRegistry;     // this+0x10
    // ...

    // prevent constructor by default
    MinecraftCommands& operator=(MinecraftCommands const&);
    MinecraftCommands(MinecraftCommands const&);
    MinecraftCommands();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftCommands();

    MCAPI explicit MinecraftCommands(class Minecraft& minecraft);

    MCAPI class Command* compileCommand(
        class HashedString const&               commandStr,
        class CommandOrigin&                    origin,
        ::CurrentCmdVersion                     commandVersion,
        std::function<void(std::string const&)> onParserError
    );

    MCAPI void enqueueDeferredCommand(
        std::unique_ptr<class CommandContext> context,
        bool                                  suppressOutput,
        bool                                  isRequest,
        std::function<void(struct MCRESULT)>  callback
    );

    MCAPI void
    enqueueDeferredCompiledCommand(gsl::not_null<class Command*> command, std::unique_ptr<class CommandOrigin> origin);

    MCAPI bool enqueueDeferredScriptCommand(std::unique_ptr<class DeferredScriptCommand> scriptCommand);

    MCAPI struct MCRESULT executeCommand(class CommandContext& context, bool suppressOutput = false) const;

    MCAPI class CommandRegistry& getRegistry();

    MCAPI void handleOutput(class CommandOrigin const& origin, class CommandOutput const& output) const;

    MCAPI void initCoreEnums(
        class ItemRegistryRef        itemRegistry,
        class Level const&           level,
        class ActorFactory const&    actorFactory,
        class Experiments const&     experiments,
        class BaseGameVersion const& worldBaseGameVersion
    );

    MCAPI void initCoreEnumsServer(
        class ActorDefinitionGroup const& actorDefinitionGroup,
        class CameraPresets const&        cameraPresets,
        class Recipes const&              recipes
    );

    MCAPI struct MCRESULT requestCommandExecution(class CommandContext& context, bool suppressOutput);

    MCAPI void runCommand(class Command& command, class CommandOrigin& origin);

    MCAPI void
    runCommand(class HashedString const& commandStr, class CommandOrigin& origin, ::CurrentCmdVersion commandVersion);

    MCAPI void setRegistryNetworkUpdateCallback(std::function<void(class Packet const&)> callback) const;

    MCAPI void tick();

    MCAPI static ::CommandOutputType getOutputType(class CommandOrigin const& origin);

    MCAPI static void initBlockEnum(class CommandRegistry& registry, class BaseGameVersion const& worldBaseGameVersion);

    MCAPI static void initEntityEnum(
        class CommandRegistry&    registry,
        class ActorFactory const& actorFactory,
        class Experiments const&  experiments
    );

    MCAPI static void initEntityPropertyEnum(class CommandRegistry& registry, class Level const& level);

    MCAPI static void initItemEnum(
        class ItemRegistryRef        itemRegistry,
        class CommandRegistry&       registry,
        class BaseGameVersion const& worldBaseGameVersion
    );

    MCAPI static void initItemTagEnum(class ItemRegistryRef itemRegistry, class CommandRegistry& registry);

    MCAPI static void initStructureFeatureEnum(class CommandRegistry& registry, class Experiments const& experiments);

    MCAPI static void initUnlockableRecipesEnum(class CommandRegistry& registry, class Recipes const& recipes);

    MCAPI static void registerSharedClientServerEnums(class CommandRegistry& registry);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    // NOLINTEND
};
