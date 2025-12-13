#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

class ServerboundLoadingScreenPacketTypeConstraint
: public ::cereal::ConstraintHandle<::ServerboundLoadingScreenPacketTypeConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    virtual ~ServerboundLoadingScreenPacketTypeConstraint() /*override*/ = default;
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
