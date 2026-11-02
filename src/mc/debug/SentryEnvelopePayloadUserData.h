#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnkdadd81;
    ::ll::UntypedStorage<8, 40> mUnk5865d3;
    ::ll::UntypedStorage<8, 40> mUnk64ef69;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadUserData(SentryEnvelopePayloadUserData const&);
    SentryEnvelopePayloadUserData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData const&);

    MCNAPI ~SentryEnvelopePayloadUserData();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
