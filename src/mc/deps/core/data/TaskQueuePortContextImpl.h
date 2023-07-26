#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TaskQueuePortContextImpl {

public:
    // prevent constructor by default
    TaskQueuePortContextImpl& operator=(TaskQueuePortContextImpl const&) = delete;
    TaskQueuePortContextImpl(TaskQueuePortContextImpl const&)            = delete;
    TaskQueuePortContextImpl()                                           = delete;

public:
    /**
     * @vftbl 0
     * @symbol ?AddRef\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual unsigned int AddRef(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?Release\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual unsigned int Release(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?QueryApi\@TaskQueuePortContextImpl\@\@UEAAJW4ApiId\@\@PEAPEAX\@Z
     */
    virtual long QueryApi(enum class ApiId, void**); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?GetType\@TaskQueuePortContextImpl\@\@UEAA?AW4XTaskQueuePort\@\@XZ
     */
    virtual enum class XTaskQueuePort GetType(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?GetStatus\@TaskQueuePortContextImpl\@\@UEAA?AW4TaskQueuePortStatus\@\@XZ
     */
    virtual enum class TaskQueuePortStatus GetStatus(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?GetQueue\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueue\@\@XZ
     */
    virtual struct ITaskQueue* GetQueue(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?GetPort\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueuePort\@\@XZ
     */
    virtual struct ITaskQueuePort* GetPort(); // NOLINT
    /**
     * @vftbl 7
     * @symbol ?TrySetStatus\@TaskQueuePortContextImpl\@\@UEAA_NW4TaskQueuePortStatus\@\@0\@Z
     */
    virtual bool TrySetStatus(enum class TaskQueuePortStatus, enum class TaskQueuePortStatus); // NOLINT
    /**
     * @vftbl 8
     * @symbol ?SetStatus\@TaskQueuePortContextImpl\@\@UEAAXW4TaskQueuePortStatus\@\@\@Z
     */
    virtual void SetStatus(enum class TaskQueuePortStatus); // NOLINT
    /**
     * @vftbl 9
     * @symbol ?ItemQueued\@TaskQueuePortContextImpl\@\@UEAAXXZ
     */
    virtual void ItemQueued(); // NOLINT
    /**
     * @vftbl 10
     * @symbol ?AddSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool AddSuspend(); // NOLINT
    /**
     * @vftbl 11
     * @symbol ?RemoveSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool RemoveSuspend(); // NOLINT
};
