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
    /**
     * @symbol ??0Result\@Core\@\@QEAA\@_NV?$function\@$$A6AXPEAVResult\@Core\@\@\@Z\@std\@\@\@Z
     */
    MCAPI Result(bool, class std::function<void(class Core::Result*)>); // NOLINT
    /**
     * @symbol ??0Result\@Core\@\@QEAA\@$$QEAV01\@\@Z
     */
    MCAPI Result(class Core::Result&&); // NOLINT
    /**
     * @symbol ?architecturalProblem\@Result\@Core\@\@QEBAXXZ
     */
    MCAPI void architecturalProblem() const; // NOLINT
    /**
     * @symbol ?catastrophic\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool catastrophic() const; // NOLINT
    /**
     * @symbol ?failed\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool failed() const; // NOLINT
    /**
     * @symbol ?format\@Result\@Core\@\@QEAAXPEBDZZ
     */
    MCAPI void format(char const*, ...); // NOLINT
    /**
     * @symbol ?ignoreError\@Result\@Core\@\@QEBAXXZ
     */
    MCAPI void ignoreError() const; // NOLINT
    /**
     * @symbol ?message\@Result\@Core\@\@QEBAPEBDXZ
     */
    MCAPI char const* message() const; // NOLINT
    /**
     * @symbol ??BResult\@Core\@\@QEBA_NXZ
     */
    MCAPI operator bool() const; // NOLINT
    /**
     * @symbol ??4Result\@Core\@\@QEAAAEAV01\@$$QEAV01\@\@Z
     */
    MCAPI class Core::Result& operator=(class Core::Result&&); // NOLINT
    /**
     * @symbol ?peekFailed\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool peekFailed() const; // NOLINT
    /**
     * @symbol ?peekSucceeded\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool peekSucceeded() const; // NOLINT
    /**
     * @symbol ?succeeded\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool succeeded() const; // NOLINT
    /**
     * @symbol ?throwFailed\@Result\@Core\@\@QEBA_NXZ
     */
    MCAPI bool throwFailed() const; // NOLINT
    /**
     * @symbol ??1Result\@Core\@\@QEAA\@XZ
     */
    MCAPI ~Result(); // NOLINT
    /**
     * @symbol ?either\@Result\@Core\@\@SA?AV12\@$$QEAV12\@0\@Z
     */
    MCAPI static class Core::Result either(class Core::Result&&, class Core::Result&&); // NOLINT
    /**
     * @symbol ?makeFailure\@Result\@Core\@\@SA?AV12\@$$QEAV?$function\@$$A6AXPEAVResult\@Core\@\@\@Z\@std\@\@\@Z
     */
    MCAPI static class Core::Result makeFailure(class std::function<void(class Core::Result*)>&&); // NOLINT
    /**
     * @symbol ?makeFailure\@Result\@Core\@\@SA?AV12\@XZ
     */
    MCAPI static class Core::Result makeFailure(); // NOLINT
    /**
     * @symbol ?makeFailureNotImplemented\@Result\@Core\@\@SA?AV12\@XZ
     */
    MCAPI static class Core::Result makeFailureNotImplemented(); // NOLINT
    /**
     * @symbol ?makeFailureWithStringLiteral\@Result\@Core\@\@SA?AV12\@PEBD\@Z
     */
    MCAPI static class Core::Result makeFailureWithStringLiteral(char const*); // NOLINT
    /**
     * @symbol ?makeSuccess\@Result\@Core\@\@SA?AV12\@XZ
     */
    MCAPI static class Core::Result makeSuccess(); // NOLINT
    /**
     * @symbol ?merge\@Result\@Core\@\@SA?AV12\@$$QEAV12\@0\@Z
     */
    MCAPI static class Core::Result merge(class Core::Result&&, class Core::Result&&); // NOLINT
};

}; // namespace Core
