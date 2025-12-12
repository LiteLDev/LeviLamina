#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptCustomComponentAfterEventSignal; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptCustomComponentAfterEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::unique_ptr<::ScriptModuleMinecraft::IScriptCustomComponentAfterEventSignal>>>
        mHandles;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptCustomComponentAfterEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
