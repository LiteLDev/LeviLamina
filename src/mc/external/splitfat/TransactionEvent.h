#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

struct TransactionEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke16abd;
    union {
        ::ll::UntypedStorage<4, 4> mUnk979368;
        ::ll::UntypedStorage<4, 4> mUnkddbe5e;
        ::ll::UntypedStorage<4, 4> mUnka57463;
    };
    ::ll::UntypedStorage<4, 4> mUnkbd5b0e;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionEvent& operator=(TransactionEvent const&);
    TransactionEvent(TransactionEvent const&);
    TransactionEvent();
};

} // namespace SFAT
