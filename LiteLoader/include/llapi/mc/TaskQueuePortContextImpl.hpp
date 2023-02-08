/**
 * @file  TaskQueuePortContextImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   -2033923833
     * @vftbl  0
     * @symbol  ?AddRef\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual unsigned int AddRef();
    /**
     * @hash   -1480436420
     * @vftbl  1
     * @symbol  ?Release\@TaskQueuePortContextImpl\@\@UEAAIXZ
     */
    virtual unsigned int Release();
    /**
     * @hash   2107853464
     * @vftbl  2
     * @symbol  ?QueryApi\@TaskQueuePortContextImpl\@\@UEAAJW4ApiId\@\@PEAPEAX\@Z
     */
    virtual long QueryApi(enum class ApiId, void **);
    /**
     * @hash   -358567878
     * @vftbl  3
     * @symbol  ?GetType\@TaskQueuePortContextImpl\@\@UEAA?AW4XTaskQueuePort\@\@XZ
     */
    virtual enum class XTaskQueuePort GetType();
    /**
     * @hash   1903076110
     * @vftbl  4
     * @symbol  ?GetStatus\@TaskQueuePortContextImpl\@\@UEAA?AW4TaskQueuePortStatus\@\@XZ
     */
    virtual enum class TaskQueuePortStatus GetStatus();
    /**
     * @hash   -2093959584
     * @vftbl  5
     * @symbol  ?GetQueue\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueue\@\@XZ
     */
    virtual struct ITaskQueue * GetQueue();
    /**
     * @hash   1180169051
     * @vftbl  6
     * @symbol  ?GetPort\@TaskQueuePortContextImpl\@\@UEAAPEAUITaskQueuePort\@\@XZ
     */
    virtual struct ITaskQueuePort * GetPort();
    /**
     * @hash   1483430736
     * @vftbl  7
     * @symbol  ?TrySetStatus\@TaskQueuePortContextImpl\@\@UEAA_NW4TaskQueuePortStatus\@\@0\@Z
     */
    virtual bool TrySetStatus(enum class TaskQueuePortStatus, enum class TaskQueuePortStatus);
    /**
     * @hash   -1469863694
     * @vftbl  8
     * @symbol  ?SetStatus\@TaskQueuePortContextImpl\@\@UEAAXW4TaskQueuePortStatus\@\@\@Z
     */
    virtual void SetStatus(enum class TaskQueuePortStatus);
    /**
     * @hash   1632339291
     * @vftbl  9
     * @symbol  ?ItemQueued\@TaskQueuePortContextImpl\@\@UEAAXXZ
     */
    virtual void ItemQueued();
    /**
     * @hash   -1390846782
     * @vftbl  10
     * @symbol  ?AddSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool AddSuspend();
    /**
     * @hash   -833998561
     * @vftbl  11
     * @symbol  ?RemoveSuspend\@TaskQueuePortContextImpl\@\@UEAA_NXZ
     */
    virtual bool RemoveSuspend();

};