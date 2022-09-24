/**
 * @file  PlayerTickPolicy.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC namespace PlayerTickPolicy.
 *
 */
namespace PlayerTickPolicy {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @hash   -269214236
     * @symbol ?createPolicy@PlayerTickPolicy@@YA?AV?$unique_ptr@UIPlayerTickPolicy@@U?$default_delete@UIPlayerTickPolicy@@@std@@@std@@AEBUPlayerTickConfig@@@Z
     */
    MCAPI std::unique_ptr<struct IPlayerTickPolicy> createPolicy(struct PlayerTickConfig const &);

};