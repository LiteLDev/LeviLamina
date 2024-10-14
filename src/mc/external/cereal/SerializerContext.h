#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/cereal/ResultCode.h"

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
        LogEntry& operator=(LogEntry const&);
        LogEntry(LogEntry const&);
        LogEntry();

    public:
        // NOLINTBEGIN
        MCAPI ~LogEntry();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

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
        MCAPI ~ScopedPop();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&);
    SerializerContext(SerializerContext const&);
    SerializerContext();

public:
    // NOLINTBEGIN
    MCAPI void consumeContext(class cereal::SerializerContext const& context);

    MCAPI class cereal::SerializerContext detachContext();

    MCAPI std::vector<std::string> getErrors() const;

    MCAPI std::vector<struct cereal::SerializerContext::LogEntry> const& getLog() const;

    MCAPI ::cereal::ResultCode getStatus() const;

    MCAPI void log(::cereal::ResultCode res, std::string msg);

    MCAPI explicit operator bool() const;

    MCAPI void popContext();

    MCAPI class cereal::SerializerContext&
    pushContext(::cereal::SerializerContext::ContextType contextType, std::string contextToken);

    MCAPI ~SerializerContext();

    MCAPI static std::string
    contextString(std::vector<std::pair<::cereal::SerializerContext::ContextType, std::string>> const& contextStack);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};

}; // namespace cereal
