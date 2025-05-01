#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptModuleDiagnostics {

struct ScriptSentrySessionParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnka78a54;
    ::ll::UntypedStorage<8, 32> mUnkbad2ea;
    ::ll::UntypedStorage<8, 32> mUnke52b1f;
    ::ll::UntypedStorage<8, 32> mUnke9b272;
    ::ll::UntypedStorage<8, 32> mUnk930490;
    ::ll::UntypedStorage<8, 32> mUnk7fe0ca;
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
