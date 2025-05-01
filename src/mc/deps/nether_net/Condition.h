#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace NetherNet::RunLoop {

class Condition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkd51b0c;
    // NOLINTEND

public:
    // prevent constructor by default
    Condition& operator=(Condition const&);
    Condition(Condition const&);
    Condition();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool StateDispatch(::std::unique_lock<::std::mutex>&& lock) const;
    // NOLINTEND
};

} // namespace NetherNet::RunLoop
