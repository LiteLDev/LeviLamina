#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStatePlatform.h"

class WindowStatePlatformWin32 : public ::WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool getWindowRect(::HWND__*, ::tagRECT&) const /*override*/;

    // vIndex: 2
    virtual bool getClientRect(::HWND__*, ::tagRECT&) const /*override*/;

    // vIndex: 3
    virtual bool getWindowShowCommand(::HWND__*, int&) const /*override*/;

    // vIndex: 4
    virtual bool getClosestMonitorRect(::tagRECT const&, ::tagRECT&) const /*override*/;

    // vIndex: 5
    virtual bool getAdjustedWindowRect(::tagRECT const&, ::tagRECT&) const /*override*/;

    // vIndex: 0
    virtual ~WindowStatePlatformWin32() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
