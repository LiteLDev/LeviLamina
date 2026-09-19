#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Editor::Transactions {

struct TransactionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnk865238;
    ::ll::UntypedStorage<8, 24>  mUnk2029b2;
    ::ll::UntypedStorage<1, 1>   mUnk320f3f;
    ::ll::UntypedStorage<4, 4>   mUnkdd4931;
    ::ll::UntypedStorage<8, 224> mUnkd33c00;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionEvent& operator=(TransactionEvent const&);
    TransactionEvent(TransactionEvent const&);
    TransactionEvent();
};

} // namespace Editor::Transactions
