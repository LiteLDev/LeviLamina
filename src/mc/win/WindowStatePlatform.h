#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WindowStatePlatform() = default;

    virtual bool getWindowRect(::HWND__* window, ::tagRECT& result) const;

    virtual bool getClientRect(::HWND__* window, ::tagRECT& result) const;

    virtual bool getWindowShowCommand(::HWND__* window, int& result) const;

    virtual bool getClosestMonitorRect(::tagRECT const&, ::tagRECT&) const = 0;

    virtual bool getAdjustedWindowRect(::tagRECT const& clientRect, ::tagRECT& windowRect) const;

    virtual ::tagRECT _fitClientToScreen(::tagRECT const&, ::tagRECT const&, ::tagRECT const&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI bool $getWindowRect(::HWND__* window, ::tagRECT& result) const;

    MCNAPI bool $getClientRect(::HWND__* window, ::tagRECT& result) const;

    MCNAPI bool $getWindowShowCommand(::HWND__* window, int& result) const;

    MCNAPI bool $getAdjustedWindowRect(::tagRECT const& clientRect, ::tagRECT& windowRect) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
