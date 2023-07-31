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
        // NOLINTBEGIN
        /**
         * @symbol ??4LogEntry\@SerializerContext\@cereal\@\@QEAAAEAU012\@AEBU012\@\@Z
         */
        MCAPI struct cereal::SerializerContext::LogEntry& operator=(struct cereal::SerializerContext::LogEntry const&);
        /**
         * @symbol ??1LogEntry\@SerializerContext\@cereal\@\@QEAA\@XZ
         */
        MCAPI ~LogEntry();
        // NOLINTEND
    };

    class ScopedPop {

    public:
        // prevent constructor by default
        ScopedPop& operator=(ScopedPop const&) = delete;
        ScopedPop(ScopedPop const&)            = delete;
        ScopedPop()                            = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ??1ScopedPop\@SerializerContext\@cereal\@\@QEAA\@XZ
         */
        MCAPI ~ScopedPop();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&) = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0SerializerContext\@cereal\@\@QEAA\@XZ
     */
    MCAPI SerializerContext();
    /**
     * @symbol ??0SerializerContext\@cereal\@\@QEAA\@AEBV01\@\@Z
     */
    MCAPI SerializerContext(class cereal::SerializerContext const&);
    /**
     * @symbol ?clear\@SerializerContext\@cereal\@\@QEAAXXZ
     */
    MCAPI void clear();
    /**
     * @symbol ?consumeContext\@SerializerContext\@cereal\@\@QEAAX$$QEAV12\@\@Z
     */
    MCAPI void consumeContext(class cereal::SerializerContext&&);
    /**
     * @symbol
     * ?contextString\@SerializerContext\@cereal\@\@SA?AV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@V?$allocator\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@2\@\@4\@\@Z
     */
    MCAPI static std::string
    contextString(std::vector<std::pair<enum class cereal::SerializerContext::ContextType, std::string>> const&);
    /**
     * @symbol ?detachContext\@SerializerContext\@cereal\@\@QEAA?AV12\@XZ
     */
    MCAPI class cereal::SerializerContext detachContext();
    /**
     * @symbol
     * ?getErrors\@SerializerContext\@cereal\@\@QEBA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@XZ
     */
    MCAPI std::vector<std::string> getErrors() const;
    /**
     * @symbol
     * ?getLog\@SerializerContext\@cereal\@\@QEBAAEBV?$vector\@ULogEntry\@SerializerContext\@cereal\@\@V?$allocator\@ULogEntry\@SerializerContext\@cereal\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;
    /**
     * @symbol
     * ?log\@SerializerContext\@cereal\@\@QEAA?AW4ResultCode\@internal\@2\@W4342\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI enum class cereal::internal::ResultCode log(enum class cereal::internal::ResultCode, std::string);
    /**
     * @symbol ?popContext\@SerializerContext\@cereal\@\@QEAAXXZ
     */
    MCAPI void popContext();
    /**
     * @symbol
     * ?pushContext\@SerializerContext\@cereal\@\@QEAAAEAV12\@U?$pair\@W4ContextType\@SerializerContext\@cereal\@\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI class cereal::SerializerContext&
        pushContext(std::pair<enum class cereal::SerializerContext::ContextType, std::string>);
    /**
     * @symbol ??1SerializerContext\@cereal\@\@QEAA\@XZ
     */
    MCAPI ~SerializerContext();
    // NOLINTEND
};

}; // namespace cereal
