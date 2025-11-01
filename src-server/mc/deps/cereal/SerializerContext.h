#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/BasicSerializerContext.h"
#include "mc/deps/cereal/ResultCode.h"

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
    ::ll::UntypedStorage<1, 1> mUnk7fd416;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializerContext& operator=(SerializerContext const&);
    SerializerContext(SerializerContext const&);
    SerializerContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI uint64 consumeContext(::cereal::SerializerContext const& other, ::cereal::ResultCode filter);

    MCNAPI ::cereal::SerializerContext detachContext();

    MCNAPI void log(::cereal::ResultCode res, ::std::string msg);

    MCNAPI ::cereal::SerializerContext& operator=(::cereal::SerializerContext&&);

    MCNAPI void popContext();

    MCNAPI ::cereal::SerializerContext&
    pushContext(::cereal::BasicSerializerContext::ContextType contextType, ::std::string contextToken);

    MCNAPI ~SerializerContext();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
