#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/ProfilerLite.h"

class _ProfilerLiteTimer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkcf7da7;
    ::ll::UntypedStorage<4, 4> mUnk878963;
    ::ll::UntypedStorage<8, 8> mUnkef8390;
    ::ll::UntypedStorage<8, 8> mUnk40c75f;
    ::ll::UntypedStorage<8, 8> mUnk5a3550;
    // NOLINTEND

public:
    // prevent constructor by default
    _ProfilerLiteTimer& operator=(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer(_ProfilerLiteTimer const&);
    _ProfilerLiteTimer();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI _ProfilerLiteTimer(::ProfilerLite::ScopedData& scopedData, ::std::thread::id threadId);

    MCNAPI ~_ProfilerLiteTimer();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ProfilerLite::ScopedData& scopedData, ::std::thread::id threadId);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
