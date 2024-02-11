#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/NonOwnerPointer.h"

class UPNPInterface {
public:
    // prevent constructor by default
    UPNPInterface& operator=(UPNPInterface const&);
    UPNPInterface(UPNPInterface const&);
    UPNPInterface();

public:
    // NOLINTBEGIN
    // symbol: ?_onDisable@UPNPInterface@@EEAAXXZ
    MCVAPI void _onDisable();

    // symbol: ?_onEnable@UPNPInterface@@EEAAXXZ
    MCVAPI void _onEnable();

    // symbol: ??0UPNPInterface@@QEAA@AEBV?$NonOwnerPointer@VAppPlatform@@@Bedrock@@@Z
    MCAPI explicit UPNPInterface(class Bedrock::NonOwnerPointer<class AppPlatform> const& appPlatform);

    // symbol: ?reset@UPNPInterface@@QEAAXXZ
    MCAPI void reset();

    // symbol: ?tick@UPNPInterface@@QEAAXXZ
    MCAPI void tick();

    // NOLINTEND
};
