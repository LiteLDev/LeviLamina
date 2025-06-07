#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct AsyncJoinError;
// clang-format on

class AsyncVerdictPromise {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk6ea85b;
    // NOLINTEND

public:
    // prevent constructor by default
    AsyncVerdictPromise& operator=(AsyncVerdictPromise const&);
    AsyncVerdictPromise(AsyncVerdictPromise const&);
    AsyncVerdictPromise();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void setPromise(::nonstd::expected<void, ::AsyncJoinError> verdict);
    // NOLINTEND
};
