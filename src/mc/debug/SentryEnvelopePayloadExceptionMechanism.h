#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadExceptionMechanism {
public:
    // SentryEnvelopePayloadExceptionMechanism inner types define
    enum class Type : int {
        Unknown                   = 0,
        UnhandledException        = 1,
        UnhandledPromiseRejection = 2,
        CapturedException         = 3,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk7efe5d;
    ::ll::UntypedStorage<8, 40> mUnkbb8876;
    ::ll::UntypedStorage<1, 1>  mUnkee412c;
    ::ll::UntypedStorage<8, 72> mUnk789526;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadExceptionMechanism();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadExceptionMechanism(::SentryEnvelopePayloadExceptionMechanism const&);

    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism const&);

    MCNAPI ::SentryEnvelopePayloadExceptionMechanism& operator=(::SentryEnvelopePayloadExceptionMechanism&&);

    MCNAPI ~SentryEnvelopePayloadExceptionMechanism();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadExceptionMechanism const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
