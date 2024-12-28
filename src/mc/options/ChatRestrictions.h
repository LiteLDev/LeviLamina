#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ChatRestrictions {
public:
    // prevent constructor by default
    ChatRestrictions& operator=(ChatRestrictions const&);
    ChatRestrictions(ChatRestrictions const&);
    ChatRestrictions();
};
