#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/network/packet/attribute_layer_sync_packet_data/RemoveEnvironmentAttributesData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateAttributeLayerSettingsData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateAttributeLayersData.h"
#include "mc/network/packet/attribute_layer_sync_packet_data/UpdateEnvironmentAttributesData.h"

struct ClientboundAttributeLayerSyncPacketPayload {
public:
    // ClientboundAttributeLayerSyncPacketPayload inner types define
    using AttributeLayerSyncData = ::std::variant<
        ::AttributeLayerSyncPacketData::UpdateAttributeLayersData,
        ::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData,
        ::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData,
        ::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        104,
        ::std::variant<
            ::AttributeLayerSyncPacketData::UpdateAttributeLayersData,
            ::AttributeLayerSyncPacketData::UpdateAttributeLayerSettingsData,
            ::AttributeLayerSyncPacketData::UpdateEnvironmentAttributesData,
            ::AttributeLayerSyncPacketData::RemoveEnvironmentAttributesData>>
        mData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ~ClientboundAttributeLayerSyncPacketPayload();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND
};
