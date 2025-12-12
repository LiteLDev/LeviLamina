#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
class Vec2;
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

class Vec2Constraint : public ::cereal::ConstraintHandle<::Vec2Constraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk33ccfc;
    ::ll::UntypedStorage<8, 32> mUnk6c2e7b;
    // NOLINTEND

public:
    // prevent constructor by default
    Vec2Constraint& operator=(Vec2Constraint const&);
    Vec2Constraint(Vec2Constraint const&);
    Vec2Constraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    virtual ~Vec2Constraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void validateValue(::Vec2 const& comp, ::cereal::SerializerContext& context) const;
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
