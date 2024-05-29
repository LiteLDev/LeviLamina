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
    // vIndex: 0, symbol: __gen_??1BrazeSDKManager@@UEAA@XZ
    virtual ~BrazeSDKManager() = default;

    // vIndex: 1, symbol: ?enableBrazeSDK@BrazeSDKManager@@UEAAXXZ
    virtual void enableBrazeSDK();

    // vIndex: 2, symbol: ?disableBrazeSDK@BrazeSDKManager@@UEAAXXZ
    virtual void disableBrazeSDK();

    // vIndex: 3, symbol:
    // ?setBrazeId@BrazeSDKManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    virtual void setBrazeId(std::string const&);

    // vIndex: 4, symbol: ?_enableBrazeSDK@BrazeSDKManager@@MEAAXXZ
    virtual void _enableBrazeSDK();

    // vIndex: 5, symbol: ?_disableBrazeSDK@BrazeSDKManager@@MEAAXXZ
    virtual void _disableBrazeSDK();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?mInitialized@BrazeSDKManager@@0_NA
    MCAPI static bool mInitialized;

    // symbol: ?mInstance@BrazeSDKManager@@0V?$shared_ptr@VBrazeSDKManager@@@std@@A
    MCAPI static std::shared_ptr<class BrazeSDKManager> mInstance;

    // symbol: ?mIsReady@BrazeSDKManager@@0_NA
    MCAPI static bool mIsReady;

    // NOLINTEND
};
