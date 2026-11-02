#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/ISplitscreenRedirect.h"

namespace Input::Debug {

class NullSplitscreenRedirect : public ::Input::Debug::ISplitscreenRedirect {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual void toggle(uint64) /*override*/;

    virtual bool isToggled(uint64) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $toggle(uint64);

    MCNAPI bool $isToggled(uint64) const;
    // NOLINTEND
};

} // namespace Input::Debug
