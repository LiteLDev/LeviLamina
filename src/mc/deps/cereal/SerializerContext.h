#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ResultCode.h"

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
        LogEntry(LogEntry const&);
        LogEntry();

    public:
        // NOLINTBEGIN
        // symbol: ??4LogEntry@SerializerContext@cereal@@QEAAAEAU012@AEBU012@@Z
        MCAPI struct cereal::SerializerContext::LogEntry& operator=(struct cereal::SerializerContext::LogEntry const&);

        // symbol: ??1LogEntry@SerializerContext@cereal@@QEAA@XZ
        MCAPI ~LogEntry();

        // NOLINTEND
    };

    class ScopedPop {
    public:
        // prevent constructor by default
        ScopedPop& operator=(ScopedPop const&);
        ScopedPop(ScopedPop const&);
        ScopedPop();

    public:
        // NOLINTBEGIN
        // symbol: ??1ScopedPop@SerializerContext@cereal@@QEAA@XZ
        MCAPI ~ScopedPop();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&);
    SerializerContext(SerializerContext const&);
    SerializerContext();

public:
    // NOLINTBEGIN
    // symbol: ?consumeContext@SerializerContext@cereal@@QEAAXAEBV12@@Z
    MCAPI void consumeContext(class cereal::SerializerContext const&);

    // symbol: ?detachContext@SerializerContext@cereal@@QEAA?AV12@XZ
    MCAPI class cereal::SerializerContext detachContext();

    // symbol:
    // ?getErrors@SerializerContext@cereal@@QEBA?AV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@XZ
    MCAPI std::vector<std::string> getErrors() const;

    // symbol:
    // ?getLog@SerializerContext@cereal@@QEBAAEBV?$vector@ULogEntry@SerializerContext@cereal@@V?$allocator@ULogEntry@SerializerContext@cereal@@@std@@@std@@XZ
    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    // symbol: ?getStatus@SerializerContext@cereal@@QEBA?AW4ResultCode@2@XZ
    MCAPI ::cereal::ResultCode getStatus() const;

    // symbol:
    // ?log@SerializerContext@cereal@@QEAAXW4ResultCode@2@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void log(::cereal::ResultCode, std::string);

    // symbol: ??BSerializerContext@cereal@@QEBA_NXZ
    MCAPI explicit operator bool() const;

    // symbol: ?popContext@SerializerContext@cereal@@QEAAXXZ
    MCAPI void popContext();

    // symbol:
    // ?pushContext@SerializerContext@cereal@@QEAAAEAV12@W4ContextType@12@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI class cereal::SerializerContext& pushContext(::cereal::SerializerContext::ContextType, std::string);

    // symbol: ??1SerializerContext@cereal@@QEAA@XZ
    MCAPI ~SerializerContext();

    // symbol:
    // ?contextString@SerializerContext@cereal@@SA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV?$vector@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@V?$allocator@U?$pair@W4ContextType@SerializerContext@cereal@@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@4@@Z
    MCAPI static std::string
    contextString(std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>> const&);

    // NOLINTEND
};

}; // namespace cereal
