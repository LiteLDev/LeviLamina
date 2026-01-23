#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadSdk {
public:
    // SentryEnvelopePayloadSdk inner types define
    enum class Type : int {
        JavaScript = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1d12a3;
    ::ll::UntypedStorage<8, 32> mUnk605f8d;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadSdk();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadSdk(::SentryEnvelopePayloadSdk const&);

    MCNAPI ::SentryEnvelopePayloadSdk& operator=(::SentryEnvelopePayloadSdk&&);

    MCNAPI ::SentryEnvelopePayloadSdk& operator=(::SentryEnvelopePayloadSdk const&);

    MCNAPI ~SentryEnvelopePayloadSdk();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadSdk const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
