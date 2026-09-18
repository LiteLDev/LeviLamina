#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/string/StaticOptimizedString.h"
#include "mc/platform/brstd/move_only_function.h"

class Interaction {
public:
    // Interaction inner types define
    using ExecutionCallback = ::brstd::move_only_function<void() &&>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::Bedrock::StaticOptimizedString>        mInteractText;
    ::ll::TypedStorage<8, 64, ::brstd::move_only_function<void() &&>> mCallback;
    bool                                                              mSwing : 1;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Interaction
    Success(::Bedrock::StaticOptimizedString interactText, ::brstd::move_only_function<void() &&> callback);
    // NOLINTEND
};
