#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrazeSDKManager {
public:
    // prevent constructor by default
    BrazeSDKManager& operator=(BrazeSDKManager const&);
    BrazeSDKManager(BrazeSDKManager const&);
    BrazeSDKManager();

public:
    // NOLINTBEGIN
    // symbol: ?_disableBrazeSDK@BrazeSDKManager@@MEAAXXZ
    MCVAPI void _disableBrazeSDK();

    // symbol: ?_enableBrazeSDK@BrazeSDKManager@@MEAAXXZ
    MCVAPI void _enableBrazeSDK();

    // symbol: ?disableBrazeSDK@BrazeSDKManager@@UEAAXXZ
    MCVAPI void disableBrazeSDK();

    // symbol: ?enableBrazeSDK@BrazeSDKManager@@UEAAXXZ
    MCVAPI void enableBrazeSDK();

    // symbol: ?setBrazeId@BrazeSDKManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCVAPI void setBrazeId(std::string const&);

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mInitialized@BrazeSDKManager@@0_NA
    MCAPI static bool mInitialized;

    // symbol: ?mInstance@BrazeSDKManager@@0V?$shared_ptr@VBrazeSDKManager@@@std@@A
    MCAPI static std::shared_ptr<class BrazeSDKManager> mInstance;

    // symbol: ?mIsReady@BrazeSDKManager@@0_NA
    MCAPI static bool mIsReady;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    static auto& $mInitialized() { return mInitialized; }

    static auto& $mInstance() { return mInstance; }

    static auto& $mIsReady() { return mIsReady; }

    // NOLINTEND
};
