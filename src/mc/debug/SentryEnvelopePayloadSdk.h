#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadSdk {
public:
    // SentryEnvelopePayloadSdk inner types define
    enum class Type : int {
        JavaScript = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1d12a3;
    ::ll::UntypedStorage<8, 32> mUnkaa5ce6;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadSdk& operator=(SentryEnvelopePayloadSdk const&);
    SentryEnvelopePayloadSdk(SentryEnvelopePayloadSdk const&);
    SentryEnvelopePayloadSdk();
};
