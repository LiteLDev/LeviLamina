#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { class IScriptAfterEventSignal; }
// clang-format on

namespace ScriptModuleMinecraft {

struct ScriptAfterEventSignalHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, uint64> mSignalHashCode;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::IScriptAfterEventSignal>>
                                                   mSignal;
    ::ll::TypedStorage<8, 8, uint64>               mInstanceHashCode;
    ::ll::TypedStorage<8, 32, ::std::string const> mEventTypeName;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ScriptAfterEventSignalHandle();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
