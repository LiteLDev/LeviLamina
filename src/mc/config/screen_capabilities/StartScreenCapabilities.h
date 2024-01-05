#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct StartScreenCapabilities {
public:
    // prevent constructor by default
    StartScreenCapabilities& operator=(StartScreenCapabilities const&);
    StartScreenCapabilities(StartScreenCapabilities const&);
    StartScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1StartScreenCapabilities@@UEAA@XZ
    virtual ~StartScreenCapabilities() = default;

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UStartScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
