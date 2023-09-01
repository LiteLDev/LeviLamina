#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/typeid_t.h"

struct PauseScreenCapabilities {
public:
    // prevent constructor by default
    PauseScreenCapabilities& operator=(PauseScreenCapabilities const&) = delete;
    PauseScreenCapabilities(PauseScreenCapabilities const&)            = delete;
    PauseScreenCapabilities()                                          = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol:
    // ?isOfType@?$TypedScreenCapabilities@UPauseScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@Bedrock@@@Z
    virtual bool isOfType(class Bedrock::typeid_t<class IScreenCapabilities>) const;

    // symbol: ??1PauseScreenCapabilities@@UEAA@XZ
    MCVAPI ~PauseScreenCapabilities();

    // NOLINTEND
};
