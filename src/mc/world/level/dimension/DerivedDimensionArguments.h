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
    ::ll::TypedStorage<8, 8, ::ILevel&> mLevel;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<::std::unique_ptr<::TaskGroup>(::std::string_view)>>
                                                                              mCreateTaskGroup;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IClientDimensionExtensions>> mClientExtensions;
    // NOLINTEND

public:
    // prevent constructor by default
    DerivedDimensionArguments& operator=(DerivedDimensionArguments const&);
    DerivedDimensionArguments(DerivedDimensionArguments const&);
    DerivedDimensionArguments();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~DerivedDimensionArguments();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
