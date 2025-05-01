#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadExceptionMechanism {
public:
    // SentryEnvelopePayloadExceptionMechanism inner types define
    enum class Type : int {
        Generic = 0,
        Promise = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7efe5d;
    ::ll::UntypedStorage<8, 40> mUnkbb8876;
    ::ll::UntypedStorage<1, 1>  mUnkee412c;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadExceptionMechanism& operator=(SentryEnvelopePayloadExceptionMechanism const&);
    SentryEnvelopePayloadExceptionMechanism(SentryEnvelopePayloadExceptionMechanism const&);
    SentryEnvelopePayloadExceptionMechanism();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism&&);
    // NOLINTEND
};
