#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class SemVersionConstraint : public ::cereal::ConstraintHandle<::SharedTypes::SemVersionConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk1e1562;
    ::ll::UntypedStorage<8, 32> mUnkeae1a6;
    // NOLINTEND

public:
    // prevent constructor by default
    SemVersionConstraint& operator=(SemVersionConstraint const&);
    SemVersionConstraint(SemVersionConstraint const&);
    SemVersionConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    virtual ~SemVersionConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SemVersionConstraint(::SharedTypes::SemVersionConstraint&&);

    MCNAPI void validateValue(::SemVersion const& vers, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::SharedTypes::SemVersionConstraint&&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
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
