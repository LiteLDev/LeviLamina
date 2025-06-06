#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/core/platform/OSError.h"

// auto generated inclusion list
#include "mc/deps/core/platform/OSError.h"
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

namespace Core {

class Result : public ::Bedrock::Result<void, ::Bedrock::OSError> {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);
    Result();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Result(::Core::Result&&);

    MCAPI explicit Result(::Bedrock::ErrorInfo<::Bedrock::OSError>&& error);

    MCAPI explicit Result(bool success);

    MCAPI ::std::string message() const;

    MCAPI ::Core::Result& operator=(::Core::Result&&);

    MCAPI ~Result();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Core::Result either(::Core::Result&& r1, ::Core::Result&& r2);

    MCAPI static ::std::string format(char const*, ...);

    MCAPI static ::Core::Result makeFailureNotImplemented();

    MCAPI static ::Core::Result makeFailureWithString(::std::string message);

    MCAPI static ::Core::Result makeFailureWithStringLiteral(char const* message);

    MCAPI static ::Core::Result makeSuccess();

    MCAPI static ::Core::Result merge(::Core::Result&& r1, ::Core::Result&& r2);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor(::Core::Result&&);

    MCAPI void* $ctor(::Bedrock::ErrorInfo<::Bedrock::OSError>&& error);

    MCAPI void* $ctor(bool success);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace Core
