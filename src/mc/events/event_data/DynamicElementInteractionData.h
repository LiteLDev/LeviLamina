#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/event_data/DynamicElementData.h"

namespace Social::Events {

struct DynamicElementInteractionData : public ::Social::Events::DynamicElementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk6b8ab8;
    ::ll::UntypedStorage<8, 8> mUnkb9b6b7;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicElementInteractionData& operator=(DynamicElementInteractionData const&);
    DynamicElementInteractionData(DynamicElementInteractionData const&);
    DynamicElementInteractionData();
};

} // namespace Social::Events
