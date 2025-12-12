#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WindowStatePlatform() = default;

    virtual bool getWindowRect(::HWND__*, ::tagRECT&) const = 0;

    virtual bool getClientRect(::HWND__*, ::tagRECT&) const = 0;

    virtual bool getWindowShowCommand(::HWND__*, int&) const = 0;

    virtual bool getClosestMonitorRect(::tagRECT const&, ::tagRECT&) const = 0;

    virtual bool getAdjustedWindowRect(::tagRECT const&, ::tagRECT&) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
