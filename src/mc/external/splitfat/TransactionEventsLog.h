#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace SFAT {

class TransactionEventsLog {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnkc8ecd8;
    ::ll::UntypedStorage<8, 64> mUnk4343a0;
    ::ll::UntypedStorage<8, 64> mUnkc7ad9a;
    ::ll::UntypedStorage<8, 64> mUnk71f09f;
    ::ll::UntypedStorage<1, 1>  mUnk99cc47;
    ::ll::UntypedStorage<8, 24> mUnk7f77fb;
    // NOLINTEND

public:
    // prevent constructor by default
    TransactionEventsLog& operator=(TransactionEventsLog const&);
    TransactionEventsLog(TransactionEventsLog const&);
    TransactionEventsLog();
};

} // namespace SFAT
