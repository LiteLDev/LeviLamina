#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class StaticOptimizedString; }
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
    MCNAPI void clearGenerations(uint from, uint to, ::cereal::ResultCode filter);

    MCNAPI void log(::cereal::ResultCode res, ::Bedrock::StaticOptimizedString msg);

    MCNAPI void popContext();

    MCNAPI ::cereal::SerializerContext& pushContext(uint containerIndex);

    MCNAPI ::cereal::SerializerContext&
    pushContext(::Bedrock::StaticOptimizedString propertyName, ::std::optional<uint> propertyId);
    // NOLINTEND
};

} // namespace cereal
