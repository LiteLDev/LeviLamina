#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

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
    ::ll::UntypedStorage<8, 80> mUnke1d8a5;
    // NOLINTEND

public:
    // prevent constructor by default
    StringConstraint& operator=(StringConstraint const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~StringConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI StringConstraint();

    MCNAPI StringConstraint(::cereal::StringConstraint&&);

    MCNAPI StringConstraint(::cereal::StringConstraint const&);

    MCNAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCNAPI ::cereal::StringConstraint& regex(::std::string str, ::std::regex_constants::syntax_option_type flag);

    MCNAPI void validateValue(::std::string const& str, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string flagsToString(::std::regex_constants::syntax_option_type flags);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::cereal::StringConstraint&&);

    MCNAPI void* $ctor(::cereal::StringConstraint const&);
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
