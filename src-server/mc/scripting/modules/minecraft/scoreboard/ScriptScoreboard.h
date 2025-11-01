#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/lifetime_registry/WeakHandleFromThis.h"
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
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace ScriptModuleMinecraft { class ScriptScoreboardObjectiveDisplayOptions; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboard : public ::Scripting::WeakHandleFromThis<::ScriptModuleMinecraft::ScriptScoreboard> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkffe547;
    ::ll::UntypedStorage<8, 8> mUnka9b707;
    ::ll::UntypedStorage<8, 8> mUnkef434f;
    ::ll::UntypedStorage<8, 8> mUnkce2a71;
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
    MCNAPI ScriptScoreboard(::Scoreboard& scoreboard, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> _getOrCreateScoreboardObjective(::Objective const& objective);

    MCNAPI ::Scripting::Result_deprecated<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>> addObjective(::std::string const& objectiveId, ::std::optional<::std::string> const& displayName);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>> clearObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId);

    MCNAPI ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>> getObjective(::std::string const& objectiveId);

    MCNAPI ::std::optional<::ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions> getObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>> getObjectives();

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity> getOrCreateScoreboardIdentity(::IdentityDefinition const& identity);

    MCNAPI ::ScoreboardIdentityRef* getOrCreateScoreboardIdentityRef(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::std::string> const& participant);

    MCNAPI ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>> getParticipants();

    MCNAPI void removeIdentityById(::ScoreboardId const& id);

    MCNAPI ::Scripting::Result_deprecated<bool> removeObjective(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>, ::std::string> const& objectiveId);

    MCNAPI ::Scripting::Result_deprecated<::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>> setObjectiveAtDisplaySlot(::ScriptModuleMinecraft::ScriptDisplayObjectiveSlotId displaySlotId, ::ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions const& displaySetting);

    MCNAPI ::std::optional<::ScoreboardId> tryGetScoreboardParticipantScoreboardId(::std::variant<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>, ::std::string> const& participant) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Scoreboard& scoreboard, ::Level& level, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
