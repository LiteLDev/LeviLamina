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
    ProfilerCapture& operator=(ProfilerCapture const&);
    ProfilerCapture(ProfilerCapture const&);
    ProfilerCapture();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::ScriptDebuggerMessages::ProfilerCapture& operator=(::ScriptDebuggerMessages::ProfilerCapture&&);

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
