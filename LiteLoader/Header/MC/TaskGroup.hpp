// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class TaskGroup {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TASKGROUP
public:
    class TaskGroup& operator=(class TaskGroup const &) = delete;
    TaskGroup(class TaskGroup const &) = delete;
    TaskGroup() = delete;
#endif

public:
    /*0*/ virtual ~TaskGroup();
    /*1*/ virtual void taskRegister(class std::shared_ptr<class BackgroundTaskBase>);
    /*2*/ virtual void requeueTask(class std::shared_ptr<class BackgroundTaskBase>, bool);
    /*3*/ virtual enum TaskGroupState getState() const;
    /*4*/ virtual void processCoroutines();
    /*5*/ virtual void taskComplete(class gsl::not_null<class BackgroundTaskBase *>);
    MCAPI TaskGroup(class WorkerPool &, class Scheduler &, std::string);
    MCAPI void disableOwnerThreadChecks();
    MCAPI void flush(class std::function<void (void)>);
    MCAPI class gsl::basic_string_span<char const, -1> getName() const;
    MCAPI class Scheduler & getScheduler();
    MCAPI bool isEmpty() const;
    MCAPI void pause();
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queue(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    MCAPI class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueSync(class gsl::basic_string_span<char const, -1>, class std::function<class TaskResult (void)> &&);
    MCAPI void sync_DEPRECATED_ASK_TOMMO(class std::function<void (void)>);
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChildSync_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&);
    MCAPI static class std::shared_ptr<class Bedrock::Threading::IAsyncResult<void>> queueChild_DEPRECATED(struct TaskStartInfoEx<void> const &, class std::function<class TaskResult (void)> &&, class std::function<void (void)> &&);

protected:

private:
    MCAPI void _forAllTasks(class Bedrock::Threading::UniqueLock<class std::mutex> &, class std::function<void (class std::shared_ptr<class BackgroundTaskBase> const &)>);
    MCAPI bool _isEmptyInternal() const;
    MCAPI void _queueInternal(class std::shared_ptr<class BackgroundTaskBase>);
    MCAPI static class TaskGroup * getCurrentTaskGroup();

};