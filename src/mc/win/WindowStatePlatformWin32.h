#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStatePlatform.h"

class WindowStatePlatformWin32 : public ::WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool getClosestMonitorRect(::tagRECT const& closestToRect, ::tagRECT& result) const /*override*/;

    virtual ::tagRECT
    _fitClientToScreen(::tagRECT const& client, ::tagRECT const& window, ::tagRECT const& screen) /*override*/;

    virtual ~WindowStatePlatformWin32() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $getClosestMonitorRect(::tagRECT const& closestToRect, ::tagRECT& result) const;

    MCNAPI ::tagRECT $_fitClientToScreen(::tagRECT const& client, ::tagRECT const& window, ::tagRECT const& screen);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
