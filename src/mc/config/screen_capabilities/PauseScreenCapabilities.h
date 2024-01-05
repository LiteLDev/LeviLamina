#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct PauseScreenCapabilities {
public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&);
    PauseScreenCapabilities(PauseScreenCapabilities const&);
    PauseScreenCapabilities();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PauseScreenCapabilities@@UEAA@XZ
    virtual ~PauseScreenCapabilities();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UPauseScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities> type) const;

    // NOLINTEND
};
