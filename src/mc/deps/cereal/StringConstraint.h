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
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);
    StringConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI StringConstraint(::cereal::StringConstraint&&);

    MCAPI StringConstraint(::cereal::StringConstraint const&);

    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCAPI ::cereal::StringConstraint& regex(::std::string str, ::std::regex_constants::syntax_option_type flag);

    MCAPI void validateValue(::std::string_view str, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string flagsToString(::std::regex_constants::syntax_option_type flags);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::StringConstraint&&);

    MCAPI void* $ctor(::cereal::StringConstraint const&);
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
