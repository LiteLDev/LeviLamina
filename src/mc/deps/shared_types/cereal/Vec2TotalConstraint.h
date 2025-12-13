#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class Vec2TotalConstraint : public ::cereal::ConstraintHandle<::SharedTypes::Vec2TotalConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka32334;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec2TotalConstraint& operator=(Vec2TotalConstraint const&);
    Vec2TotalConstraint(Vec2TotalConstraint const&);
    Vec2TotalConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    virtual ~Vec2TotalConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription $description() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
