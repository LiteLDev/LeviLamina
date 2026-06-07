#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
namespace Bedrock::DDUI { struct DataStoreUpdate; }
// clang-format on

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
