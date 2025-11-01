#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

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
    ::ll::UntypedStorage<8, 40> mUnk922a3d;
    // NOLINTEND

public:
    // prevent constructor by default
    NamespaceConstraint& operator=(NamespaceConstraint const&);
    NamespaceConstraint(NamespaceConstraint const&);
    NamespaceConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 3
    virtual ::cereal::internal::ConstraintDescription description() const /*override*/;

    // vIndex: 1
    virtual ~NamespaceConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string getRegexString(::std::optional<::std::string> disallowedNamespace) const;

    MCNAPI void validateValue(::std::string const& value, ::cereal::SerializerContext& context) const;
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

}
