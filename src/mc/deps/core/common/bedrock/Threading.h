#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::Threading { class AssignedThread; }
namespace Bedrock::Threading { enum class AsyncErrc; }
// clang-format on

namespace Bedrock::Threading {
/**
 * @symbol ?AdoptLock\@Threading\@Bedrock\@\@3AEBUadopt_lock_t\@std\@\@EB
 */
MCAPI extern struct std::adopt_lock_t const& AdoptLock;
/**
 * @symbol ?DeferLock\@Threading\@Bedrock\@\@3AEBUdefer_lock_t\@std\@\@EB
 */
MCAPI extern struct std::defer_lock_t const& DeferLock;
/**
 * @symbol ?IS_RUNNING_STATICS\@Threading\@Bedrock\@\@YA_NXZ
 */
MCAPI bool IS_RUNNING_STATICS();
/**
 * @symbol ?MakeErrorCode\@Threading\@Bedrock\@\@YA?AVerror_code\@std\@\@W4AsyncErrc\@12\@\@Z
 */
MCAPI class std::error_code MakeErrorCode(enum class Bedrock::Threading::AsyncErrc);
/**
 * @symbol ?TryToLock\@Threading\@Bedrock\@\@3AEBUtry_to_lock_t\@std\@\@EB
 */
MCAPI extern struct std::try_to_lock_t const& TryToLock;
/**
 * @symbol ?getDefaultWorkerPool\@Threading\@Bedrock\@\@YA?AV?$not_null\@PEAVWorkerPool\@\@\@gsl\@\@XZ
 */
MCAPI class gsl::not_null<class WorkerPool*> getDefaultWorkerPool();
/**
 * @symbol ?getMainThread\@Threading\@Bedrock\@\@YAAEAVAssignedThread\@12\@XZ
 */
MCAPI class Bedrock::Threading::AssignedThread& getMainThread();
/**
 * @symbol ?getMainThreadScheduler\@Threading\@Bedrock\@\@YA?AV?$not_null\@PEAVScheduler\@\@\@gsl\@\@XZ
 */
MCAPI class gsl::not_null<class Scheduler*> getMainThreadScheduler();
/**
 * @symbol ?getNetworkWorkerPool\@Threading\@Bedrock\@\@YA?AV?$not_null\@PEAVWorkerPool\@\@\@gsl\@\@XZ
 */
MCAPI class gsl::not_null<class WorkerPool*> getNetworkWorkerPool();
/**
 * @symbol ?getServerThread\@Threading\@Bedrock\@\@YAAEAVAssignedThread\@12\@XZ
 */
MCAPI class Bedrock::Threading::AssignedThread& getServerThread();

}; // namespace Bedrock::Threading
