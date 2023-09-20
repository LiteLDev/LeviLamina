/**
 * @file  BackgroundTaskBase.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BackgroundTaskBase.
 *
 */
class BackgroundTaskBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BACKGROUNDTASKBASE
public:
    class BackgroundTaskBase& operator=(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase(class BackgroundTaskBase const &) = delete;
    BackgroundTaskBase() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BACKGROUNDTASKBASE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BackgroundTaskBase();
#endif
    /**
     * @symbol ??0BackgroundTaskBase\@\@QEAA\@V?$not_null\@PEAVIBackgroundTaskOwner\@\@\@gsl\@\@AEBUTaskStartInfoBase\@\@_N\@Z
     */
    MCAPI BackgroundTaskBase(class gsl::not_null<class IBackgroundTaskOwner *>, struct TaskStartInfoBase const &, bool);
    /**
     * @symbol ?getGroup\@BackgroundTaskBase\@\@QEAAPEAVIBackgroundTaskOwner\@\@XZ
     */
    MCAPI class IBackgroundTaskOwner * getGroup();
    /**
     * @symbol ?getGroupState\@BackgroundTaskBase\@\@QEBA?AW4TaskGroupState\@\@XZ
     */
    MCAPI enum class TaskGroupState getGroupState() const;
    /**
     * @symbol ?isAsync\@BackgroundTaskBase\@\@QEBA_NXZ
     */
    MCAPI bool isAsync() const;
    /**
     * @symbol ?setNext\@BackgroundTaskBase\@\@QEAAXV?$shared_ptr\@VBackgroundTaskBase\@\@\@std\@\@\@Z
     */
    MCAPI void setNext(class std::shared_ptr<class BackgroundTaskBase>);

//protected:
    /**
     * @symbol ?taskComplete\@BackgroundTaskBase\@\@IEAAXXZ
     */
    MCAPI void taskComplete();

//private:

protected:

private:
    /**
     * @symbol ?gCurrentTask\@BackgroundTaskBase\@\@0PEAV1\@EA
     */
    MCAPI static class BackgroundTaskBase * gCurrentTask;

};
