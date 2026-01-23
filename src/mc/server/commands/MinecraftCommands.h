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
class Experiments;
class HashedString;
class ICommandsContextProvider;
class ItemRegistryRef;
class Level;
class Recipes;
struct MCRESULT;
struct MinecraftCommandsArguments;
namespace br::worldgen { class StructureRegistry; }
// clang-format on

class MinecraftCommands {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ICommandsContextProvider&>              mContextProvider;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandRegistry>>     mRegistry;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::CommandOutputSender>> mOutputSender;
    ::ll::TypedStorage<1, 1, ::CommandPermissionLevel>                 mOpPermissionLevel;
    ::ll::TypedStorage<8, 64, ::std::function<bool()>>                 mChatPermissionsCallback;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::HashedString, ::std::unique_ptr<::Command>>> mCompiledCommandMap;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::DeferredCommandBase>>>            mDeferredCommands;
    ::ll::TypedStorage<8, 8, uint64> mDeferredScriptCommandCount;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftCommands& operator=(MinecraftCommands const&);
    MinecraftCommands(MinecraftCommands const&);
    MinecraftCommands();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftCommands();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MinecraftCommands(::MinecraftCommandsArguments&& args);

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

    MCAPI ::MCRESULT executeCommand(::CommandContext& context, bool suppressOutput) const;

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

    MCAPI_C ::MCRESULT requestCommandExecution(
        ::std::unique_ptr<::CommandOrigin> origin,
        ::std::string const&               commandLine,
        int                                version,
        bool                               suppressOutput
    );

    MCAPI_C void tick();
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
    MCAPI void* $ctor(::MinecraftCommandsArguments&& args);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
