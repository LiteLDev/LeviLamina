#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/server/commands/CommandOutputType.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/CurrentCmdVersion.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionGroup;
class ActorFactory;
class BaseGameVersion;
class CameraPresets;
class Command;
class CommandContext;
class CommandOrigin;
class CommandOutput;
class CommandOutputSender;
class CommandRegistry;
class DeferredCommandBase;
class DeferredScriptCommand;
class Experiments;
class HashedString;
class ItemRegistryRef;
class Level;
class Minecraft;
class Packet;
class Recipes;
struct MCRESULT;
namespace br::worldgen { class StructureRegistry; }
// clang-format on

class MinecraftCommands {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOutputSender>> mOutputSender;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry>>     mRegistry;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                 mOpPermissionLevel;
    ::ll::TypedStorage<8, 8, ::Minecraft&>                             mMinecraft;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                 mChatPermissionsCallback;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::unique_ptr<::Command>>> mCompiledCommandMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DeferredCommandBase>>>            mDeferredCommands;
    ::ll::TypedStorage<8, 8, uint64> mDeferredScriptCommandCount;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftCommands();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftCommands(::Minecraft& minecraft);

    MCAPI ::Command* compileCommand(
        ::HashedString const&                       commandStr,
        ::CommandOrigin&                            origin,
        ::CurrentCmdVersion                         commandVersion,
        ::std::function<void(::std::string const&)> onParserError
    );

    MCAPI void enqueueDeferredCommand(
        ::std::unique_ptr<::CommandContext> context,
        bool                                suppressOutput,
        bool                                isRequest,
        ::std::function<void(::MCRESULT)>   callback
    );

    MCAPI void
    enqueueDeferredCompiledCommand(::gsl::not_null<::Command*> command, ::std::unique_ptr<::CommandOrigin> origin);

    MCAPI bool enqueueDeferredScriptCommand(::std::unique_ptr<::DeferredScriptCommand> scriptCommand);

    MCAPI ::MCRESULT executeCommand(::CommandContext& context, bool suppressOutput) const;

    MCAPI ::CommandRegistry& getRegistry();

    MCAPI void handleOutput(::CommandOrigin const& origin, ::CommandOutput const& output) const;

    MCAPI void initCoreEnums(
        ::ItemRegistryRef        itemRegistry,
        ::Level const&           level,
        ::ActorFactory const&    actorFactory,
        ::Experiments const&     experiments,
        ::BaseGameVersion const& worldBaseGameVersion
    );

    MCAPI void initCoreEnumsServer(
        ::ActorDefinitionGroup const& actorDefinitionGroup,
        ::CameraPresets const&        cameraPresets,
        ::Recipes const&              recipes
    );

    MCAPI ::MCRESULT requestCommandExecution(::CommandContext& context, bool suppressOutput);

    MCAPI void runCommand(::Command& command, ::CommandOrigin& origin);

    MCAPI void
    runCommand(::HashedString const& commandStr, ::CommandOrigin& origin, ::CurrentCmdVersion commandVersion);

    MCAPI void setRegistryNetworkUpdateCallback(::std::function<void(::Packet const&)> callback) const;

    MCAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CommandOutputType getOutputType(::CommandOrigin const& origin);

    MCAPI static void initBlockEnum(::CommandRegistry& registry, ::BaseGameVersion const& worldBaseGameVersion);

    MCAPI static void
    initEntityEnum(::CommandRegistry& registry, ::ActorFactory const& actorFactory, ::Experiments const& experiments);

    MCAPI static void initEntityPropertyEnum(::CommandRegistry& registry, ::Level const& level);

    MCAPI static void initItemEnum(
        ::ItemRegistryRef        itemRegistry,
        ::CommandRegistry&       registry,
        ::BaseGameVersion const& worldBaseGameVersion
    );

    MCAPI static void initItemTagEnum(::ItemRegistryRef itemRegistry, ::CommandRegistry& registry);

    MCAPI static void initStructureFeatureEnum(
        ::CommandRegistry&                       registry,
        ::Experiments const&                     experiments,
        ::br::worldgen::StructureRegistry const& structureRegistry
    );

    MCAPI static void initUnlockableRecipesEnum(::CommandRegistry& registry, ::Recipes const& recipes);

    MCAPI static void registerSharedClientServerEnums(::CommandRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Minecraft& minecraft);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
