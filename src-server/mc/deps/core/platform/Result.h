#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

namespace Core {

class Result : public ::Bedrock::Result<void> {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);
    Result();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Result(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCAPI Result(::Core::Result&& result);

    MCAPI explicit Result(::Bedrock::Result<void>&&);

    MCAPI explicit Result(bool success);

    MCAPI ::std::string message() const;

    MCAPI ~Result();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::ErrorInfo<::std::error_code>&& error);

    MCFOLD void* $ctor(::Core::Result&& result);

    MCAPI void* $ctor(::Bedrock::Result<void>&&);

    MCAPI void* $ctor(bool success);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
