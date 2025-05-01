#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class OSError; }
// clang-format on

namespace Core {

class Result : public ::Bedrock::Result<void, ::Bedrock::OSError> {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Result(::Core::Result&&);

    MCNAPI explicit Result(::Bedrock::ErrorInfo<::Bedrock::OSError>&& error);

    MCNAPI explicit Result(bool success);

    MCNAPI ::std::string message() const;

    MCNAPI ::Core::Result& operator=(::Core::Result&&);

    MCNAPI ~Result();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Core::Result either(::Core::Result&& r1, ::Core::Result&& r2);

    MCNAPI static ::std::string format(char const*, ...);

    MCNAPI static ::Core::Result makeFailureNotImplemented();

    MCNAPI static ::Core::Result makeFailureWithString(::std::string message);

    MCNAPI static ::Core::Result makeFailureWithStringLiteral(char const* message);

    MCNAPI static ::Core::Result makeSuccess();

    MCNAPI static ::Core::Result merge(::Core::Result&& r1, ::Core::Result&& r2);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Core::Result&&);

    MCNAPI void* $ctor(::Bedrock::ErrorInfo<::Bedrock::OSError>&& error);

    MCNAPI void* $ctor(bool success);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Core
