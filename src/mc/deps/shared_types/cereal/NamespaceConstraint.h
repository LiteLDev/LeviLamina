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

namespace SharedTypes {

class NamespaceConstraint : public ::cereal::ConstraintHandle<::SharedTypes::NamespaceConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 40, ::std::optional<::std::string>> mDisallowedNamespace;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NamespaceConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCAPI ::SharedTypes::NamespaceConstraint& disallowMinecraft();

    MCAPI ::std::string getRegexString(::std::optional<::std::string> disallowedNamespace) const;

    MCAPI void validateValue(::std::string const& value, ::cereal::SerializerContext& context) const;
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

} // namespace SharedTypes
