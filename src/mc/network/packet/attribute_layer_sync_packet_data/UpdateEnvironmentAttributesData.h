#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
namespace EAS { struct EnvironmentAttributeData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct UpdateEnvironmentAttributesData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                  mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                 mLayerDimensionId;
    ::ll::TypedStorage<8, 24, ::std::vector<::EAS::EnvironmentAttributeData>> mAttributes;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData const& rhs) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
