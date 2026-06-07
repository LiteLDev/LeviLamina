#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
namespace cereal { class LogCheckpoint; }
// clang-format on

namespace cereal {

class SerializerContext : public ::cereal::BasicSerializerContext {
public:
    // SerializerContext inner types declare
    // clang-format off
    struct ScopedPop;
    // clang-format on

    // SerializerContext inner types define
    struct ScopedPop {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::cereal::SerializerContext*> mContext;
        // NOLINTEND

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
    ::ll::TypedStorage<4, 4, uint> mGeneration;
    ::ll::TypedStorage<4, 4, uint> mLastError;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void clearGenerations(uint from, uint to, ::cereal::ResultCode filter);

    MCAPI ::cereal::LogCheckpoint getLogCheckpoint();

    MCAPI bool hasErrors() const;

    MCAPI void log(::cereal::ResultCode res, ::Bedrock::StaticOptimizedString msg);

    MCAPI void popContext();

    MCAPI ::cereal::SerializerContext& pushContext(uint containerIndex);

    MCAPI ::cereal::SerializerContext& pushContext(::Bedrock::StaticOptimizedString propertyName);
    // NOLINTEND
};

} // namespace cereal
