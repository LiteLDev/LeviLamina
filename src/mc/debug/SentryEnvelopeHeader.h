#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopeHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9b9bae;
    ::ll::UntypedStorage<8, 32> mUnkf894d1;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopeHeader& operator=(SentryEnvelopeHeader const&);
    SentryEnvelopeHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopeHeader(::SentryEnvelopeHeader const&);

    MCNAPI ::SentryEnvelopeHeader& operator=(::SentryEnvelopeHeader&&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopeHeader const&);
    // NOLINTEND
};
