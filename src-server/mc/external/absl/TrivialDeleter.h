#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace absl::internal_any_invocable {

class TrivialDeleter {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk26c584;
    // NOLINTEND

public:
    // prevent constructor by default
    TrivialDeleter& operator=(TrivialDeleter const&);
    TrivialDeleter(TrivialDeleter const&);
    TrivialDeleter();
};

} // namespace absl::internal_any_invocable
