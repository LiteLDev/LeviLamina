/**
 * @file  MC/IncomingDataHelpers.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace IncomingDataHelpers.
 *
 */
namespace IncomingDataHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   1444666838
     * @symbol ?clearIncomingCachedData@IncomingDataHelpers@@YAX_K@Z
     */
    MCAPI void clearIncomingCachedData(unsigned __int64);
    /**
     * @hash   369356861
     * @symbol ?mDataMutex@IncomingDataHelpers@@3Vrecursive_mutex@std@@A
     */
    MCAPI extern class std::recursive_mutex mDataMutex;
    /**
     * @hash   -1026970884
     * @symbol ?mIsDataReady@IncomingDataHelpers@@3V?$unordered_map@_K_NU?$hash@_K@std@@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_K_N@std@@@2@@std@@A
     */
    MCAPI extern class std::unordered_map<unsigned __int64, bool, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, bool>>> mIsDataReady;
    /**
     * @hash   676583271
     * @symbol ?mPartialDataBuffers@IncomingDataHelpers@@3V?$unordered_map@_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@A
     */
    MCAPI extern class std::unordered_map<unsigned __int64, std::string, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, std::string>>> mPartialDataBuffers;
    /**
     * @hash   1342722797
     * @symbol ?mReadyDataBuffers@IncomingDataHelpers@@3V?$unordered_map@_KV?$queue@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@U?$hash@_K@2@U?$equal_to@_K@2@V?$allocator@U?$pair@$$CB_KV?$queue@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$deque@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@2@@std@@@std@@@2@@std@@A
     */
    MCAPI extern class std::unordered_map<unsigned __int64, class std::queue<std::string, std::deque<std::string>>, struct std::hash<unsigned __int64>, struct std::equal_to<unsigned __int64>, class std::allocator<struct std::pair<unsigned __int64 const, class std::queue<std::string, std::deque<std::string>>>>> mReadyDataBuffers;

};