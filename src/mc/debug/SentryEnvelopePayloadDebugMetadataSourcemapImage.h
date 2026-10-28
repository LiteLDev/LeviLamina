#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadDebugMetadataSourcemapImage {
public:
    // SentryEnvelopePayloadDebugMetadataSourcemapImage inner types define
    enum class Type : int {
        SourceMap = 0,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk1f5b2e;
    ::ll::UntypedStorage<8, 32> mUnk4ec647;
    ::ll::UntypedStorage<8, 32> mUnk388e0e;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadDebugMetadataSourcemapImage&
    operator=(SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
    SentryEnvelopePayloadDebugMetadataSourcemapImage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadDebugMetadataSourcemapImage(::SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
    // NOLINTEND
};
