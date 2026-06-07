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
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCAPI ::SharedTypes::NamespaceConstraint& disallowMinecraft();

    MCAPI ::SharedTypes::NamespaceConstraint& disallowNamespace(::std::string const& disallowedNamespace);

    MCAPI ::std::string getRegexString(::std::optional<::std::string> disallowedNamespace) const;

    MCAPI void validateValue(::std::string_view value, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes
