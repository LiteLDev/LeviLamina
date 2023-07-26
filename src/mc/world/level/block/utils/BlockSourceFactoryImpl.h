#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

class BlockSourceFactoryImpl {

public:
    // prevent constructor by default
    BlockSourceFactoryImpl& operator=(BlockSourceFactoryImpl const&) = delete;
    BlockSourceFactoryImpl(BlockSourceFactoryImpl const&)            = delete;
    BlockSourceFactoryImpl()                                         = delete;

    // protected:
    /**
     * @symbol
     * ?_createOrUpdate\@BlockSourceFactoryImpl\@\@IEBAXAEAVMockableOwnedBlockSource\@\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCAPI void
    _createOrUpdate(class MockableOwnedBlockSource&, class AutomaticID<class Dimension, int>) const; // NOLINT

protected:
};
