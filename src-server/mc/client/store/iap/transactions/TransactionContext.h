#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TransactionContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk62b9d9;
    ::ll::UntypedStorage<8, 32> mUnk15ca93;
    ::ll::UntypedStorage<8, 32> mUnk33ab13;
    ::ll::UntypedStorage<8, 32> mUnkd5845d;
    ::ll::UntypedStorage<8, 24> mUnk308591;
    ::ll::UntypedStorage<8, 8> mUnk130ce7;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionContext& operator=(TransactionContext const&);
    TransactionContext(TransactionContext const&);
    TransactionContext();

};
