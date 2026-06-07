#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/win/WindowStatePlatform.h"

class WindowStatePlatformWin32 : public ::WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual bool getClosestMonitorRect(::tagRECT const&, ::tagRECT&) const /*override*/;
#else // LL_PLAT_C
    virtual bool getClosestMonitorRect(::tagRECT const& closestToRect, ::tagRECT& result) const /*override*/;
#endif

#ifdef LL_PLAT_S
    virtual ::tagRECT _fitClientToScreen(::tagRECT const&, ::tagRECT const&, ::tagRECT const&) /*override*/;
#else // LL_PLAT_C
    virtual ::tagRECT
    _fitClientToScreen(::tagRECT const& client, ::tagRECT const& window, ::tagRECT const& screen) /*override*/;
#endif

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
