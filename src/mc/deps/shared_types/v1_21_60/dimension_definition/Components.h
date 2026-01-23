#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Bounds.h"
#include "mc/deps/shared_types/v1_21_60/dimension_definition/Generation.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_60::DimensionDefinition {

struct Components {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, ::SharedTypes::v1_21_60::DimensionDefinition::Bounds>      mDimensionBoundsComponent;
    ::ll::TypedStorage<8, 32, ::SharedTypes::v1_21_60::DimensionDefinition::Generation> mGeneration;
    // NOLINTEND

public:
    // prevent constructor by default
    Components(Components const&);
    Components();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::SharedTypes::v1_21_60::DimensionDefinition::Components&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Components&&);

    MCAPI ::SharedTypes::v1_21_60::DimensionDefinition::Components&
    operator=(::SharedTypes::v1_21_60::DimensionDefinition::Components const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_60::DimensionDefinition
