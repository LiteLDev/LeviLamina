#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/data_sync/DataStoreSync.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { struct DataStoreUpdate; }
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

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSyncServer() /*override*/ = default;

    virtual void clear(::std::string const& datastoreName, bool addToOutgoingChanges) /*override*/;

    virtual void assertAppropriateThread() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_S DataStoreSyncServer();

    MCNAPI void applyUpdate(::Bedrock::DDUI::DataStoreUpdate const& change);

    MCNAPI bool canClientUpdateProperty(
        ::std::string const& dataStoreName,
        ::std::string const& propertyName,
        ::std::string const& path
    );

    MCNAPI void setPropertyUpdateAllowed(
        ::std::string const& dataStoreName,
        ::std::string const& propertyName,
        ::std::string const& path,
        bool                 value
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_S void* $ctor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $clear(::std::string const& datastoreName, bool addToOutgoingChanges);

    MCNAPI void $assertAppropriateThread() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
