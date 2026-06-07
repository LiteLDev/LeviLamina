#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/cereal/internal/StringConstraint.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class StringConstraint : public ::cereal::ConstraintHandle<::cereal::StringConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 80, ::cereal::internal::StringConstraint> mConstraint;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCFOLD ::cereal::StringConstraint& maxSize(uint64 size);

    MCFOLD uint64 maxSize() const;

    MCAPI ::cereal::StringConstraint& minSize(uint64 size);

    MCAPI ::cereal::StringConstraint& regex(::std::string str, ::std::regex_constants::syntax_option_type flag);

    MCAPI ::cereal::StringConstraint& rejectEmpty();

    MCAPI void validateValue(::std::string_view str, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string flagsToString(::std::regex_constants::syntax_option_type flags);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
