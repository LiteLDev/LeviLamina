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
    virtual ~ILegacyItemUseTransactionSubject() = default;

    virtual bool isServerAuthBlockBreakingEnabled() const = 0;

    virtual bool destroyBlock(::BlockPos const&, uchar) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
