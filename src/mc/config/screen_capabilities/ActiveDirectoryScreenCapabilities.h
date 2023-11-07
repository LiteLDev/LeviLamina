#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct ActiveDirectoryScreenCapabilities {
public:
    // prevent constructor by default
    ActiveDirectoryScreenCapabilities& operator=(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities(ActiveDirectoryScreenCapabilities const&);
    ActiveDirectoryScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1ActiveDirectoryScreenCapabilities@@UEAA@XZ
    virtual ~ActiveDirectoryScreenCapabilities();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UActiveDirectoryScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;

    // NOLINTEND
};
