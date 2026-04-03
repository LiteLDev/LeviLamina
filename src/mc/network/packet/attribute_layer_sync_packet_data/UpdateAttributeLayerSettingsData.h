#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/world/eas/AttributeLayerSettings.h"

// auto generated forward declare list
// clang-format off
class Dimension;
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace AttributeLayerSyncPacketData {

struct UpdateAttributeLayerSettingsData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                 mLayerName;
    ::ll::TypedStorage<4, 4, ::DimensionType>                mLayerDimensionId;
    ::ll::TypedStorage<8, 56, ::EAS::AttributeLayerSettings> mAttributeLayerSettings;
    // NOLINTEND

public:
    // prevent constructor by default
    UpdateAttributeLayerSettingsData(UpdateAttributeLayerSettingsData const&);
    UpdateAttributeLayerSettingsData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData&
    operator=(::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData&&);

    MCAPI ::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData&
    operator=(::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData const&);

    MCAPI ~UpdateAttributeLayerSettingsData();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bind(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace AttributeLayerSyncPacketData
