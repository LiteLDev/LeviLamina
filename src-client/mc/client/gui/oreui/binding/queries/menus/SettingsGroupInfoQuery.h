#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/queries/menus/CommonProperties.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class SettingsGroupInfoQuery : public ::OreUI::QueryBase<::OreUI::SettingsGroupInfoQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>> mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::CommonProperties>               mCommonProperties;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsGroupInfoQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsGroupInfoQuery() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsGroupInfoQuery(::OreUI::ClientDependencies const& client, ::std::string const& id);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
