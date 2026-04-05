#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/cereal/ContextArea.h"
#include "mc/deps/shared_types/v1_26_0/biome/ReplaceBiomesBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
namespace cereal::internal { struct ConstraintDescription; }
// clang-format on

namespace SharedTypes::v1_26_0 {

class BiomeReplacementConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::v1_26_0::BiomeReplacementConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeReplacementConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::cereal::internal::ConstraintDescription description(::cereal::ContextArea) const;

    MCAPI void validateValue(
        ::std::vector<::SharedTypes::v1_26_0::ReplaceBiomesBiomeJsonComponent::BiomeReplacement> const&
                                     biomeReplacements,
        ::cereal::SerializerContext& context
    ) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
