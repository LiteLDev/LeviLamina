#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentrySessionParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkb56f32;
    ::ll::UntypedStorage<8, 32> mUnk173d41;
    ::ll::UntypedStorage<8, 32> mUnk128087;
    ::ll::UntypedStorage<8, 32> mUnkf1d405;
    ::ll::UntypedStorage<8, 32> mUnk53c6c8;
    ::ll::UntypedStorage<8, 32> mUnkea57ac;
    ::ll::UntypedStorage<1, 1>  mUnk40264f;
    ::ll::UntypedStorage<1, 1>  mUnke7958c;
    ::ll::UntypedStorage<8, 24> mUnk5e1aa9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptSentrySessionParameters& operator=(ScriptSentrySessionParameters const&);
    ScriptSentrySessionParameters(ScriptSentrySessionParameters const&);
    ScriptSentrySessionParameters();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScriptSentrySessionParameters(::ScriptModuleDiagnostics::ScriptSentrySessionParameters&&);

    MCNAPI ~ScriptSentrySessionParameters();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScriptModuleDiagnostics::ScriptSentrySessionParameters&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleDiagnostics
