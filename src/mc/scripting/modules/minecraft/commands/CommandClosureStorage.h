#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/ClosureGeneric.h"
#include "mc/scripting/modules/minecraft/commands/ScriptCustomCommandInterface.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
// clang-format on

namespace ScriptModuleMinecraft {

class CommandClosureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        104,
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>>
                                                                                      mClosure;
    ::ll::TypedStorage<8, 136, ::ScriptModuleMinecraft::ScriptCustomCommandInterface> mCommandInterface;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandClosureStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CommandClosureStorage(
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>&& closure,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface                                              builder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>&& closure,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface                                              builder
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
