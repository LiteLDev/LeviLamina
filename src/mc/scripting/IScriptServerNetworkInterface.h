#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/script_core/runtime/scripting/Result.h"
#include "mc/server/commands/CommandPermissionLevel.h"
#include "mc/server/commands/PlayerPermissionLevel.h"

// auto generated forward declare list
// clang-format off
class Player;
class TextFilteringProcessor;
namespace Scripting { struct EngineError; }
// clang-format on

class IScriptServerNetworkInterface {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScriptServerNetworkInterface() = default;

    virtual ::Scripting::Result<int64, ::Scripting::EngineError> getPlayerPingInMs(::Player const& player) const = 0;

    virtual ::Bedrock::NonOwnerPointer<::TextFilteringProcessor> getTextFilteringProcessor() const = 0;

    virtual bool isDedicatedServer() const = 0;

    virtual ::Scripting::Result<void, ::Scripting::EngineError> addUserToDenyList(::Player const& player) = 0;

    virtual ::Scripting::Result<void, ::Scripting::EngineError>
    disconnectPlayer(::Player const& player, ::std::string const& reason) = 0;

    virtual ::CommandPermissionLevel getCommandsOpPermissionLevel() const = 0;

    virtual ::Scripting::Result<void, ::Scripting::EngineError>
    savePlayerPermission(::Player const& player, ::PlayerPermissionLevel permission) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
