#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/ResultCode.h"
#include "mc/deps/core/container/small_vector.h"
#include "mc/deps/core/string/StaticOptimizedString.h"

namespace cereal {

class BasicSerializerContext {
public:
    // BasicSerializerContext inner types declare
    // clang-format off
    struct TokenHolder;
    struct Context;
    struct LogEntry;
    // clang-format on

    // BasicSerializerContext inner types define
    enum class ContextType : int {
        ArrayElem = 0,
        Member    = 1,
        Root      = 2,
    };

    struct TokenHolder {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 16, ::std::variant<uint, ::Bedrock::StaticOptimizedString>> mToken;
        // NOLINTEND

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI explicit operator ::std::string_view() const;
        // NOLINTEND
    };

    struct Context {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, ::cereal::BasicSerializerContext::ContextType>  mType;
        ::ll::TypedStorage<8, 16, ::cereal::BasicSerializerContext::TokenHolder> mToken;
        ::ll::TypedStorage<4, 4, uint>                                           mPrevIndex;
        // NOLINTEND
    };

    struct LogEntry {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                           mResultCode;
        ::ll::TypedStorage<8, 16, ::cereal::BasicSerializerContext::TokenHolder> mMessage;
        ::ll::TypedStorage<4, 4, uint>                                           mContextIndex;
        ::ll::TypedStorage<8, 8, ::Bedrock::small_vector<::cereal::BasicSerializerContext::Context, 1> const*> mStack;
        ::ll::TypedStorage<4, 4, uint> mGeneration;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                                                                    mCurrentIndex;
    ::ll::TypedStorage<8, 48, ::Bedrock::small_vector<::cereal::BasicSerializerContext::Context, 1>>  mStack;
    ::ll::TypedStorage<8, 64, ::Bedrock::small_vector<::cereal::BasicSerializerContext::LogEntry, 1>> mLog;
    ::ll::TypedStorage<2, 2, ::cereal::ResultCode>                                                    mErrorCodes;
    ::ll::TypedStorage<1, 1, ::cereal::ContextArea>                                                   mContextArea;
    // NOLINTEND

public:
    // prevent constructor by default
    BasicSerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit BasicSerializerContext(::cereal::ResultCode errorCodes);

    MCAPI ::std::string _getContextString(uint index) const;

    MCFOLD ::cereal::ContextArea contextArea() const;

    MCAPI void contextArea(::cereal::ContextArea area);

    MCAPI ::std::vector<::cereal::BasicSerializerContext::Context>
    contextFor(::cereal::BasicSerializerContext::LogEntry const& entry) const;

    MCAPI ::std::pair<::cereal::BasicSerializerContext::ContextType, ::std::string_view> currentContext() const;

    MCAPI ::std::string currentContextString() const;

    MCAPI ::cereal::ResultCode errorCodes() const;

    MCAPI ::std::vector<::std::string> errors() const;

    MCAPI ::gsl::span<::cereal::BasicSerializerContext::LogEntry const> logEntries() const;

    MCAPI void treatAsError(::cereal::ResultCode res, bool isError);

    MCAPI ~BasicSerializerContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ResultCode errorCodes);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};

} // namespace cereal
