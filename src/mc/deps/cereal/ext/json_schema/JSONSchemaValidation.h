#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cereal::ext::internal {

struct JSONSchemaValidation {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk2f00b3;
    ::ll::UntypedStorage<8, 16> mUnk90828f;
    ::ll::UntypedStorage<8, 16> mUnkb286af;
    ::ll::UntypedStorage<8, 16> mUnkec7e3b;
    ::ll::UntypedStorage<8, 16> mUnk47f1f0;
    ::ll::UntypedStorage<8, 16> mUnk457dd9;
    ::ll::UntypedStorage<8, 16> mUnkae9293;
    ::ll::UntypedStorage<8, 40> mUnk53c233;
    ::ll::UntypedStorage<8, 16> mUnk59d779;
    ::ll::UntypedStorage<8, 16> mUnk6160b9;
    ::ll::UntypedStorage<8, 16> mUnkf06836;
    ::ll::UntypedStorage<8, 16> mUnk26a133;
    // NOLINTEND

public:
    // prevent constructor by default
    JSONSchemaValidation();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI JSONSchemaValidation(::cereal::ext::internal::JSONSchemaValidation const&);

    MCNAPI ::cereal::ext::internal::JSONSchemaValidation&
    operator=(::cereal::ext::internal::JSONSchemaValidation const&);

    MCNAPI ::cereal::ext::internal::JSONSchemaValidation& operator=(::cereal::ext::internal::JSONSchemaValidation&&);

    MCNAPI ~JSONSchemaValidation();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::cereal::ext::internal::JSONSchemaValidation const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal::ext::internal
