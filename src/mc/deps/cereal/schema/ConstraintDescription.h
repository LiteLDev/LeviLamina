#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::internal {

struct ConstraintDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnkb4a1b3;
    ::ll::UntypedStorage<8, 16> mUnk6fec24;
    ::ll::UntypedStorage<8, 16> mUnk27075d;
    ::ll::UntypedStorage<8, 16> mUnk82b6f1;
    ::ll::UntypedStorage<8, 16> mUnk33314f;
    ::ll::UntypedStorage<8, 16> mUnk38eb24;
    ::ll::UntypedStorage<8, 16> mUnk25067a;
    ::ll::UntypedStorage<8, 40> mUnk250a1f;
    ::ll::UntypedStorage<8, 40> mUnkf0c4a1;
    ::ll::UntypedStorage<8, 16> mUnk789004;
    ::ll::UntypedStorage<8, 16> mUnkbafc0e;
    ::ll::UntypedStorage<1, 2>  mUnk8435d8;
    ::ll::UntypedStorage<8, 16> mUnkebc71f;
    ::ll::UntypedStorage<8, 16> mUnk8a0316;
    ::ll::UntypedStorage<8, 16> mUnk46888a;
    ::ll::UntypedStorage<8, 16> mUnkf8743f;
    ::ll::UntypedStorage<8, 16> mUnkb3cf53;
    ::ll::UntypedStorage<8, 32> mUnk775e44;
    ::ll::UntypedStorage<8, 24> mUnk7b0f14;
    ::ll::UntypedStorage<8, 40> mUnkf26112;
    // NOLINTEND

public:
    // prevent constructor by default
    ConstraintDescription();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ConstraintDescription(::cereal::internal::ConstraintDescription&&);

    MCNAPI ConstraintDescription(::cereal::internal::ConstraintDescription const&);

    MCNAPI void merge(::cereal::internal::ConstraintDescription const& other);

    MCNAPI explicit operator bool() const;

    MCNAPI ::cereal::internal::ConstraintDescription& operator=(::cereal::internal::ConstraintDescription&&);

    MCNAPI ::cereal::internal::ConstraintDescription& operator=(::cereal::internal::ConstraintDescription const&);

    MCNAPI ~ConstraintDescription();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::internal::ConstraintDescription&&);

    MCNAPI void* $ctor(::cereal::internal::ConstraintDescription const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::internal
