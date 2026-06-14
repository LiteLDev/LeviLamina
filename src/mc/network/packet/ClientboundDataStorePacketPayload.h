#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreChange.h"
#include "mc/scripting/data_sync/DataStoreRemoval.h"
#include "mc/scripting/data_sync/DataStoreUpdate.h"

struct ClientboundDataStorePacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<
            ::Bedrock::DDUI::DataStoreUpdate,
            ::Bedrock::DDUI::DataStoreChange,
            ::Bedrock::DDUI::DataStoreRemoval>>>
        mUpdates;
    // NOLINTEND

public:
    // prevent constructor by default
    ClientboundDataStorePacketPayload();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ClientboundDataStorePacketPayload(
        ::std::vector<::std::variant<
            ::Bedrock::DDUI::DataStoreUpdate,
            ::Bedrock::DDUI::DataStoreChange,
            ::Bedrock::DDUI::DataStoreRemoval>> updates
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::std::vector<::std::variant<
            ::Bedrock::DDUI::DataStoreUpdate,
            ::Bedrock::DDUI::DataStoreChange,
            ::Bedrock::DDUI::DataStoreRemoval>> updates
    );
    // NOLINTEND
};
