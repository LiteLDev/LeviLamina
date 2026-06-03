#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

namespace cereal {

class EnumConstraint : public ::cereal::ConstraintHandle<::cereal::EnumConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<int64>> mValues;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnumConstraint() /*override*/;
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

} // namespace cereal
