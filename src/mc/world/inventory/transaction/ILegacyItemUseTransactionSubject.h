#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class ILegacyItemUseTransactionSubject {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ILegacyItemUseTransactionSubject() = default;

    // vIndex: 1
    virtual bool isServerAuthBlockBreakingEnabled() const = 0;

    // vIndex: 2
    virtual bool destroyBlock(::BlockPos const&, uchar) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
