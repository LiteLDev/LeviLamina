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

class DataStoreQueryNumber : public ::OreUI::QueryBase<::OreUI::DataStoreQueryNumber> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>             mSubscription;
    ::ll::TypedStorage<8, 184, ::OreUI::Property<::std::optional<double>>> mValue;
    // NOLINTEND

public:
    // prevent constructor by default
    DataStoreQueryNumber();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~DataStoreQueryNumber() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DataStoreQueryNumber(
        ::Bedrock::DDUI::DataStoreSyncClient* dataStore,
        ::std::string                         dataStoreName,
        ::std::string                         propertyName,
        ::std::string                         path
    );

    MCAPI DataStoreQueryNumber(
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
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
