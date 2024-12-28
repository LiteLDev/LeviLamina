#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ScriptDebuggerMessages {

struct ProfilerCapture {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnked88bc;
    ::ll::UntypedStorage<8, 32> mUnkc63d4c;
    ::ll::UntypedStorage<8, 32> mUnk2140ba;
    // NOLINTEND

public:
    // prevent constructor by default
    ProfilerCapture(ProfilerCapture const&);
    ProfilerCapture();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture&&);

    MCAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture const&);

    MCAPI bool operator==(::ScriptDebuggerMessages::ProfilerCapture const&) const;

    MCAPI ~ProfilerCapture();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptDebuggerMessages
