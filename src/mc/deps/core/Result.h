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
    // symbol: ??0Result@Core@@QEAA@_N@Z
    MCAPI explicit Result(bool);

    // symbol: ??0Result@Core@@QEAA@$$QEAV01@@Z
    MCAPI Result(class Core::Result&& rhs);

    // symbol: ??0Result@Core@@QEAA@$$QEAU?$ErrorInfo@VOSError@Bedrock@@@Bedrock@@@Z
    MCAPI explicit Result(struct Bedrock::ErrorInfo<class Bedrock::OSError>&&);

    // symbol: ??0Result@Core@@QEAA@$$QEAU?$ErrorInfo@Verror_code@std@@@Bedrock@@@Z
    MCAPI explicit Result(struct Bedrock::ErrorInfo<std::error_code>&&);

    // symbol: ?architecturalProblem@Result@Core@@QEBAXXZ
    MCAPI void architecturalProblem() const;

    // symbol: ?catastrophic@Result@Core@@QEBA_NXZ
    MCAPI bool catastrophic() const;

    // symbol: ?failed@Result@Core@@QEBA_NXZ
    MCAPI bool failed() const;

    // symbol: ?message@Result@Core@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string message() const;

    // symbol: ??BResult@Core@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ??4Result@Core@@QEAAAEAV01@$$QEAV01@@Z
    MCAPI class Core::Result& operator=(class Core::Result&& rhs);

    // symbol: ?peekFailed@Result@Core@@QEBA_NXZ
    MCAPI bool peekFailed() const;

    // symbol: ?peekSucceeded@Result@Core@@QEBA_NXZ
    MCAPI bool peekSucceeded() const;

    // symbol: ?succeeded@Result@Core@@QEBA_NXZ
    MCAPI bool succeeded() const;

    // symbol: ?throwFailed@Result@Core@@QEBA_NXZ
    MCAPI bool throwFailed() const;

    // symbol: ??1Result@Core@@QEAA@XZ
    MCAPI ~Result();

    // symbol: ?either@Result@Core@@SA?AV12@$$QEAV12@0@Z
    MCAPI static class Core::Result either(class Core::Result&& r1, class Core::Result&& r2);

    // symbol: ?makeFailure@Result@Core@@SA?AV12@XZ
    MCAPI static class Core::Result makeFailure();

    // symbol: ?makeFailureNotImplemented@Result@Core@@SA?AV12@XZ
    MCAPI static class Core::Result makeFailureNotImplemented();

    // symbol:
    // ?makeFailureWithString@Result@Core@@SA?AV12@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI static class Core::Result makeFailureWithString(std::string);

    // symbol: ?makeFailureWithStringLiteral@Result@Core@@SA?AV12@PEBD@Z
    MCAPI static class Core::Result makeFailureWithStringLiteral(char const* message);

    // symbol: ?makeSuccess@Result@Core@@SA?AV12@XZ
    MCAPI static class Core::Result makeSuccess();

    // symbol: ?merge@Result@Core@@SA?AV12@$$QEAV12@0@Z
    MCAPI static class Core::Result merge(class Core::Result&& r1, class Core::Result&& r2);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?format@Result@Core@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBDZZ
    MCAPI static std::string format(char const*, ...);

    // NOLINTEND
};

}; // namespace Core
