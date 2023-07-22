/**
 * @file  BrazeSDKManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BrazeSDKManager.
 *
 */
class BrazeSDKManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BRAZESDKMANAGER
public:
    class BrazeSDKManager& operator=(class BrazeSDKManager const &) = delete;
    BrazeSDKManager(class BrazeSDKManager const &) = delete;
    BrazeSDKManager() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BRAZESDKMANAGER
    /**
     * @symbol  ?_disableBrazeSDK\@BrazeSDKManager\@\@MEAAXXZ
     */
    MCVAPI void _disableBrazeSDK();
    /**
     * @symbol  ?_enableBrazeSDK\@BrazeSDKManager\@\@MEAAXXZ
     */
    MCVAPI void _enableBrazeSDK();
    /**
     * @symbol  ?disableBrazeSDK\@BrazeSDKManager\@\@UEAAXXZ
     */
    MCVAPI void disableBrazeSDK();
    /**
     * @symbol  ?enableBrazeSDK\@BrazeSDKManager\@\@UEAAXXZ
     */
    MCVAPI void enableBrazeSDK();
    /**
     * @symbol  ?setBrazeId\@BrazeSDKManager\@\@UEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCVAPI void setBrazeId(std::string const &);
#endif

};