#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_21 {

struct DistanceEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk518911;
    ::ll::UntypedStorage<8, 24> mUnk2a27c0;
    // NOLINTEND

public:
    // prevent constructor by default
    DistanceEvent& operator=(DistanceEvent const&);
    DistanceEvent(DistanceEvent const&);
    DistanceEvent();
};

} // namespace SharedTypes::v1_21
