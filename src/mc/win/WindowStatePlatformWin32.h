#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStatePlatform.h"

class WindowStatePlatformWin32 : public ::WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getWindowRect(::HWND__* window, ::tagRECT& result) const /*override*/;

    virtual bool getClientRect(::HWND__* window, ::tagRECT& result) const /*override*/;

    virtual bool getWindowShowCommand(::HWND__* window, int& result) const /*override*/;

    virtual bool getClosestMonitorRect(::tagRECT const& closestToRect, ::tagRECT& result) const /*override*/;

    virtual bool getAdjustedWindowRect(::tagRECT const& clientRect, ::tagRECT& windowRect) const /*override*/;

    virtual ~WindowStatePlatformWin32() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $getWindowRect(::HWND__* window, ::tagRECT& result) const;

    MCNAPI bool $getClientRect(::HWND__* window, ::tagRECT& result) const;

    MCNAPI bool $getWindowShowCommand(::HWND__* window, int& result) const;

    MCNAPI bool $getClosestMonitorRect(::tagRECT const& closestToRect, ::tagRECT& result) const;

    MCNAPI bool $getAdjustedWindowRect(::tagRECT const& clientRect, ::tagRECT& windowRect) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
