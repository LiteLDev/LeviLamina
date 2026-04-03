#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
    SentryEnvelopePayloadStacktraceFrame& operator=(SentryEnvelopePayloadStacktraceFrame const&);
    SentryEnvelopePayloadStacktraceFrame(SentryEnvelopePayloadStacktraceFrame const&);
    SentryEnvelopePayloadStacktraceFrame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadStacktraceFrame& operator=(::SentryEnvelopePayloadStacktraceFrame&&);

    MCNAPI ~SentryEnvelopePayloadStacktraceFrame();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

// free functions
// NOLINTBEGIN
MCNAPI bool
operator==(::SentryEnvelopePayloadStacktraceFrame const& __P0, ::SentryEnvelopePayloadStacktraceFrame const& __P1);
// NOLINTEND
