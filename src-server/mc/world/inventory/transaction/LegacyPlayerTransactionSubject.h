#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/inventory/transaction/ILegacyItemUseTransactionSubject.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
// clang-format on

class LegacyPlayerTransactionSubject : public ::ILegacyItemUseTransactionSubject {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk484862;
    // NOLINTEND

public:
    // prevent constructor by default
    LegacyPlayerTransactionSubject& operator=(LegacyPlayerTransactionSubject const&);
    LegacyPlayerTransactionSubject(LegacyPlayerTransactionSubject const&);
    LegacyPlayerTransactionSubject();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual bool isServerAuthBlockBreakingEnabled() const /*override*/;

    // vIndex: 2
    virtual bool destroyBlock(::BlockPos const& pos, uchar face) /*override*/;

    // vIndex: 0
    virtual ~LegacyPlayerTransactionSubject() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $isServerAuthBlockBreakingEnabled() const;

    MCNAPI bool $destroyBlock(::BlockPos const& pos, uchar face);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};
