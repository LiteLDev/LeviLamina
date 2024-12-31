#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/editor/datastore/EventType.h"
#include "mc/external/scripting/runtime/Result.h"

// auto generated forward declare list
// clang-format off
class HashedString;
namespace Bedrock::PubSub { class Subscription; }
namespace Editor::DataStore { struct PayloadDescription; }
namespace Json { class Value; }
// clang-format on

namespace Editor::Services {

class DataStoreServiceProvider {
public:
    // prevent constructor by default
    DataStoreServiceProvider& operator=(DataStoreServiceProvider const&);
    DataStoreServiceProvider(DataStoreServiceProvider const&);
    DataStoreServiceProvider();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DataStoreServiceProvider() = default;

    // vIndex: 1
    virtual ::Scripting::Result<void>
    dispatchEvent(::HashedString const&, ::Editor::DataStore::EventType, ::Json::Value const&, ::Editor::DataStore::PayloadDescription const&) = 0;

    // vIndex: 2
    virtual ::Json::Value getPayload(::HashedString const&, ::Editor::DataStore::PayloadDescription const&) const = 0;

    // vIndex: 3
    virtual ::Bedrock::PubSub::Subscription
        listenForEvent(::std::function<
                       void(::HashedString const&, ::Editor::DataStore::EventType, ::Json::Value const&, ::Editor::DataStore::PayloadDescription const&)>) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
