#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/events/event_data/DynamicElementData.h"

namespace Social::Events {

struct DynamicElementImpressionData : public ::Social::Events::DynamicElementData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnke74bba;
    ::ll::UntypedStorage<8, 8> mUnk6aadf6;
    // NOLINTEND

public:
    // prevent constructor by default
    DynamicElementImpressionData& operator=(DynamicElementImpressionData const&);
    DynamicElementImpressionData(DynamicElementImpressionData const&);
    DynamicElementImpressionData();
};

} // namespace Social::Events
