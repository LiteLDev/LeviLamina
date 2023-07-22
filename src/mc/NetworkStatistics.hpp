/**
 * @file  NetworkStatistics.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NetworkStatistics.
 *
 */
class NetworkStatistics {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NETWORKSTATISTICS
public:
    class NetworkStatistics& operator=(class NetworkStatistics const &) = delete;
    NetworkStatistics(class NetworkStatistics const &) = delete;
    NetworkStatistics() = delete;
#endif

public:
    /**
     * @symbol  ?getVerboseInfo\@NetworkStatistics\@\@QEBA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string getVerboseInfo() const;

};