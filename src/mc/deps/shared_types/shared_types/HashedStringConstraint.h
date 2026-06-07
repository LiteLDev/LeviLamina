#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/StringConstraint.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes {

class HashedStringConstraint : public ::cereal::ConstraintHandle<::SharedTypes::HashedStringConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 104, ::cereal::StringConstraint> mConstraint;
    // NOLINTEND

public:
    // prevent constructor by default
    HashedStringConstraint();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit HashedStringConstraint(::cereal::StringConstraint constraint);

    MCFOLD ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCAPI void validateValue(::HashedString const& value, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::StringConstraint constraint);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
