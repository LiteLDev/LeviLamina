#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/BannerType.h"
#include "mc/client/gui/oreui/binding/queries/menus/CommonProperties.h"
#include "mc/client/gui/oreui/binding/queries/menus/SettingsConfirmationRequest.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class SettingsBannerQuery : public ::OreUI::QueryBase<::OreUI::SettingsBannerQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>>                mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::CommonProperties>                              mCommonProperties;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::BannerType>>                 mBannerType;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>>      mCtaText;
    ::ll::TypedStorage<8, 1032, ::std::optional<::OreUI::SettingsConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                         mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsBannerQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsBannerQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsBannerQuery(::OreUI::ClientDependencies const& client, ::std::string const& id);

    MCAPI void _updateProperties();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI
