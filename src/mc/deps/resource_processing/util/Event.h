#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Resources::PackDirectoryIterator {

struct Event {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1631e8;
    ::ll::UntypedStorage<8, 32> mUnk599962;
    ::ll::UntypedStorage<8, 24> mUnkafee8b;
    // NOLINTEND

public:
    // prevent constructor by default
    Event& operator=(Event const&);
    Event(Event const&);
    Event();
};

} // namespace Bedrock::Resources::PackDirectoryIterator
