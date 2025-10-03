#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WindowStatePlatform() = default;

    // vIndex: 1
    virtual bool getWindowRect(::HWND__*, ::tagRECT&) const = 0;

    // vIndex: 2
    virtual bool getClientRect(::HWND__*, ::tagRECT&) const = 0;

    // vIndex: 3
    virtual bool getWindowShowCommand(::HWND__*, int&) const = 0;

    // vIndex: 4
    virtual bool getClosestMonitorRect(::tagRECT const&, ::tagRECT&) const = 0;

    // vIndex: 5
    virtual bool getAdjustedWindowRect(::tagRECT const&, ::tagRECT&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
