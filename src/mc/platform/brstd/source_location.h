#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace brstd {

struct source_location {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk26653a;
    ::ll::UntypedStorage<4, 4>  mUnkc62311;
    ::ll::UntypedStorage<4, 4>  mUnkd301d2;
    // NOLINTEND

public:
    // prevent constructor by default
    source_location& operator=(source_location const&);
    source_location(source_location const&);
    source_location();
};

} // namespace brstd
