#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace CodeBuilder {

struct CommandRequest {
public:
    // prevent constructor by default
    CommandRequest& operator=(CommandRequest const&);
    CommandRequest(CommandRequest const&);
    CommandRequest();

public:
    // NOLINTBEGIN
    MCAPI ~CommandRequest();

    // NOLINTEND
};

}; // namespace CodeBuilder
