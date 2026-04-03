#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProfilerCapture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk78193b;
    ::ll::UntypedStorage<8, 32> mUnkb80510;
    ::ll::UntypedStorage<8, 32> mUnkdcf7c4;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerCapture(ProfilerCapture const&);
    ProfilerCapture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture&&);

    MCNAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture const&);

    MCNAPI bool operator==(::ScriptDebuggerMessages::ProfilerCapture const&) const;

    MCNAPI ~ProfilerCapture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
