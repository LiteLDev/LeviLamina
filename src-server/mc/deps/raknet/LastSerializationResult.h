#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace RakNet {

struct LastSerializationResult {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk806f70;
    ::ll::UntypedStorage<8, 8> mUnk308560;
    ::ll::UntypedStorage<8, 8> mUnk7ca5eb;
    // NOLINTEND

public:
    // prevent constructor by default
    LastSerializationResult& operator=(LastSerializationResult const&);
    LastSerializationResult(LastSerializationResult const&);
    LastSerializationResult();

};

}
