#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/binding_type/InterfaceBindingBuilder.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkf923d0;
    ::ll::UntypedStorage<4, 8>  mUnk86abb2;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjectiveDisplayOptions& operator=(ScriptScoreboardObjectiveDisplayOptions const&);
    ScriptScoreboardObjectiveDisplayOptions(ScriptScoreboardObjectiveDisplayOptions const&);
    ScriptScoreboardObjectiveDisplayOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptScoreboardObjectiveDisplayOptions(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                    sortOrder
    );

    MCNAPI ~ScriptScoreboardObjectiveDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                    sortOrder
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
