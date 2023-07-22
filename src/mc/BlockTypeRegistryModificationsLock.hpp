/**
 * @file  BlockTypeRegistryModificationsLock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockTypeRegistryModificationsLock.
 *
 */
class BlockTypeRegistryModificationsLock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRYMODIFICATIONSLOCK
public:
    class BlockTypeRegistryModificationsLock& operator=(class BlockTypeRegistryModificationsLock const &) = delete;
    BlockTypeRegistryModificationsLock(class BlockTypeRegistryModificationsLock const &) = delete;
    BlockTypeRegistryModificationsLock() = delete;
#endif

public:
    /**
     * @symbol  ??1BlockTypeRegistryModificationsLock\@\@QEAA\@XZ
     */
    MCAPI ~BlockTypeRegistryModificationsLock();

//private:
    /**
     * @symbol  ??0BlockTypeRegistryModificationsLock\@\@AEAA\@V?$shared_ptr\@VBlockTypeRegistryRWLock\@\@\@std\@\@\@Z
     */
    MCAPI BlockTypeRegistryModificationsLock(class std::shared_ptr<class BlockTypeRegistryRWLock>);

private:

};