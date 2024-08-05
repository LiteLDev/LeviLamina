#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/ErrorInfo.h"

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
    MCAPI explicit Result(bool);

    MCAPI Result(class Core::Result&& rhs);

    MCAPI explicit Result(struct Bedrock::ErrorInfo<class Bedrock::OSError>&&);

    MCAPI explicit Result(struct Bedrock::ErrorInfo<std::error_code>&&);

    MCAPI void architecturalProblem() const;

    MCAPI bool catastrophic() const;

    MCAPI bool failed() const;

    MCAPI std::string message() const;

    MCAPI explicit operator bool() const;

    MCAPI class Core::Result& operator=(class Core::Result&& rhs);

    MCAPI bool peekFailed() const;

    MCAPI bool peekSucceeded() const;

    MCAPI bool succeeded() const;

    MCAPI bool throwFailed() const;

    MCAPI ~Result();

    MCAPI static class Core::Result either(class Core::Result&& r1, class Core::Result&& r2);

    MCAPI static class Core::Result makeFailure();

    MCAPI static class Core::Result makeFailureNotImplemented();

    MCAPI static class Core::Result makeFailureWithString(std::string);

    MCAPI static class Core::Result makeFailureWithStringLiteral(char const* message);

    MCAPI static class Core::Result makeSuccess();

    MCAPI static class Core::Result merge(class Core::Result&& r1, class Core::Result&& r2);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string format(char const*, ...);

    // NOLINTEND
};

}; // namespace Core
