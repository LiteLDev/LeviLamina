#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

struct SentryEnvelope {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk557017;
    ::ll::UntypedStorage<4, 4> mUnk73b89d;
    ::ll::UntypedStorage<8, 424> mUnkf0c92f;
    // NOLINTEND

public:
    // prevent constructor by default
    SentryEnvelope& operator=(SentryEnvelope const&);
    SentryEnvelope(SentryEnvelope const&);
    SentryEnvelope();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~SentryEnvelope();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindAllTypes(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

};
