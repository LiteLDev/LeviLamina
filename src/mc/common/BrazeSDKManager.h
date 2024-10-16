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
    // vIndex: 0
    virtual ~BrazeSDKManager() = default;

    // vIndex: 1
    virtual void enableBrazeSDK();

    // vIndex: 2
    virtual void disableBrazeSDK();

    // vIndex: 3
    virtual void setBrazeId(std::string const&);

    // vIndex: 4
    virtual void _enableBrazeSDK();

    // vIndex: 5
    virtual void _disableBrazeSDK();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void _disableBrazeSDK$();

    MCAPI void _enableBrazeSDK$();

    MCAPI void disableBrazeSDK$();

    MCAPI void enableBrazeSDK$();

    MCAPI void setBrazeId$(std::string const&);

    MCAPI static bool& mInitialized();

    MCAPI static std::shared_ptr<class BrazeSDKManager>& mInstance();

    MCAPI static bool& mIsReady();

    // NOLINTEND
};
