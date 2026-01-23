#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110::BlockDefinition {

struct DestructibleByExplosionComponent {
public:
    // DestructibleByExplosionComponent inner types declare
    // clang-format off
    struct DetailedResistance;
    // clang-format on

    // DestructibleByExplosionComponent inner types define
    struct DetailedResistance {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<4, 4, float> mResistance;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        4,
        8,
        ::std::variant<
            bool,
            ::SharedTypes::v1_21_110::BlockDefinition::DestructibleByExplosionComponent::DetailedResistance>>
        mResistanceValue;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& ExplosionResistanceId();

    MCAPI static ::std::string_view const& NameId();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110::BlockDefinition
