#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AsyncJoinAllow;
struct AsyncJoinDeny;
// clang-format on

class AsyncVerdictPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke03a8b;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncVerdictPromise& operator=(AsyncVerdictPromise const&);
    AsyncVerdictPromise(AsyncVerdictPromise const&);
    AsyncVerdictPromise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setPromise(::std::variant<::std::monostate, ::AsyncJoinAllow, ::AsyncJoinDeny> verdict);
    // NOLINTEND
};
