#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IClientDimensionExtensions;
class ILevel;
class TaskGroup;
// clang-format on

struct DerivedDimensionArguments {
public:
    // member variables
    // NOLINTBEGIN
    ::ILevel&                                                                       mLevel;
    ::brstd::move_only_function<::std::unique_ptr<::TaskGroup>(::std::string_view)> mCreateTaskGroup;
    std::unique_ptr<::IClientDimensionExtensions> mClientExtensions;
    // NOLINTEND
};
