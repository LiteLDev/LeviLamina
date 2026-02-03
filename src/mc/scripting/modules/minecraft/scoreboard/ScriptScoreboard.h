#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/deps/scripting/lifetime_registry/WeakLifetimeScope.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptDisplayObjectiveSlotId.h"

// auto generated forward declare list
// clang-format off
class IdentityDefinition;
class Level;
class Objective;
class Scoreboard;
class ScoreboardIdentityRef;
struct ScoreboardId;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardListener; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
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
    // prevent constructor by default
    ScriptScoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptScoreboard();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptScoreboard(::Scoreboard& scoreboard, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>
    _getOrCreateScoreboardObjective(::Objective const& objective);

    MCAPI ::Scripting::Result_deprecated<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>
    addObjective(::std::string const& objectiveId, ::std::optional<::std::string> const& displayName);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>
    clearObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId);

    MCAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>
    getObjective(::std::string const& objectiveId);

    MCAPI ::std::optional<::ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    getObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId);

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>
    getObjectives();

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>
    getOrCreateScoreboardIdentity(::IdentityDefinition const& identity);

    MCAPI ::ScoreboardIdentityRef* getOrCreateScoreboardIdentityRef(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string> const& participant
    );

    MCAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>>
    getParticipants();

    MCAPI void removeIdentityById(::ScoreboardId const& id);

    MCAPI ::Scripting::Result_deprecated<bool> removeObjective(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>,
            ::std::string> const& objectiveId
    );

    MCAPI void removeObjectiveByName(::std::string const& objective);

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>>
    setObjectiveAtDisplaySlot(
        ::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId                   displaySlotId,
        ::ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions const& displaySetting
    );

    MCAPI ::ScoreboardIdentityRef* tryGetScoreboardParticipantIdentityRef(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string> const& participant
    ) const;

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
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Scoreboard& scoreboard, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
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

} // namespace ScriptModuleMinecraft
