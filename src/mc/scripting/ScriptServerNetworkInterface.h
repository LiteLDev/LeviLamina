#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/scripting/IScriptServerNetworkInterface.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Player;
class TextFilteringProcessor;
namespace Scripting { struct EngineError; }
// clang-format on

class ScriptServerNetworkInterface : public ::IScriptServerNetworkInterface {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc3dc66;
    ::ll::UntypedStorage<8, 24> mUnk7ba394;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptServerNetworkInterface& operator=(ScriptServerNetworkInterface const&);
    ScriptServerNetworkInterface(ScriptServerNetworkInterface const&);
    ScriptServerNetworkInterface();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptServerNetworkInterface() /*override*/ = default;

    virtual ::Scripting::Result<int64, ::Scripting::EngineError> getPlayerPingInMs(::Player const& player) const
        /*override*/;

    virtual ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> getTextFilteringProcessor() const /*override*/;

    virtual bool isDedicatedServer() const /*override*/;

    virtual ::Scripting::Result<void, ::Scripting::EngineError> addUserToDenyList(::Player const& player) /*override*/;

    virtual ::Scripting::Result<void, ::Scripting::EngineError>
    disconnectPlayer(::Player const& player, ::std::string const& reason) /*override*/;

    virtual ::CommandPermissionLevel getCommandsOpPermissionLevel() const /*override*/;

    virtual ::Scripting::Result<void, ::Scripting::EngineError>
    savePlayerPermission(::Player const& player, ::PlayerPermissionLevel permission) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result<int64, ::Scripting::EngineError> $getPlayerPingInMs(::Player const& player) const;

    MCNAPI ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> $getTextFilteringProcessor() const;

    MCNAPI bool $isDedicatedServer() const;

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError> $addUserToDenyList(::Player const& player);

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    $disconnectPlayer(::Player const& player, ::std::string const& reason);

    MCNAPI ::CommandPermissionLevel $getCommandsOpPermissionLevel() const;

    MCNAPI ::Scripting::Result<void, ::Scripting::EngineError>
    $savePlayerPermission(::Player const& player, ::PlayerPermissionLevel permission);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
