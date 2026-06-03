#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class ComponentStorage; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class ComponentStorageConstraint : public ::cereal::ConstraintHandle<::cereal::ComponentStorageConstraint> {
public:
    // ComponentStorageConstraint inner types define
    enum class ConstraintKeysMode : uchar {
        None   = 0,
        Reject = 1,
        Accept = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 64, ::std::unordered_set<::std::string>>                     mKeys;
    ::ll::TypedStorage<1, 1, ::cereal::ComponentStorageConstraint::ConstraintKeysMode> mKeysMode;
    // NOLINTEND

public:
    // prevent constructor by default
    ComponentStorageConstraint& operator=(ComponentStorageConstraint const&);
    ComponentStorageConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ComponentStorageConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ComponentStorageConstraint(::cereal::ComponentStorageConstraint const&);

    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCAPI ::cereal::ComponentStorageConstraint& rejectKeys(::std::initializer_list<::std::string> keys);

    MCAPI void validateValue(::cereal::ComponentStorage const& storage, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::ComponentStorageConstraint const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
