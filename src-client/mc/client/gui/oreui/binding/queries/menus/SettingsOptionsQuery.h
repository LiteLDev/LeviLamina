#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/queries/menus/CommonProperties.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class SettingsOption; }
namespace OreUI { class SettingsOptionConfirmationRequest; }
namespace Settings { class IRegistry; }
// clang-format on

namespace OreUI {

class SettingsOptionsQuery : public ::OreUI::QueryBase<::OreUI::SettingsOptionsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Settings::IRegistry>>           mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::CommonProperties>                         mCommonProperties;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                            mValue;
    ::ll::TypedStorage<8, 208, ::OreUI::Property<::std::optional<::std::string>>> mInfo;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<::OreUI::SettingsOption, ::std::allocator<::OreUI::SettingsOption>>>
        mOptions;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::PropertyVector<
            ::OreUI::SettingsOptionConfirmationRequest,
            ::std::allocator<::OreUI::SettingsOptionConfirmationRequest>>>
                                                               mConfirmationRequests;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsOptionsQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsOptionsQuery() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsOptionsQuery(::OreUI::ClientDependencies const& client, ::std::string const& id);

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
