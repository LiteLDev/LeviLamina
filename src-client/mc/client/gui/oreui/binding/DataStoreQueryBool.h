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

class DataStoreQueryBool : public ::OreUI::QueryBase<::OreUI::DataStoreQueryBool> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>           mSubscription;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<bool>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreQueryBool();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreQueryBool() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataStoreQueryBool(
        ::Bedrock::DDUI::DataStoreSyncClient* dataStore,
        ::std::string                         dataStoreName,
        ::std::string                         propertyName,
        ::std::string                         path
    );

    MCAPI DataStoreQueryBool(
        ::OreUI::GameDependencies const&,
        ::OreUI::ClientDependencies const& client,
        ::std::string                      dataStoreName,
        ::std::string                      propertyName,
        ::std::string                      path
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
        ::OreUI::GameDependencies const&,
        ::OreUI::ClientDependencies const& client,
        ::std::string                      dataStoreName,
        ::std::string                      propertyName,
        ::std::string                      path
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
