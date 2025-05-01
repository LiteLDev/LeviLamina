#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TaskStartInfo {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk8ac9bb;
    ::ll::UntypedStorage<4, 4>  mUnkd75717;
    ::ll::UntypedStorage<4, 4>  mUnk184e63;
    ::ll::UntypedStorage<4, 4>  mUnk518d45;
    ::ll::UntypedStorage<1, 1>  mUnke94090;
    ::ll::UntypedStorage<8, 8>  mUnk15c0d8;
    // NOLINTEND

public:
    // prevent constructor by default
    TaskStartInfo& operator=(TaskStartInfo const&);
    TaskStartInfo(TaskStartInfo const&);
    TaskStartInfo();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit TaskStartInfo(char const* name);

    MCNAPI ::TaskStartInfo& startWithDelay(::std::chrono::nanoseconds delay);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::thread::id const& NoAffinity();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(char const* name);
    // NOLINTEND
};
