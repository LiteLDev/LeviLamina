#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct EDUWorldsScreenCapabilities {
public:
    // prevent constructor by default
    EDUWorldsScreenCapabilities& operator=(EDUWorldsScreenCapabilities const&);
    EDUWorldsScreenCapabilities(EDUWorldsScreenCapabilities const&);
    EDUWorldsScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1EDUWorldsScreenCapabilities@@UEAA@XZ
    virtual ~EDUWorldsScreenCapabilities() = default;

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UEDUWorldsScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
