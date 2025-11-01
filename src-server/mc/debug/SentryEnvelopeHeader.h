#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopeHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk723299;
    ::ll::UntypedStorage<8, 32> mUnk8f0f04;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopeHeader& operator=(SentryEnvelopeHeader const&);
    SentryEnvelopeHeader(SentryEnvelopeHeader const&);
    SentryEnvelopeHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopeHeader();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
