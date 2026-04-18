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
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, ::std::set<::std::string>>> mUpdateableFromClient;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreSyncServer() /*override*/ = default;

    virtual void clear(::std::string const& dataStoreName, bool addToOutgoingChanges) /*override*/;

    virtual void assertAppropriateThread() const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void applyUpdate(::Bedrock::DDUI::DataStoreUpdate const& change);

    MCAPI bool canClientUpdateProperty(
        ::std::string const& dataStoreName,
        ::std::string const& propertyName,
        ::std::string const& path
    );

    MCAPI void clearAll(bool addToOutgoingChanges);

    MCAPI void setPropertyUpdateAllowed(
        ::std::string const& dataStoreName,
        ::std::string const& propertyName,
        ::std::string const& path,
        bool                 value
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $clear(::std::string const& dataStoreName, bool addToOutgoingChanges);

    MCFOLD void $assertAppropriateThread() const;


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Bedrock::DDUI
