#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cg::details {

class WorkToken {
public:
    // WorkToken inner types define
    using SharedLifetime = ::std::shared_ptr<::gsl::final_action<::std::function<void()>>> const;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::std::atomic<bool>> mIsDone;
    // NOLINTEND
};

} // namespace cg::details
