#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadStacktrace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb47a3;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadStacktrace& operator=(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadStacktrace();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
