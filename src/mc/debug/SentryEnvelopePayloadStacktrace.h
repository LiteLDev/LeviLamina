#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadStacktrace {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkbb47a3;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadStacktrace& operator=(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace(SentryEnvelopePayloadStacktrace const&);
    SentryEnvelopePayloadStacktrace();
};
