#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct LastSerializationResultBS {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 4608> mUnk3b272c;
    ::ll::UntypedStorage<1, 16>   mUnk7a5c40;
    // NOLINTEND

public:
    // prevent constructor by default
    LastSerializationResultBS& operator=(LastSerializationResultBS const&);
    LastSerializationResultBS(LastSerializationResultBS const&);
    LastSerializationResultBS();
};

} // namespace RakNet
