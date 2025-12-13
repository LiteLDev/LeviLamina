#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAfterEventSignalHandle; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::ScriptModuleMinecraft::ScriptAfterEventSignalHandle>> mSignalHandles;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAfterEventList& operator=(ScriptAfterEventList const&);
    ScriptAfterEventList(ScriptAfterEventList const&);
    ScriptAfterEventList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptModuleMinecraft::ScriptAfterEventList& operator=(::ScriptModuleMinecraft::ScriptAfterEventList&&);

    MCAPI ~ScriptAfterEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
