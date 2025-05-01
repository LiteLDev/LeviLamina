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
    SentryEnvelopePayloadBreadcrumb& operator=(SentryEnvelopePayloadBreadcrumb const&);
    SentryEnvelopePayloadBreadcrumb(SentryEnvelopePayloadBreadcrumb const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopePayloadBreadcrumb();

    MCNAPI ::SentryEnvelopePayloadBreadcrumb& operator=(::SentryEnvelopePayloadBreadcrumb&&);

    MCNAPI ~SentryEnvelopePayloadBreadcrumb();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
