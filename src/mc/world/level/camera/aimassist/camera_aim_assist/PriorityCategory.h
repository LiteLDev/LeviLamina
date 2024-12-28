#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
// clang-format on

namespace CameraAimAssist {

class PriorityCategory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnkd667eb;
    ::ll::UntypedStorage<4, 4>  mUnka75f28;
    ::ll::UntypedStorage<8, 64> mUnk744b9a;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityCategory& operator=(PriorityCategory const&);
    PriorityCategory(PriorityCategory const&);
    PriorityCategory();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CameraAimAssist::PriorityCategory const& NO_PRIORITY();
    // NOLINTEND
};

} // namespace CameraAimAssist
