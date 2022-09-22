/**
 * @file  ReplayStatePolicy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace ReplayStatePolicy.
 *
 */
namespace ReplayStatePolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -1805727606
     * @symbol ?createServerContext@ReplayStatePolicy@@YA?AV?$unique_ptr@UIReplayStatePolicy@@U?$default_delete@UIReplayStatePolicy@@@std@@@std@@AEBUReplayStateConfig@@@Z
     */
    MCAPI std::unique_ptr<struct IReplayStatePolicy> createServerContext(struct ReplayStateConfig const &);

};