#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct HudScreenCapabilities {
public:
    // prevent constructor by default
    HudScreenCapabilities& operator=(HudScreenCapabilities const&);
    HudScreenCapabilities(HudScreenCapabilities const&);
    HudScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UHudScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;

    // NOLINTEND
};
