#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/CommonProperties.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/ConfirmationRequest.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/SettingsActionType.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SettingsActionQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SettingsActionQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>>          mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::Experimental::CommonProperties>        mCommonProperties;
    ::ll::TypedStorage<8, 200, ::OreUI::Experimental::Property<::std::string>> mActionLabel;
    ::ll::TypedStorage<
        8,
        176,
        ::OreUI::Experimental::Property<::std::optional<::OreUI::Experimental::SettingsActionType>>>
                                                                                            mActionType;
    ::ll::TypedStorage<8, 808, ::std::optional<::OreUI::Experimental::ConfirmationRequest>> mConfirmationRequest;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsActionQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsActionQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsActionQuery(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
