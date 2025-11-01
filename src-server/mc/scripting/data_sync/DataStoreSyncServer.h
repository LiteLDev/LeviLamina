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

class DataStoreSyncServer : public ::Bedrock::DDUI::DataStoreSync {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk501a09;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreSyncServer& operator=(DataStoreSyncServer const&);
    DataStoreSyncServer(DataStoreSyncServer const&);
    DataStoreSyncServer();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataStoreSyncServer() /*override*/ = default;

    // vIndex: 1
    virtual void clear(::std::string const& datastoreName, bool addToOutgoingChanges) /*override*/;

    // vIndex: 2
    virtual void applyChanges(::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>> const& changes) /*override*/;

    // vIndex: 3
    virtual void assertAppropriateThread() const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear(::std::string const& datastoreName, bool addToOutgoingChanges);

    MCNAPI void $applyChanges(::std::vector<::std::variant<::Bedrock::DDUI::DataStoreChange, ::Bedrock::DDUI::DataStoreRemoval>> const& changes);

    MCNAPI void $assertAppropriateThread() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND

};

}
