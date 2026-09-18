#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct TransactionOperationEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkcf5cf6;
    ::ll::UntypedStorage<8, 16>  mUnk1c4a25;
    ::ll::UntypedStorage<8, 16>  mUnk28e18b;
    ::ll::UntypedStorage<1, 1>   mUnkc4830e;
    ::ll::UntypedStorage<8, 64>  mUnk477f49;
    ::ll::UntypedStorage<8, 224> mUnk2f2deb;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionOperationEvent& operator=(TransactionOperationEvent const&);
    TransactionOperationEvent(TransactionOperationEvent const&);
    TransactionOperationEvent();
};

} // namespace Editor::Transactions
