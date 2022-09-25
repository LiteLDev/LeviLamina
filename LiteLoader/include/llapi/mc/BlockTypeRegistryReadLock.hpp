/**
 * @file  BlockTypeRegistryReadLock.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class BlockTypeRegistryReadLock.
 *
 */
class BlockTypeRegistryReadLock {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKTYPEREGISTRYREADLOCK
public:
    class BlockTypeRegistryReadLock& operator=(class BlockTypeRegistryReadLock const &) = delete;
    BlockTypeRegistryReadLock(class BlockTypeRegistryReadLock const &) = delete;
    BlockTypeRegistryReadLock() = delete;
#endif

public:
    /**
     * @hash   -1518829295
     * @symbol ??1BlockTypeRegistryReadLock@@QEAA@XZ
     */
    MCAPI ~BlockTypeRegistryReadLock();

//private:
    /**
     * @hash   466139616
     * @symbol ??0BlockTypeRegistryReadLock@@AEAA@V?$shared_ptr@VBlockTypeRegistryRWLock@@@std@@@Z
     */
    MCAPI BlockTypeRegistryReadLock(class std::shared_ptr<class BlockTypeRegistryRWLock>);

private:

};