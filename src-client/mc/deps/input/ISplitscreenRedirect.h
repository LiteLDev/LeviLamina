#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

namespace Input::Debug {

class ISplitscreenRedirect : public ::Bedrock::EnableNonOwnerReferences {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ISplitscreenRedirect() /*override*/ = default;

    virtual void toggle(uint64) = 0;

    virtual bool isToggled(uint64) const = 0;
    // NOLINTEND
};

} // namespace Input::Debug
