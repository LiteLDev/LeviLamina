#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

namespace cereal {

class EnumConstraint : public ::cereal::ConstraintHandle<::cereal::EnumConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnkdc1a9b;
    // NOLINTEND

public:
    // prevent constructor by default
    EnumConstraint& operator=(EnumConstraint const&);
    EnumConstraint(EnumConstraint const&);
    EnumConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~EnumConstraint() /*override*/;
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

} // namespace cereal
