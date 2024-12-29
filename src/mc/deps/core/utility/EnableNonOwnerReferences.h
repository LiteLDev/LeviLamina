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
        bool mIsValid;
        // NOLINTEND

    public:
        // prevent constructor by default
        ControlBlock& operator=(ControlBlock const&);
        ControlBlock(ControlBlock const&);
        ControlBlock();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::std::shared_ptr<::Bedrock::EnableNonOwnerReferences::ControlBlock> mControlBlock;
    // NOLINTEND

public:
    // prevent constructor by default
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&);
    EnableNonOwnerReferences(EnableNonOwnerReferences const&);

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EnableNonOwnerReferences();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI EnableNonOwnerReferences();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock
