#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Actor;
class AttributeInstanceConstRef;
class IRandom;
class Mob;
class Player;
struct ActorDefinitionIdentifier;
struct MutableAttributeWithContext;
struct OffspringDefinition;
// clang-format on

namespace OffspringUtility {
// functions
// NOLINTBEGIN
MCNAPI ::Mob* createOffspring(
    ::Actor&                           owner,
    ::Actor&                           partner,
    ::OffspringDefinition const&       offspringData,
    ::ActorDefinitionIdentifier const& babyType,
    ::gsl::span<::Player const* const> players
);

MCNAPI void setOffspringAttributes(
    ::MutableAttributeWithContext& offspring,
    ::AttributeInstanceConstRef    owner,
    ::AttributeInstanceConstRef    partner
);

MCNAPI void setOffspringAttributesWithParentCentricBlending(
    ::MutableAttributeWithContext& offspring,
    ::AttributeInstanceConstRef    owner,
    ::AttributeInstanceConstRef    partner,
    ::IRandom&                     random,
    float                          attributeRangeMin,
    float                          attributeRangeMax
);
// NOLINTEND

} // namespace OffspringUtility
