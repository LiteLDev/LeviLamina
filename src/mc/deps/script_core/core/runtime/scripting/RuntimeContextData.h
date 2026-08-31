#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeContextData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16>  mUnkafef5c;
    ::ll::UntypedStorage<8, 168> mUnkeff5cb;
    ::ll::UntypedStorage<8, 8>   mUnkb2aac1;
    ::ll::UntypedStorage<8, 8>   mUnk6633c4;
    // NOLINTEND

public:
    // prevent constructor by default
    RuntimeContextData& operator=(RuntimeContextData const&);
    RuntimeContextData(RuntimeContextData const&);
    RuntimeContextData();
};

} // namespace Scripting
