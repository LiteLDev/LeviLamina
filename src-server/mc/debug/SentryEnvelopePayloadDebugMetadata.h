#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadDebugMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk70b3c8;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadDebugMetadata& operator=(SentryEnvelopePayloadDebugMetadata const&);
    SentryEnvelopePayloadDebugMetadata(SentryEnvelopePayloadDebugMetadata const&);
    SentryEnvelopePayloadDebugMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadDebugMetadata& operator=(::SentryEnvelopePayloadDebugMetadata&&);

    MCNAPI ~SentryEnvelopePayloadDebugMetadata();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
