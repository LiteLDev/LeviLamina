#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class EnableNonOwnerReferences {
public:
    // EnableNonOwnerReferences inner types declare
    // clang-format off
    struct ControlBlock;
    // clang-format on

    // EnableNonOwnerReferences inner types define
    struct ControlBlock {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, bool> mIsValid;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Bedrock::EnableNonOwnerReferences::ControlBlock>> mControlBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableNonOwnerReferences();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI EnableNonOwnerReferences();

    MCNAPI EnableNonOwnerReferences(::Bedrock::EnableNonOwnerReferences const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::Bedrock::EnableNonOwnerReferences const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
