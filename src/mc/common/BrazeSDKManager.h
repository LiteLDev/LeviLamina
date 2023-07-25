#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BrazeSDKManager {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRAZESDKMANAGER
public:
    BrazeSDKManager& operator=(BrazeSDKManager const&) = delete;
    BrazeSDKManager(BrazeSDKManager const&)            = delete;
    BrazeSDKManager()                                  = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BRAZESDKMANAGER
    /**
     * @symbol ?_disableBrazeSDK\@BrazeSDKManager\@\@MEAAXXZ
     */
    MCVAPI void _disableBrazeSDK();
    /**
     * @symbol ?_enableBrazeSDK\@BrazeSDKManager\@\@MEAAXXZ
     */
    MCVAPI void _enableBrazeSDK();
    /**
     * @symbol ?disableBrazeSDK\@BrazeSDKManager\@\@UEAAXXZ
     */
    MCVAPI void disableBrazeSDK();
    /**
     * @symbol ?enableBrazeSDK\@BrazeSDKManager\@\@UEAAXXZ
     */
    MCVAPI void enableBrazeSDK();
    /**
     * @symbol
     * ?setBrazeId\@BrazeSDKManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setBrazeId(std::string const&);
#endif

    // private:

private:
    /**
     * @symbol ?mInitialized\@BrazeSDKManager\@\@0_NA
     */
    MCAPI static bool mInitialized;
    /**
     * @symbol ?mInstance\@BrazeSDKManager\@\@0V?$shared_ptr\@VBrazeSDKManager\@\@\@std\@\@A
     */
    MCAPI static class std::shared_ptr<class BrazeSDKManager> mInstance;
    /**
     * @symbol ?mIsReady\@BrazeSDKManager\@\@0_NA
     */
    MCAPI static bool mIsReady;
};
