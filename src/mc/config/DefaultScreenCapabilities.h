#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct DefaultScreenCapabilities {
public:
    // prevent constructor by default
    DefaultScreenCapabilities& operator=(DefaultScreenCapabilities const&);
    DefaultScreenCapabilities(DefaultScreenCapabilities const&);
    DefaultScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DefaultScreenCapabilities();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UDefaultScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;

    // NOLINTEND
};
