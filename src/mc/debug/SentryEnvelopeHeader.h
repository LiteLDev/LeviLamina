#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelopeHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk9b9bae;
    ::ll::UntypedStorage<8, 32> mUnkf894d1;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelopeHeader& operator=(SentryEnvelopeHeader const&);
    SentryEnvelopeHeader();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SentryEnvelopeHeader(::SentryEnvelopeHeader const&);

    MCNAPI ::SentryEnvelopeHeader& operator=(::SentryEnvelopeHeader&&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SentryEnvelopeHeader const&);
    // NOLINTEND
};
