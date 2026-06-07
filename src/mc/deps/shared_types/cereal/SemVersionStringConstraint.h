#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/shared_types/cereal/SemVersionConstraint.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class SemVersionStringConstraint : public ::cereal::ConstraintHandle<::SharedTypes::SemVersionStringConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 88, ::SharedTypes::SemVersionConstraint> mConstraint;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCAPI ::SharedTypes::SemVersionStringConstraint& range(::SemVersion const& min, ::SemVersion const& max);

    MCAPI void validateValue(::std::string const& str, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
