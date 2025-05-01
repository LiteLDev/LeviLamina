#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SharedTypes::v1_20_80 {

struct DistanceEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk4106c7;
    ::ll::UntypedStorage<8, 24> mUnke65994;
    // NOLINTEND

public:
    // prevent constructor by default
    DistanceEvent& operator=(DistanceEvent const&);
    DistanceEvent(DistanceEvent const&);
    DistanceEvent();
};

} // namespace SharedTypes::v1_20_80
