#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/scoreboard/ScriptObjectiveSortOrderType.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class ScriptScoreboardObjective; }
namespace Scripting { struct InterfaceBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptScoreboardObjectiveDisplayOptions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective>>
                                                                                                     mObjective;
    ::ll::TypedStorage<4, 8, ::std::optional<::ScriptModuleMinecraft::ScriptObjectiveSortOrderType>> mSortOrder;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptScoreboardObjectiveDisplayOptions();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptScoreboardObjectiveDisplayOptions(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                    sortOrder
    );

    MCAPI ~ScriptScoreboardObjectiveDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptScoreboardObjective> objective,
        ::ScriptModuleMinecraft::ScriptObjectiveSortOrderType                                    sortOrder
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
