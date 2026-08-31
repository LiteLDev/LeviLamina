#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadException {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk327668;
    ::ll::UntypedStorage<8, 32>  mUnk28ac9a;
    ::ll::UntypedStorage<8, 136> mUnk5ff361;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadException();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadException(::SentryEnvelopePayloadException&&);

    MCNAPI SentryEnvelopePayloadException(::SentryEnvelopePayloadException const&);

    MCNAPI ::SentryEnvelopePayloadException& operator=(::SentryEnvelopePayloadException const&);

    MCNAPI ~SentryEnvelopePayloadException();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadException&&);

    MCNAPI void* $ctor(::SentryEnvelopePayloadException const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
