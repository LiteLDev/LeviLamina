#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/script_engine/ClosureGeneric.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptCustomCommandInterface; }
namespace ScriptModuleMinecraft { struct ScriptCustomCommandResult; }
// clang-format on

namespace ScriptModuleMinecraft {

class CommandClosureStorage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 104> mUnk7fc87d;
    ::ll::UntypedStorage<8, 136> mUnkfb13fe;
    // NOLINTEND

public:
    // prevent constructor by default
    CommandClosureStorage& operator=(CommandClosureStorage const&);
    CommandClosureStorage(CommandClosureStorage const&);
    CommandClosureStorage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI CommandClosureStorage(
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>&& closure,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface                                              builder
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Scripting::ClosureGeneric<::std::optional<::ScriptModuleMinecraft::ScriptCustomCommandResult>>&& closure,
        ::ScriptModuleMinecraft::ScriptCustomCommandInterface                                              builder
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
