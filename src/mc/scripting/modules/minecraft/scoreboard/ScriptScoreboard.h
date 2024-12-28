#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/lifetime_registry/WeakHandleFromThis.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
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
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace Scripting { class WeakLifetimeScope; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboard : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptScoreboard> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkffe547;
    ::ll::UntypedStorage<8, 8>  mUnka9b707;
    ::ll::UntypedStorage<8, 8>  mUnkef434f;
    ::ll::UntypedStorage<8, 8>  mUnkce2a71;
    ::ll::UntypedStorage<8, 64> mUnk38e9f0;
    ::ll::UntypedStorage<8, 64> mUnk58e64b;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboard& operator=(ScriptScoreboard const&);
    ScriptScoreboard(ScriptScoreboard const&);
    ScriptScoreboard();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
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

    MCAPI ::Scripting::Result_deprecated<bool>
    removeObjective(::std::variant<
                    ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>,
                    ::std::string> const& objectiveId);

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
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptScoreboard> bind();
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
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
