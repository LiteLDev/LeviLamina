#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/queries/menus/CommonProperties.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct ISettingsRegistry;
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SettingsTextQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SettingsTextQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::ISettingsRegistry>>   mSettingsRegistry;
    ::ll::TypedStorage<8, 784, ::OreUI::Experimental::CommonProperties> mCommonProperties;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>          mSettingsChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsTextQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsTextQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SettingsTextQuery(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client, ::std::string const& id);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
