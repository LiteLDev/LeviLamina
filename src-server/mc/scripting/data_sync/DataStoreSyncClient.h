#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreSync.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreChange; }
namespace Bedrock::DDUI { struct DataStoreRemoval; }
// clang-format on

namespace Bedrock::DDUI {

class DataStoreSyncClient : public ::Bedrock::DDUI::DataStoreSync {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 2
    virtual void applyChanges(::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>> const&) /*override*/;

    // vIndex: 3
    virtual void assertAppropriateThread() const /*override*/;

    // vIndex: 0
    virtual ~DataStoreSyncClient() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

};

}
