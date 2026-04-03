#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_26_10/block/DeprecatedBaseTrigger.h"

namespace SharedTypes::v1_26_10::BlockDefinition {

struct DeprecatedQueuedTickingComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                             mDelayIntervalMinTicks;
    ::ll::TypedStorage<4, 4, uint>                                                             mDelayIntervalMaxTicks;
    ::ll::TypedStorage<1, 1, bool>                                                             mLooping;
    ::ll::TypedStorage<8, 88, ::SharedTypes::v1_26_10::BlockDefinition::DeprecatedBaseTrigger> mOnTimeDown;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DeprecatedQueuedTickingComponent();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10::BlockDefinition
