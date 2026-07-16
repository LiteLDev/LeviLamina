#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class TransactionFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>   mUnkdaefae;
    ::ll::UntypedStorage<8, 1032> mUnk7de07b;
    ::ll::UntypedStorage<8, 72>   mUnk1eeb09;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionFrame& operator=(TransactionFrame const&);
    TransactionFrame(TransactionFrame const&);
    TransactionFrame();
};

} // namespace Core
