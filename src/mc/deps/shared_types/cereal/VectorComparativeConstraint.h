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

namespace SharedTypes {

class VectorComparativeConstraint : public ::cereal::ConstraintHandle<::SharedTypes::VectorComparativeConstraint> {
public:
    // VectorComparativeConstraint inner types define
    enum class ComparisonRequirement : int {
        NotEqual    = 0,
        LessThan    = 1,
        GreaterThan = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 8> mUnk35a16e;
    // NOLINTEND

public:
    // prevent constructor by default
    VectorComparativeConstraint& operator=(VectorComparativeConstraint const&);
    VectorComparativeConstraint(VectorComparativeConstraint const&);
    VectorComparativeConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    virtual ~VectorComparativeConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void validateValue(::Vec2 const& vec, ::cereal::SerializerContext& context) const;
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
