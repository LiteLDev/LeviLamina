#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PackCommand {

struct PackCommandHandle {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnka53165;
    // NOLINTEND

public:
    // prevent constructor by default
    PackCommandHandle& operator=(PackCommandHandle const&);
    PackCommandHandle(PackCommandHandle const&);
    PackCommandHandle();
};

} // namespace PackCommand
