#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::Experimental { class ClientDependencies; }
// clang-format on

namespace OreUI::Experimental::Debug {

class SettingsUiDebugQuery
: public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::Debug::SettingsUiDebugQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>> mIsUiDebugModeEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mDebugModeChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    SettingsUiDebugQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SettingsUiDebugQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit SettingsUiDebugQuery(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental::Debug
