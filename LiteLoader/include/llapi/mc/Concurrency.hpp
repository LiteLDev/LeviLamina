/**
 * @file  Concurrency.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC namespace Concurrency.
 *
 */
namespace Concurrency {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?get_ambient_scheduler\@Concurrency\@\@YAAEBV?$shared_ptr\@Uscheduler_interface\@Concurrency\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct Concurrency::scheduler_interface> const & get_ambient_scheduler();

};