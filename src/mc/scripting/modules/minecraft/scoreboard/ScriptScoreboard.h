#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/script_core/lifetime_registry/scripting/StrongTypedObjectHandle.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakHandleFromThis.h"
#include "mc/deps/script_core/lifetime_registry/scripting/WeakLifetimeScope.h"
#include "mc/world/scores/ScoreboardId.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
class Objective;
class Scoreboard;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardListener; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboard : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptScoreboard> {
public:
    // ScriptScoreboard inner types define
    using Key = ::Scoreboard const*;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Scripting::WeakLifetimeScope>                                      mScope;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Scoreboard*>>                                       mScoreboard;
    ::ll::TypedStorage<8, 8, ::gsl::not_null<::Level*>>                                            mLevel;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::ScriptModuleMinecraft::ScriptScoreboardListener>> mScoreboardListener;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>>
        mObjectives;
    ::ll::TypedStorage<
        8,
        64,
        ::std::unordered_map<
            ::ScoreboardId,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>>>
        mIdentities;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptScoreboard();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(::Objective const& objective);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(::IdentityDefinition const& identity);

    MCAPI ::std::optional<::ScoreboardId> tryGetScoreboardParticipantScoreboardId(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string> const& participant
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
