#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/world/scores/PlayerScoreSetFunction.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptScoreboard; }
namespace ScriptModuleMinecraft { class ScriptScoreboardIdentity; }
namespace ScriptModuleMinecraft { class ScriptScoreboardScoreInfo; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjective {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk18599c;
    ::ll::UntypedStorage<8, 32> mUnk1b7050;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjective& operator=(ScriptScoreboardObjective const&);
    ScriptScoreboardObjective(ScriptScoreboardObjective const&);
    ScriptScoreboardObjective();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Scripting::Result_deprecated<int> _modifyScore(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string>&      participant,
        ::PlayerScoreSetFunction setFunction,
        int                      score
    );

    MCAPI ::ScriptModuleMinecraft::ScriptScoreboard* _tryGetScoreboard() const;

    MCAPI ::Scripting::Result_deprecated<int> addScore(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string>& participant,
        int                 scoreToAdd
    );

    MCAPI ::Scripting::Result_deprecated<::std::string> getDisplayName() const;

    MCAPI ::Scripting::Result_deprecated<::std::string> getObjectiveId() const;

    MCAPI ::Scripting::Result_deprecated<
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>>>
    getParticipants() const;

    MCAPI ::Scripting::Result_deprecated<::std::optional<int>>
    getScore(::std::variant<
             ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
             ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
             ::std::string> const& participant) const;

    MCAPI ::Scripting::Result_deprecated<::std::vector<::ScriptModuleMinecraft::ScriptScoreboardScoreInfo>>
    getScores() const;

    MCAPI ::Scripting::Result_deprecated<bool>
    hasParticipant(::std::variant<
                   ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                   ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
                   ::std::string> const& participant) const;

    MCFOLD ::ScriptModuleMinecraft::ScriptScoreboardObjective&
    operator=(::ScriptModuleMinecraft::ScriptScoreboardObjective&&);

    MCAPI bool operator==(::ScriptModuleMinecraft::ScriptScoreboardObjective const& other) const;

    MCAPI ::Scripting::Result_deprecated<bool>
    removeParticipant(::std::variant<
                      ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
                      ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
                      ::std::string>& participant);

    MCAPI ::Scripting::Result<void> setScore(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardIdentity>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>,
            ::std::string>& participant,
        int                 score
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptScoreboardObjective> bind();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
