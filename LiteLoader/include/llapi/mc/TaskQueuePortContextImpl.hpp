/**
 * @file  TaskQueuePortContextImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   1500546503
     * @vftbl  0
     * @symbol ?AddRef@TaskQueuePortContextImpl@@UEAAIXZ
     */
    virtual unsigned int AddRef();
    /**
     * @hash   2054033916
     * @vftbl  1
     * @symbol ?Release@TaskQueuePortContextImpl@@UEAAIXZ
     */
    virtual unsigned int Release();
    /**
     * @hash   1347356504
     * @vftbl  2
     * @symbol ?QueryApi@TaskQueuePortContextImpl@@UEAAJW4ApiId@@PEAPEAX@Z
     */
    virtual long QueryApi(enum ApiId, void **);
    /**
     * @hash   428544938
     * @vftbl  3
     * @symbol ?GetType@TaskQueuePortContextImpl@@UEAA?AW4XTaskQueuePort@@XZ
     */
    virtual enum XTaskQueuePort GetType();
    /**
     * @hash   1142579150
     * @vftbl  4
     * @symbol ?GetStatus@TaskQueuePortContextImpl@@UEAA?AW4TaskQueuePortStatus@@XZ
     */
    virtual enum TaskQueuePortStatus GetStatus();
    /**
     * @hash   1947611232
     * @vftbl  5
     * @symbol ?GetQueue@TaskQueuePortContextImpl@@UEAAPEAUITaskQueue@@XZ
     */
    virtual struct ITaskQueue * GetQueue();
    /**
     * @hash   1076396427
     * @vftbl  6
     * @symbol ?GetPort@TaskQueuePortContextImpl@@UEAAPEAUITaskQueuePort@@XZ
     */
    virtual struct ITaskQueuePort * GetPort();
    /**
     * @hash   722933776
     * @vftbl  7
     * @symbol ?TrySetStatus@TaskQueuePortContextImpl@@UEAA_NW4TaskQueuePortStatus@@0@Z
     */
    virtual bool TrySetStatus(enum TaskQueuePortStatus, enum TaskQueuePortStatus);
    /**
     * @hash   2064606642
     * @vftbl  8
     * @symbol ?SetStatus@TaskQueuePortContextImpl@@UEAAXW4TaskQueuePortStatus@@@Z
     */
    virtual void SetStatus(enum TaskQueuePortStatus);
    /**
     * @hash   871842331
     * @vftbl  9
     * @symbol ?ItemQueued@TaskQueuePortContextImpl@@UEAAXXZ
     */
    virtual void ItemQueued();
    /**
     * @hash   2143623554
     * @vftbl  10
     * @symbol ?AddSuspend@TaskQueuePortContextImpl@@UEAA_NXZ
     */
    virtual bool AddSuspend();
    /**
     * @hash   -1594495521
     * @vftbl  11
     * @symbol ?RemoveSuspend@TaskQueuePortContextImpl@@UEAA_NXZ
     */
    virtual bool RemoveSuspend();

};