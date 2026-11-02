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
    MCNAPI explicit Result(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCNAPI explicit Result(bool success);

    MCNAPI ~Result();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCNAPI void* $ctor(bool success);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
