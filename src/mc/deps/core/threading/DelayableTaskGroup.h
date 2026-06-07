#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/copyable_function.h"
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
// clang-format on

namespace Bedrock::Threading {

struct DelayableTaskGroup : public ::std::unique_ptr<::TaskGroup> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::copyable_function<void(::TaskGroup&, ::std::chrono::seconds, ::brstd::move_only_function<void()>)>>
        mStartWithDelay;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void defaultStartWithDelay(
        ::TaskGroup&                        taskGroup,
        ::std::chrono::seconds              delay,
        ::brstd::move_only_function<void()> work
    );
    // NOLINTEND
};

} // namespace Bedrock::Threading
