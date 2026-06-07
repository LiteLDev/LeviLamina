#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WindowStatePlatform {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~WindowStatePlatform() = default;

#ifdef LL_PLAT_S
    virtual bool getWindowRect(::HWND__*, ::tagRECT&) const;
#else // LL_PLAT_C
    virtual bool getWindowRect(::HWND__* window, ::tagRECT& result) const;
#endif

#ifdef LL_PLAT_S
    virtual bool getClientRect(::HWND__*, ::tagRECT&) const;
#else // LL_PLAT_C
    virtual bool getClientRect(::HWND__* window, ::tagRECT& result) const;
#endif

#ifdef LL_PLAT_S
    virtual bool getWindowShowCommand(::HWND__*, int&) const;
#else // LL_PLAT_C
    virtual bool getWindowShowCommand(::HWND__* window, int& result) const;
#endif

    virtual bool getClosestMonitorRect(::tagRECT const& closestToRect, ::tagRECT& result) const = 0;

#ifdef LL_PLAT_S
    virtual bool getAdjustedWindowRect(::tagRECT const&, ::tagRECT&) const;
#else // LL_PLAT_C
    virtual bool getAdjustedWindowRect(::tagRECT const& clientRect, ::tagRECT& windowRect) const;
#endif

    virtual ::tagRECT _fitClientToScreen(::tagRECT const& client, ::tagRECT const& window, ::tagRECT const& screen) = 0;
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
};
