#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
// clang-format on

struct DataStoreSyncPacketPayload {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        24,
        ::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>>>
        mUpdate;
    // NOLINTEND
};
