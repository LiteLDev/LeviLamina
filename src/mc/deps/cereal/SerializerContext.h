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
        MCNAPI ~ScopedPop();
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
        MCNAPI void $dtor();
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk3e0f77;
    ::ll::UntypedStorage<4, 4> mUnk2db00f;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&);
    SerializerContext(SerializerContext const&);
    SerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void clearGenerations(uint from, uint to, ::cereal::ResultCode filter);

    MCNAPI ::cereal::LogCheckpoint getLogCheckpoint();

    MCNAPI void log(::cereal::ResultCode res, ::Bedrock::StaticOptimizedString msg);

    MCNAPI void popContext();

    MCNAPI ::cereal::SerializerContext& pushContext(uint containerIndex);

    MCNAPI ::cereal::SerializerContext& pushContext(::Bedrock::StaticOptimizedString propertyName);

    MCNAPI ~SerializerContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
