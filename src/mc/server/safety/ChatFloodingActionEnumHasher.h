#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Safety {

struct ChatFloodingActionEnumHasher {
public:
    // prevent constructor by default
    ChatFloodingActionEnumHasher& operator=(ChatFloodingActionEnumHasher const&);
    ChatFloodingActionEnumHasher(ChatFloodingActionEnumHasher const&);
    ChatFloodingActionEnumHasher();
};

} // namespace Safety
