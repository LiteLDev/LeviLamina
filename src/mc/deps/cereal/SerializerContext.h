#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { enum class ResultCode; }
// clang-format on

namespace cereal {

class SerializerContext {
public:
    // SerializerContext inner types declare
    // clang-format off
    struct LogEntry;
    class ScopedPop;
    // clang-format on

    // SerializerContext inner types define
    enum class ContextType {};

    struct LogEntry {

    public:
        // prevent constructor by default
        LogEntry(LogEntry const&) = delete;
        LogEntry()                = delete;

    public:
        /**
         * @symbol ??4LogEntry\@SerializerContext\@cereal\@\@QEAAAEAU012\@AEBU012\@\@Z
         */
        MCAPI struct cereal::SerializerContext::LogEntry&
        operator=(struct cereal::SerializerContext::LogEntry const&); // NOLINT
        /**
         * @symbol ??1LogEntry\@SerializerContext\@cereal\@\@QEAA\@XZ
         */
        MCAPI ~LogEntry(); // NOLINT
    };

    class ScopedPop {

    public:
        // prevent constructor by default
        ScopedPop& operator=(ScopedPop const&) = delete;
        ScopedPop(ScopedPop const&)            = delete;
        ScopedPop()                            = delete;

    public:
        /**
         * @symbol ??1ScopedPop\@SerializerContext\@cereal\@\@QEAA\@XZ
         */
        MCAPI ~ScopedPop(); // NOLINT
    };

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&) = delete;

public:
    /**
     * @symbol ??0SerializerContext\@cereal\@\@QEAA\@XZ
     */
    MCAPI SerializerContext(); // NOLINT
    /**
     * @symbol ??0SerializerContext\@cereal\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI SerializerContext(class cereal::SerializerContext const&); // NOLINT
    /**
     * @symbol ?clear\@SerializerContext\@cereal\@\@QEAAXXZ
     */
    MCAPI void clear(); // NOLINT
    /**
     * @symbol ?consumeContext\@SerializerContext\@cereal\@\@QEAAX$$QEAV12\@\@Z
     */
    MCAPI void consumeContext(class cereal::SerializerContext&&); // NOLINT
    /**
     * @symbol ?detachContext\@SerializerContext\@cereal\@\@QEAA?AV12\@XZ
     */
    MCAPI class cereal::SerializerContext detachContext(); // NOLINT
    /**
     * @symbol
     * ?getErrors\@SerializerContext\@cereal\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getErrors() const; // NOLINT
    /**
     * @symbol
     * ?getLog\@SerializerContext\@cereal\@\@QEBAAEBV?$vector\@ULogEntry\@SerializerContext\@cereal\@\@V?$allocator\@ULogEntry\@SerializerContext\@cereal\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const; // NOLINT
    /**
     * @symbol
     * ?log\@SerializerContext\@cereal\@\@QEAA?AW4ResultCode\@internal\@2\@W4342\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class cereal::internal::ResultCode log(enum class cereal::internal::ResultCode, std::string); // NOLINT
    /**
     * @symbol ?popContext\@SerializerContext\@cereal\@\@QEAAXXZ
     */
    MCAPI void popContext(); // NOLINT
    /**
     * @symbol
     * ?pushContext\@SerializerContext\@cereal\@\@QEAAAEAV12\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class cereal::SerializerContext&
        pushContext(struct std::pair<enum class cereal::SerializerContext::ContextType, std::string>); // NOLINT
    /**
     * @symbol ??1SerializerContext\@cereal\@\@QEAA\@XZ
     */
    MCAPI ~SerializerContext(); // NOLINT
    /**
     * @symbol
     * ?contextString\@SerializerContext\@cereal\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static std::string
    contextString(std::vector<
                  struct std::pair<enum class cereal::SerializerContext::ContextType, std::string>> const&); // NOLINT
};

}; // namespace cereal
