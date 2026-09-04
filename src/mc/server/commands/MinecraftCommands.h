#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/HashedString.h"
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
class ICommandsContextProvider;
class ItemRegistryRef;
class Level;
class Packet;
class Recipes;
struct MCRESULT;
struct MinecraftCommandsArguments;
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
    virtual ~MinecraftCommands() = default;
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

    MCAPI void
    enqueueDeferredCompiledCommand(::gsl::not_null<::Command*> command, ::std::unique_ptr<::CommandOrigin> origin);

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

#ifdef LL_PLAT_C
    MCAPI void registerChatPermissionsCallback(::std::function<bool()> callback);

    MCAPI ::MCRESULT requestCommandExecution(::CommandContext& context, bool suppressOutput);

    MCAPI ::MCRESULT requestCommandExecution(
        ::std::unique_ptr<::CommandOrigin> origin,
        ::std::string const&               commandLine,
        int                                version,
        bool                               suppressOutput
    );
#endif

    MCAPI void
    runCommand(::HashedString const& commandStr, ::CommandOrigin& origin, ::CurrentCmdVersion commandVersion);

    MCAPI void setRegistryNetworkUpdateCallback(::std::function<void(::Packet const&)> callback) const;

    MCAPI void tick();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::CommandOutputType getOutputType(::CommandOrigin const& origin);

    MCAPI static void registerSharedClientServerEnums(::CommandRegistry& registry);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::MinecraftCommandsArguments&& args);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
