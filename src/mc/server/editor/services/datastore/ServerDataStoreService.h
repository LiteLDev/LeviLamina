#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/services/datastore/DataStoreService.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Editor { class ServiceProviderCollection; }
namespace Editor::DataStore { struct PayloadDescription; }
namespace Json { class Value; }
// clang-format on

namespace Editor::Services {

class ServerDataStoreService : public ::Editor::Services::DataStoreService {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerDataStoreService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result<void> init() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result<void> _handleEvents(
        ::HashedString const& dataTag,
        ::Editor::DataStore::EventType,
        ::Json::Value const&,
        ::Editor::DataStore::PayloadDescription const&,
        bool
    ) /*override*/;

    // vIndex: 8
    virtual ::Json::Value
    _getPayload(::HashedString const& dataTag, ::Editor::DataStore::PayloadDescription const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ServerDataStoreService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::Scripting::Result<void> $init();

    MCAPI ::std::string_view $getServiceName() const;

    MCAPI ::Scripting::Result<void> $_handleEvents(
        ::HashedString const& dataTag,
        ::Editor::DataStore::EventType,
        ::Json::Value const&,
        ::Editor::DataStore::PayloadDescription const&,
        bool
    );

    MCFOLD ::Json::Value
    $_getPayload(::HashedString const& dataTag, ::Editor::DataStore::PayloadDescription const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftableForDataStoreServiceProvider();

    MCAPI static void** $vftableForIEditorService();
    // NOLINTEND
};

} // namespace Editor::Services
