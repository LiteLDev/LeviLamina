#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/gui/oreui/binding/experimental/properties/PropertyVector.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/CommonProperties.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/SettingsOption.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SettingsOptionsQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SettingsOptionsQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>>                           mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::Experimental::CommonProperties>                         mCommonProperties;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<int>>                            mValue;
    ::ll::TypedStorage<8, 208, ::OreUI::Experimental::Property<::std::optional<::std::string>>> mInfo;
    ::ll::TypedStorage<
        8,
        120,
        ::OreUI::Experimental::PropertyVector<
            ::OreUI::Experimental::SettingsOption,
            ::std::allocator<::OreUI::Experimental::SettingsOption>>>
                                                               mOptions;
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
    MCAPI SettingsOptionsQuery(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& id);
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

} // namespace OreUI::Experimental
