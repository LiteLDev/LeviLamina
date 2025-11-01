#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadStacktraceFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkfa12e5;
    ::ll::UntypedStorage<8, 40> mUnk488cb1;
    ::ll::UntypedStorage<4, 8> mUnkfd1560;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadStacktraceFrame(SentryEnvelopePayloadStacktraceFrame const&);
    SentryEnvelopePayloadStacktraceFrame();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadStacktraceFrame& operator=(::SentryEnvelopePayloadStacktraceFrame&&);

    MCNAPI ::SentryEnvelopePayloadStacktraceFrame& operator=(::SentryEnvelopePayloadStacktraceFrame const&);

    MCNAPI ~SentryEnvelopePayloadStacktraceFrame();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
