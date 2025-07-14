#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CloudMessage {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk6464a5;
    ::ll::UntypedStorage<8, 16> mUnk44cc6f;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudMessage& operator=(CloudMessage const&);
    CloudMessage(CloudMessage const&);
    CloudMessage();
};

} // namespace CodeBuilder
