#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

class NpcDialogueActionJsonConstraint : public ::cereal::ConstraintHandle<::NpcDialogueActionJsonConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~NpcDialogueActionJsonConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(::std::string const& actionJSON, ::cereal::SerializerContext& context) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
