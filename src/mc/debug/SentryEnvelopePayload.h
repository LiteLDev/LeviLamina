#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayload {
public:
    // SentryEnvelopePayload inner types define
    enum class Level : int {
        Error   = 0,
        Warning = 1,
        Info    = 2,
    };

    enum class Platform : int {
        JavaScript = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk4574db;
    ::ll::UntypedStorage<4, 4>   mUnk944e53;
    ::ll::UntypedStorage<4, 4>   mUnk5c270b;
    ::ll::UntypedStorage<8, 32>  mUnk67f142;
    ::ll::UntypedStorage<8, 72>  mUnk868980;
    ::ll::UntypedStorage<8, 32>  mUnk6df929;
    ::ll::UntypedStorage<8, 32>  mUnk48f1e6;
    ::ll::UntypedStorage<8, 32>  mUnk53b6cc;
    ::ll::UntypedStorage<8, 32>  mUnk9b93e2;
    ::ll::UntypedStorage<8, 128> mUnk76bb58;
    ::ll::UntypedStorage<8, 48>  mUnk3aee66;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayload& operator=(SentryEnvelopePayload const&);
    SentryEnvelopePayload();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayload(::SentryEnvelopePayload&&);

    MCNAPI SentryEnvelopePayload(::SentryEnvelopePayload const&);

    MCNAPI ::SentryEnvelopePayload& operator=(::SentryEnvelopePayload&&);

    MCNAPI ~SentryEnvelopePayload();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayload&&);

    MCNAPI void* $ctor(::SentryEnvelopePayload const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
