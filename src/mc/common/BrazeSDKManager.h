#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrazeSDKManager {

public:
    // prevent constructor by default
    BrazeSDKManager& operator=(BrazeSDKManager const&) = delete;
    BrazeSDKManager(BrazeSDKManager const&)            = delete;
    BrazeSDKManager()                                  = delete;

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BRAZESDKMANAGER
    /**
     * @symbol ?_disableBrazeSDK\@BrazeSDKManager\@\@MEAAXXZ
     */
    MCVAPI void _disableBrazeSDK(); // NOLINT
    /**
     * @symbol ?_enableBrazeSDK\@BrazeSDKManager\@\@MEAAXXZ
     */
    MCVAPI void _enableBrazeSDK(); // NOLINT
    /**
     * @symbol ?disableBrazeSDK\@BrazeSDKManager\@\@UEAAXXZ
     */
    MCVAPI void disableBrazeSDK(); // NOLINT
    /**
     * @symbol ?enableBrazeSDK\@BrazeSDKManager\@\@UEAAXXZ
     */
    MCVAPI void enableBrazeSDK(); // NOLINT
    /**
     * @symbol
     * ?setBrazeId\@BrazeSDKManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setBrazeId(std::string const&); // NOLINT
#endif

    // private:

private:
    /**
     * @symbol ?mInitialized\@BrazeSDKManager\@\@0_NA
     */
    MCAPI static bool mInitialized; // NOLINT
    /**
     * @symbol ?mInstance\@BrazeSDKManager\@\@0V?$shared_ptr\@VBrazeSDKManager\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class BrazeSDKManager> mInstance; // NOLINT
    /**
     * @symbol ?mIsReady\@BrazeSDKManager\@\@0_NA
     */
    MCAPI static bool mIsReady; // NOLINT
};
