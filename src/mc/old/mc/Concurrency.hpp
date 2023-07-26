/**
 * @file  Concurrency.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

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
     * @symbol  ?get_ambient_scheduler\@Concurrency\@\@YAAEBV?$shared_ptr\@Uscheduler_interface\@Concurrency\@\@\@std\@\@XZ
     */
    MCAPI class std::shared_ptr<struct Concurrency::scheduler_interface> const & get_ambient_scheduler();
    /**
     * @symbol  ?task_from_result\@Concurrency\@\@YA?AV?$task\@X\@1\@AEBVtask_options\@1\@\@Z
     */
    MCAPI class Concurrency::task<void> task_from_result(class Concurrency::task_options const &);

};