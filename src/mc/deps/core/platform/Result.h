#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/ErrorInfo.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class OSError; }
// clang-format on

namespace Core {

class Result {
public:
    // prevent constructor by default
    Result& operator=(Result const&);
    Result(Result const&);
    Result();

public:
    // NOLINTBEGIN
    MCAPI explicit Result(bool success);

    MCAPI Result(class Core::Result&& rhs);

    MCAPI explicit Result(struct Bedrock::ErrorInfo<class Bedrock::OSError>&& error);

    MCAPI explicit Result(struct Bedrock::ErrorInfo<std::error_code>&& error);

    MCAPI void architecturalProblem() const;

    MCAPI bool catastrophic() const;

    MCAPI bool failed() const;

    MCAPI std::string message() const;

    MCAPI explicit operator bool() const;

    MCAPI class Core::Result& operator=(class Core::Result&&);

    MCAPI bool peekFailed() const;

    MCAPI bool peekSucceeded() const;

    MCAPI bool succeeded() const;

    MCAPI bool throwFailed() const;

    MCAPI ~Result();

    MCAPI static class Core::Result either(class Core::Result&& r1, class Core::Result&& r2);

    MCAPI static class Core::Result makeFailure();

    MCAPI static class Core::Result makeFailureNotImplemented();

    MCAPI static class Core::Result makeFailureWithString(std::string message);

    MCAPI static class Core::Result makeFailureWithStringLiteral(char const* message);

    MCAPI static class Core::Result makeSuccess();

    MCAPI static class Core::Result merge(class Core::Result&& r1, class Core::Result&& r2);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string format(char const*, ...);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct Bedrock::ErrorInfo<class Bedrock::OSError>&& error);

    MCAPI void* ctor$(class Core::Result&& rhs);

    MCAPI void* ctor$(struct Bedrock::ErrorInfo<std::error_code>&& error);

    MCAPI void* ctor$(bool success);

    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace Core
