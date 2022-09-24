/**
 * @file  BrazeSDKManager.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -736714200
     * @symbol ?_disableBrazeSDK@BrazeSDKManager@@MEAAXXZ
     */
    MCVAPI void _disableBrazeSDK();
    /**
     * @hash   -1332156863
     * @symbol ?_enableBrazeSDK@BrazeSDKManager@@MEAAXXZ
     */
    MCVAPI void _enableBrazeSDK();
    /**
     * @hash   521225727
     * @symbol ?setBrazeId@BrazeSDKManager@@UEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    MCVAPI void setBrazeId(std::string const &);
#endif

};