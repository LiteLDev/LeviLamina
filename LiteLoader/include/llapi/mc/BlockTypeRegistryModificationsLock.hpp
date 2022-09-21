/**
 * @file  MC/BlockTypeRegistryModificationsLock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   529225208
     * @symbol ??1BlockTypeRegistryModificationsLock@@QEAA@XZ
     */
    MCAPI ~BlockTypeRegistryModificationsLock();

//private:
    /**
     * @hash   1812285088
     * @symbol ??0BlockTypeRegistryModificationsLock@@AEAA@V?$shared_ptr@VBlockTypeRegistryRWLock@@@std@@@Z
     */
    MCAPI BlockTypeRegistryModificationsLock(class std::shared_ptr<class BlockTypeRegistryRWLock>);

private:

};