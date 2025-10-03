#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadUserData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 40> mUnk8a781c;
    ::ll::UntypedStorage<8, 40> mUnk914846;
    ::ll::UntypedStorage<8, 40> mUnk359ccd;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadUserData(SentryEnvelopePayloadUserData const&);
    SentryEnvelopePayloadUserData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadUserData(::SentryEnvelopePayloadUserData&&);

    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData&&);

    MCNAPI ::SentryEnvelopePayloadUserData& operator=(::SentryEnvelopePayloadUserData const&);

    MCNAPI ~SentryEnvelopePayloadUserData();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadUserData&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
