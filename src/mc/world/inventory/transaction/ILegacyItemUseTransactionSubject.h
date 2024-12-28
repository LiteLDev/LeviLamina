#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ILegacyItemUseTransactionSubject {
public:
    // prevent constructor by default
    ILegacyItemUseTransactionSubject& operator=(ILegacyItemUseTransactionSubject const&);
    ILegacyItemUseTransactionSubject(ILegacyItemUseTransactionSubject const&);
    ILegacyItemUseTransactionSubject();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyItemUseTransactionSubject();

    // vIndex: 1
    virtual bool isServerAuthBlockBreakingEnabled() const = 0;

    // vIndex: 2
    virtual bool destroyBlock(::BlockPos const&, uchar) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
