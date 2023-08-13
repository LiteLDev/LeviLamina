#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Core {

class Result {

public:
    // prevent constructor by default
    Result& operator=(Result const&) = delete;
    Result(Result const&)            = delete;
    Result()                         = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0Result\@Core\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI Result(class Core::Result&&);
    /**
     * @symbol ??0Result\@Core\@\@QEAA\@_NV?$function\@$$A6AXPEAVResult\@Core\@\@\@Z\@std\@\@\@Z
     */
    MCAPI Result(bool, std::function<void(class Core::Result*)>);
    /**
     * @symbol ?architecturalProblem\@Result\@Core\@\@QEBAXXZ
     */
    MCAPI void architecturalProblem() const;
    /**
     * @symbol ?catastrophic\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool catastrophic() const;
    /**
     * @symbol ?failed\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool failed() const;
    /**
     * @symbol ?format\@Result\@Core\@\@QEAAXPEBDZZ
     */
    MCAPI void format(char const*, ...);
    /**
     * @symbol ?ignoreError\@Result\@Core\@\@QEBAXXZ
     */
    MCAPI void ignoreError() const;
    /**
     * @symbol ?message\@Result\@Core\@\@QEBAPEBDXZ
     */
    MCAPI char const* message() const;
    /**
     * @symbol ??BResult\@Core\@\@QEBA_NXZ
     */
    MCAPI operator bool() const;
    /**
     * @symbol ??4Result\@Core\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class Core::Result& operator=(class Core::Result&&);
    /**
     * @symbol ?peekFailed\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool peekFailed() const;
    /**
     * @symbol ?peekSucceeded\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool peekSucceeded() const;
    /**
     * @symbol ?succeeded\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool succeeded() const;
    /**
     * @symbol ?throwFailed\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool throwFailed() const;
    /**
     * @symbol ??1Result\@Core\@\@QEAA\@XZ
     */
    MCAPI ~Result();
    /**
     * @symbol ?either\@Result\@Core\@\@SA?AV12\@$$QEAV12\@0\@Z
     */
    MCAPI static class Core::Result either(class Core::Result&&, class Core::Result&&);
    /**
     * @symbol ?makeFailure\@Result\@Core\@\@SA?AV12\@$$QEAV?$function\@$$A6AXPEAVResult\@Core\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static class Core::Result makeFailure(std::function<void(class Core::Result*)>&&);
    /**
     * @symbol ?makeFailure\@Result\@Core\@\@SA?AV12\@XZ
     */
    MCAPI static class Core::Result makeFailure();
    /**
     * @symbol ?makeFailureNotImplemented\@Result\@Core\@\@SA?AV12\@XZ
     */
    MCAPI static class Core::Result makeFailureNotImplemented();
    /**
     * @symbol ?makeFailureWithStringLiteral\@Result\@Core\@\@SA?AV12\@PEBD\@Z
     */
    MCAPI static class Core::Result makeFailureWithStringLiteral(char const*);
    /**
     * @symbol ?makeSuccess\@Result\@Core\@\@SA?AV12\@XZ
     */
    MCAPI static class Core::Result makeSuccess();
    /**
     * @symbol ?merge\@Result\@Core\@\@SA?AV12\@$$QEAV12\@0\@Z
     */
    MCAPI static class Core::Result merge(class Core::Result&&, class Core::Result&&);
    // NOLINTEND
};

}; // namespace Core
