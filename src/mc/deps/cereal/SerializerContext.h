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
    struct ScopedPop;
    // clang-format on

    // SerializerContext inner types define
    enum class ContextType : int {
        ArrayElem = 0,
        Member    = 1,
        Root      = 2,
    };

    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2>  mUnk3cc9ca;
        ::ll::UntypedStorage<8, 24> mUnk428536;
        ::ll::UntypedStorage<8, 32> mUnk85c0d3;
        // NOLINTEND

    public:
        // prevent constructor by default
        LogEntry& operator=(LogEntry const&);
        LogEntry(LogEntry const&);
        LogEntry();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~LogEntry();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

    struct ScopedPop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8> mUnk9b7aba;
        // NOLINTEND

    public:
        // prevent constructor by default
        ScopedPop& operator=(ScopedPop const&);
        ScopedPop(ScopedPop const&);
        ScopedPop();

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI ~ScopedPop();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkf221bd;
    ::ll::UntypedStorage<8, 24> mUnk9d8c60;
    ::ll::UntypedStorage<2, 2>  mUnkfac550;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&);
    SerializerContext(SerializerContext const&);
    SerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void consumeContext(::cereal::SerializerContext const& context);

    MCAPI ::cereal::SerializerContext detachContext();

    MCAPI ::std::vector<::std::string> getErrors() const;

    MCFOLD ::std::vector<::cereal::SerializerContext::LogEntry> const& getLog() const;

    MCFOLD ::cereal::ResultCode getStatus() const;

    MCAPI bool isValid() const;

    MCAPI void log(::cereal::ResultCode res, ::std::string msg);

    MCAPI void popContext();

    MCAPI ::cereal::SerializerContext&
    pushContext(::cereal::SerializerContext::ContextType contextType, ::std::string contextToken);

    MCAPI ~SerializerContext();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string contextString(
        ::std::vector<::std::pair<::cereal::SerializerContext::ContextType, ::std::string>> const& contextStack
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal
