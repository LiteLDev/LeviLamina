#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadStacktrace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkb3d80a;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadStacktrace& operator=(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadStacktrace& operator=(::SentryEnvelopePayloadStacktrace&&);

    MCNAPI ~SentryEnvelopePayloadStacktrace();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
