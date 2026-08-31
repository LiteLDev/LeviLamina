#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

namespace Core {

class Result : public ::Bedrock::Result<void> {
public:
    // prevent constructor by default
    Result();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Result(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCAPI explicit Result(bool success);

    MCAPI ~Result();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCAPI void* $ctor(bool success);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
