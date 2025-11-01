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
    
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::std::shared_ptr<::Bedrock::EnableNonOwnerReferences::ControlBlock> mControlBlock;
    // NOLINTEND

public:
    EnableNonOwnerReferences& operator=(EnableNonOwnerReferences const&) = default;

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

    MCAPI EnableNonOwnerReferences(::Bedrock::EnableNonOwnerReferences const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCFOLD void* $ctor();

    MCFOLD void* $ctor(::Bedrock::EnableNonOwnerReferences const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
