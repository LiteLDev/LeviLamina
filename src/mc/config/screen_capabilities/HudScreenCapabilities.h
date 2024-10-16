#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/typeid_t.h"

struct HudScreenCapabilities {
public:
    // prevent constructor by default
    HudScreenCapabilities& operator=(HudScreenCapabilities const&);
    HudScreenCapabilities(HudScreenCapabilities const&);
    HudScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~HudScreenCapabilities() = default;

    // vIndex: 1
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isOfType$(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
