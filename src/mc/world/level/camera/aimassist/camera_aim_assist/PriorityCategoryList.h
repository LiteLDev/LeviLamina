#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace CameraAimAssist { class PriorityCategory; }
// clang-format on

namespace CameraAimAssist {

class PriorityCategoryList {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 48> mUnke6eb9f;
    ::ll::UntypedStorage<8, 64> mUnk406596;
    // NOLINTEND

public:
    // prevent constructor by default
    PriorityCategoryList& operator=(PriorityCategoryList const&);
    PriorityCategoryList(PriorityCategoryList const&);
    PriorityCategoryList();

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::CameraAimAssist::PriorityCategoryList const& EMPTY_LIST();
    // NOLINTEND
};

} // namespace CameraAimAssist
