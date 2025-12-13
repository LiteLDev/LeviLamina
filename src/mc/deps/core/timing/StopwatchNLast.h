#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/timing/Stopwatch.h"

class StopwatchNLast : public ::Stopwatch {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk34c336;
    ::ll::UntypedStorage<4, 4>  mUnk8d9881;
    ::ll::UntypedStorage<8, 24> mUnk2f1f3e;
    ::ll::UntypedStorage<8, 8>  mUnk661d05;
    ::ll::UntypedStorage<8, 56> mUnk8bc093;
    // NOLINTEND

public:
    // prevent constructor by default
    StopwatchNLast& operator=(StopwatchNLast const&);
    StopwatchNLast(StopwatchNLast const&);
    StopwatchNLast();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StopwatchNLast() /*override*/ = default;

    virtual double stop() /*override*/;

    virtual void print(::std::string const& prepend) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
