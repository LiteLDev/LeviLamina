#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadStacktraceFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkad8632;
    ::ll::UntypedStorage<8, 40> mUnk736c1e;
    ::ll::UntypedStorage<4, 8>  mUnkfd1560;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadStacktraceFrame(SentryEnvelopePayloadStacktraceFrame const&);
    SentryEnvelopePayloadStacktraceFrame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadStacktraceFrame& operator=(::SentryEnvelopePayloadStacktraceFrame const&);

    MCNAPI ~SentryEnvelopePayloadStacktraceFrame();
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

// free functions
// NOLINTBEGIN
MCNAPI bool operator==(::SentryEnvelopePayloadStacktraceFrame const&, ::SentryEnvelopePayloadStacktraceFrame const&);
// NOLINTEND
