#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace EAS { struct AttributeLayerData; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayersData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::EAS::AttributeLayerData>> mAttributeLayers;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
