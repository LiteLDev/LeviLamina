#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock::DDUI { class DataStoreSyncClient; }
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class DataStoreQueryObject : public ::OreUI::QueryBase<::OreUI::DataStoreQueryObject> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                    mSubscription;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreQueryObject();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataStoreQueryObject(
        ::Bedrock::DDUI::DataStoreSyncClient* dataStore,
        ::std::string                         dataStoreName,
        ::std::string                         propertyName,
        ::std::string                         path
    );

    MCAPI DataStoreQueryObject(
        ::OreUI::GameDependencies const&   client,
        ::OreUI::ClientDependencies const& dataStoreName,
        ::std::string                      propertyName,
        ::std::string                      path,
        ::std::string
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::DDUI::DataStoreSyncClient* dataStore,
        ::std::string                         dataStoreName,
        ::std::string                         propertyName,
        ::std::string                         path
    );

    MCAPI void* $ctor(
        ::OreUI::GameDependencies const&   client,
        ::OreUI::ClientDependencies const& dataStoreName,
        ::std::string                      propertyName,
        ::std::string                      path,
        ::std::string
    );
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
