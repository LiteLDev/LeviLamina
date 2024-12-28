#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace ScriptModuleMinecraft { struct ScriptAsyncSignalHandle; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptAsyncEventList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdf08b7;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptAsyncEventList& operator=(ScriptAsyncEventList const&);
    ScriptAsyncEventList(ScriptAsyncEventList const&);
    ScriptAsyncEventList();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool deferredFlush();

    MCAPI ::std::vector<::ScriptModuleMinecraft::ScriptAsyncSignalHandle const*>
    getAllSignalsByEventType(uint64 signalHashCode) const;

    MCAPI void postFlush();

    MCAPI void preFlush();

    MCAPI ~ScriptAsyncEventList();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
