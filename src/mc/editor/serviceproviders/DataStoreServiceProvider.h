#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/editor/datastore/EventType.h"

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
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreServiceProvider() = default;

    virtual ::Scripting::Result_deprecated<void> dispatchEvent(
        ::HashedString const&,
        ::Editor::DataStore::EventType,
        ::Json::Value const&,
        ::Editor::DataStore::PayloadDescription const&
    ) = 0;

    virtual ::Json::Value getPayload(::HashedString const&, ::Editor::DataStore::PayloadDescription const&) const = 0;

    virtual ::Bedrock::PubSub::Subscription listenForEvent(
        ::std::function<void(
            ::HashedString const&,
            ::Editor::DataStore::EventType,
            ::Json::Value const&,
            ::Editor::DataStore::PayloadDescription const&
        )>
    ) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Editor::Services
