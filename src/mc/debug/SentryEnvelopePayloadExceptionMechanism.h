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
    ::ll::UntypedStorage<8, 40> mUnk9a1198;
    ::ll::UntypedStorage<1, 1>  mUnkee412c;
    ::ll::UntypedStorage<8, 72> mUnk70ce1e;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadExceptionMechanism& operator=(SentryEnvelopePayloadExceptionMechanism const&);
    SentryEnvelopePayloadExceptionMechanism(SentryEnvelopePayloadExceptionMechanism const&);
    SentryEnvelopePayloadExceptionMechanism();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadExceptionMechanism();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
