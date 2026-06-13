#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/eas/AttributeLayerSettings.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayerSettingsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                mLayerDimensionId;
    ::ll::TypedStorage<4, 12, ::EAS::AttributeLayerSettings> mAttributeLayerSettings;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
