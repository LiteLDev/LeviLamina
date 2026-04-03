#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/StringConstraint.h"

namespace SharedTypes {

class HashedStringConstraint : public ::cereal::ConstraintHandle<::SharedTypes::HashedStringConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::cereal::StringConstraint> mConstraint;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~HashedStringConstraint() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
