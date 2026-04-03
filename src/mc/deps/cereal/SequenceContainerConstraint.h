#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class Constraint; }
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace cereal {

class SequenceContainerConstraint : public ::cereal::ConstraintHandle<::cereal::SequenceContainerConstraint> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk37e863;
    ::ll::UntypedStorage<8, 16> mUnkdb155c;
    ::ll::UntypedStorage<1, 1>  mUnk611bb9;
    // NOLINTEND

public:
    // prevent constructor by default
    SequenceContainerConstraint& operator=(SequenceContainerConstraint const&);
    SequenceContainerConstraint(SequenceContainerConstraint const&);
    SequenceContainerConstraint();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::cereal::Constraint const* subConstraint(uint64 index) const /*override*/;

    virtual ~SequenceContainerConstraint() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea req) const;

    MCNAPI void validateValue(::entt::meta_sequence_container cont, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::cereal::Constraint const* $subConstraint(uint64 index) const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cereal
