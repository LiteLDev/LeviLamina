#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/CommonProperties.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsActionType.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsConfirmationRequest.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { struct IRegistry; }
// clang-format on

namespace OreUI {

class SettingsActionQuery : public ::OreUI::QueryBase<::OreUI::SettingsActionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>>                         mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::CommonProperties>                                       mCommonProperties;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string>>                                mActionLabel;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::std::optional<::OreUI::SettingsActionType>>> mActionType;
    ::ll::TypedStorage<8, 1032, ::std::optional<::OreUI::SettingsConfirmationRequest>>          mConfirmationRequest;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsActionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsActionQuery() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsActionQuery(::OreUI::ClientDependencies const& client, ::std::string const& id);

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
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
