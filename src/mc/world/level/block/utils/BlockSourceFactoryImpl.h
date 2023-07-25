#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class BlockSourceFactoryImpl {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKSOURCEFACTORYIMPL
public:
    BlockSourceFactoryImpl& operator=(BlockSourceFactoryImpl const&) = delete;
    BlockSourceFactoryImpl(BlockSourceFactoryImpl const&)            = delete;
    BlockSourceFactoryImpl()                                         = delete;
#endif

public:
    // protected:
    /**
     * @symbol
     * ?_createOrUpdate\@BlockSourceFactoryImpl\@\@IEBAXAEAVMockableOwnedBlockSource\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void _createOrUpdate(class MockableOwnedBlockSource&, class AutomaticID<class Dimension, int>) const;

protected:
};
