#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::JSONObject {

struct Collection {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkf18ad4;
    ::ll::UntypedStorage<4, 4> mUnk1af5e3;
    ::ll::UntypedStorage<4, 4> mUnk75656f;
    // NOLINTEND

public:
    // prevent constructor by default
    Collection& operator=(Collection const&);
    Collection(Collection const&);
    Collection();
};

} // namespace Bedrock::JSONObject
