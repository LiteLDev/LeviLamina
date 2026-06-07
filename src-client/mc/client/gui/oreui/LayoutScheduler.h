#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/threading/TaskGroup.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Library; }
// clang-format on

namespace OreUI {

class LayoutScheduler {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::cohtml::Library&> mLibrary;
    ::ll::TypedStorage<8, 336, ::TaskGroup>      mTaskGroup;
    // NOLINTEND

public:
    // prevent constructor by default
    LayoutScheduler& operator=(LayoutScheduler const&);
    LayoutScheduler(LayoutScheduler const&);
    LayoutScheduler();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit LayoutScheduler(::cohtml::Library& library);

    MCAPI void scheduleLayoutTask();

    MCAPI void waitUntilLayoutIsCompleted();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cohtml::Library& library);
    // NOLINTEND
};

} // namespace OreUI
