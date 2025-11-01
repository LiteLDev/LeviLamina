#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/services/datastore/DataStoreService.h"

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
    // prevent constructor by default
    ServerDataStoreService();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerDataStoreService() /*override*/ = default;

    // vIndex: 1
    virtual ::Scripting::Result_deprecated<void> init() /*override*/;

    // vIndex: 4
    virtual ::std::string_view getServiceName() const /*override*/;

    // vIndex: 7
    virtual ::Scripting::Result_deprecated<void> _handleEvents(::HashedString const& dataTag, ::Editor::DataStore::EventType, ::Json::Value const&, ::Editor::DataStore::PayloadDescription const&, bool) /*override*/;

    // vIndex: 8
    virtual ::Json::Value _getPayload(::HashedString const& dataTag, ::Editor::DataStore::PayloadDescription const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit ServerDataStoreService(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Editor::ServiceProviderCollection& providers);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Scripting::Result_deprecated<void> $init();

    MCNAPI ::std::string_view $getServiceName() const;

    MCNAPI ::Scripting::Result_deprecated<void> $_handleEvents(::HashedString const& dataTag, ::Editor::DataStore::EventType, ::Json::Value const&, ::Editor::DataStore::PayloadDescription const&, bool);

    MCNAPI ::Json::Value $_getPayload(::HashedString const& dataTag, ::Editor::DataStore::PayloadDescription const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForDataStoreServiceProvider();

    MCNAPI static void** $vftableForIEditorService();
    // NOLINTEND

};

}
