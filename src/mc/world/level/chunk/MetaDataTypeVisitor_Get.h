#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct MetaDataTypeVisitor_Get {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk48f76a;
    ::ll::UntypedStorage<8, 32> mUnk3d34cb;
    // NOLINTEND

public:
    // prevent constructor by default
    MetaDataTypeVisitor_Get& operator=(MetaDataTypeVisitor_Get const&);
    MetaDataTypeVisitor_Get(MetaDataTypeVisitor_Get const&);
    MetaDataTypeVisitor_Get();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~MetaDataTypeVisitor_Get();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
