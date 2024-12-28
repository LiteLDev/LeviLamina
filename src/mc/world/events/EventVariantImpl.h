#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0, typename... T1>
class EventVariantImpl {
public:
    // prevent constructor by default
    EventVariantImpl& operator=(EventVariantImpl const&);
    EventVariantImpl(EventVariantImpl const&);
    EventVariantImpl();
};
