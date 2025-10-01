#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SentryEnvelopePayloadBreadcrumb {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8>  mUnkb35040;
    ::ll::UntypedStorage<8, 40> mUnkfa0007;
    ::ll::UntypedStorage<8, 40> mUnkef16dd;
    ::ll::UntypedStorage<8, 16> mUnke46afa;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopePayloadBreadcrumb(SentryEnvelopePayloadBreadcrumb const&);
    SentryEnvelopePayloadBreadcrumb();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::SentryEnvelopePayloadBreadcrumb& operator=(::SentryEnvelopePayloadBreadcrumb&&);

    MCNAPI ::SentryEnvelopePayloadBreadcrumb& operator=(::SentryEnvelopePayloadBreadcrumb const&);

    MCNAPI ~SentryEnvelopePayloadBreadcrumb();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
