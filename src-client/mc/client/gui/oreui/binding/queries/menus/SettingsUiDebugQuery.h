#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
// clang-format on

namespace OreUI::Debug {

class SettingsUiDebugQuery : public ::OreUI::QueryBase<::OreUI::Debug::SettingsUiDebugQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>        mIsUiDebugModeEnabled;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mDebugModeChangedSubscription;
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
    MCAPI explicit SettingsUiDebugQuery(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const&);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Debug
