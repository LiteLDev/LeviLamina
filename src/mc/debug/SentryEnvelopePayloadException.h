#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadException {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnke3aa52;
    ::ll::UntypedStorage<8, 32>  mUnkb3204a;
    ::ll::UntypedStorage<8, 136> mUnk5ff361;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadException(SentryEnvelopePayloadException const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadException();

    MCNAPI SentryEnvelopePayloadException(::SentryEnvelopePayloadException&&);

    MCNAPI ::SentryEnvelopePayloadException& operator=(::SentryEnvelopePayloadException&&);

    MCNAPI ::SentryEnvelopePayloadException& operator=(::SentryEnvelopePayloadException const&);

    MCNAPI ~SentryEnvelopePayloadException();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::SentryEnvelopePayloadException&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
