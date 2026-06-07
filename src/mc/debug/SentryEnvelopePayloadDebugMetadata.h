#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopePayloadDebugMetadata {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk708b74;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadDebugMetadata& operator=(SentryEnvelopePayloadDebugMetadata const&);
    SentryEnvelopePayloadDebugMetadata(SentryEnvelopePayloadDebugMetadata const&);
    SentryEnvelopePayloadDebugMetadata();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelopePayloadDebugMetadata();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
