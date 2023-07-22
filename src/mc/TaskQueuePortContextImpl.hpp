/**
 * @file  TaskQueuePortContextImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TaskQueuePortContextImpl.
 *
 */
class TaskQueuePortContextImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKQUEUEPORTCONTEXTIMPL
public:
    class TaskQueuePortContextImpl& operator=(class TaskQueuePortContextImpl const &) = delete;
    TaskQueuePortContextImpl(class TaskQueuePortContextImpl const &) = delete;
    TaskQueuePortContextImpl() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  ?AddRef\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual unsigned int AddRef();
    /**
     * @vftbl  1
     * @symbol  ?Release\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual unsigned int Release();
    /**
     * @vftbl  2
     * @symbol  ?QueryApi\@TaskQueuePortContextImpl\@\@UEAAJW4ApiId\@\@PEAPEAX\@Z
     */
    virtual long QueryApi(enum class ApiId, void **);
    /**
     * @vftbl  3
     * @symbol  ?GetType\@TaskQueuePortContextImpl\@\@UEAA?AW4XTaskQueuePort\@\@XZ
     */
    virtual enum class XTaskQueuePort GetType();
    /**
     * @vftbl  4
     * @symbol  ?GetStatus\@TaskQueuePortContextImpl\@\@UEAA?AW4TaskQueuePortStatus\@\@XZ
     */
    virtual enum class TaskQueuePortStatus GetStatus();
    /**
     * @vftbl  5
     * @symbol  ?GetQueue\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueue\@\@XZ
     */
    virtual struct ITaskQueue * GetQueue();
    /**
     * @vftbl  6
     * @symbol  ?GetPort\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueuePort\@\@XZ
     */
    virtual struct ITaskQueuePort * GetPort();
    /**
     * @vftbl  7
     * @symbol  ?TrySetStatus\@TaskQueuePortContextImpl\@\@UEAA_NW4TaskQueuePortStatus\@\@0\@Z
     */
    virtual bool TrySetStatus(enum class TaskQueuePortStatus, enum class TaskQueuePortStatus);
    /**
     * @vftbl  8
     * @symbol  ?SetStatus\@TaskQueuePortContextImpl\@\@UEAAXW4TaskQueuePortStatus\@\@\@Z
     */
    virtual void SetStatus(enum class TaskQueuePortStatus);
    /**
     * @vftbl  9
     * @symbol  ?ItemQueued\@TaskQueuePortContextImpl\@\@UEAAXXZ
     */
    virtual void ItemQueued();
    /**
     * @vftbl  10
     * @symbol  ?AddSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool AddSuspend();
    /**
     * @vftbl  11
     * @symbol  ?RemoveSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool RemoveSuspend();

};