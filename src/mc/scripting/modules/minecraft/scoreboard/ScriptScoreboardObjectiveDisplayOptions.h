#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/InterfaceBindingBuilder.h"

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
    MCAPI ~ScriptScoreboardObjectiveDisplayOptions();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::InterfaceBindingBuilder<::ScriptModuleMinecraft::ScriptScoreboardObjectiveDisplayOptions>
    bind();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
