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
    ::ll::UntypedStorage<8, 32> mUnk9aef80;
    ::ll::UntypedStorage<8, 32> mUnk581b7e;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadDebugMetadataSourcemapImage(SentryEnvelopePayloadDebugMetadataSourcemapImage const&);
    SentryEnvelopePayloadDebugMetadataSourcemapImage();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadDebugMetadataSourcemapImage&
    operator=(::SentryEnvelopePayloadDebugMetadataSourcemapImage const&);

    MCNAPI ::SentryEnvelopePayloadDebugMetadataSourcemapImage&
    operator=(::SentryEnvelopePayloadDebugMetadataSourcemapImage&&);

    MCNAPI ~SentryEnvelopePayloadDebugMetadataSourcemapImage();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
