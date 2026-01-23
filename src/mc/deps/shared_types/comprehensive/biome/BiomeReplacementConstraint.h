#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/ConstraintHandle.h"
#include "mc/deps/shared_types/v1_21_80/biome/ReplaceBiomesBiomeJsonComponent.h"

// auto generated forward declare list
// clang-format off
namespace cereal { class SerializerContext; }
// clang-format on

namespace SharedTypes::Comprehensive {

class BiomeReplacementConstraint
: public ::cereal::ConstraintHandle<::SharedTypes::Comprehensive::BiomeReplacementConstraint> {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~BiomeReplacementConstraint() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void validateValue(
        ::std::vector<::SharedTypes::v1_21_80::ReplaceBiomesBiomeJsonComponent::BiomeReplacement> const&
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

} // namespace SharedTypes::Comprehensive
