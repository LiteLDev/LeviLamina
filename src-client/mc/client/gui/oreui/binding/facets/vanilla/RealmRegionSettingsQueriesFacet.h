#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/RealmsRegionSettingsState.h"
#include "mc/client/realms/RealmsWorldEditorStateStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace Realms { struct RealmsRegionSettings; }
namespace Realms { struct ServerRegion; }
// clang-format on

namespace OreUI {

class RealmRegionSettingsQueriesFacet : public ::OreUI::FacetBase<::OreUI::RealmRegionSettingsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::RealmsRegionSettings>> mRealmsRegionSettings;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmsWorldEditorStateSubscriber;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsWorldEditorStateStatus>           mStatus;
    ::ll::TypedStorage<1, 1, bool>                                             mIsDirty;
    ::ll::TypedStorage<4, 4, ::Realms::RealmsRegionSettingsState>              mRealmRegionSettingsState;
    ::ll::TypedStorage<4, 4, int>                                              mRegionSelectedIndex;
    ::ll::TypedStorage<1, 1, bool>                                             mTriggerLowPingWarning;
    ::ll::TypedStorage<1, 1, bool>                                             mDoNotLowPingWarning;
    ::ll::TypedStorage<8, 24, ::std::vector<::Realms::ServerRegion>>           mRegionData;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmRegionSettingsUpdateSubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                 mRealmEditorStatusUpdateSubscriber;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmRegionSettingsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmRegionSettingsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit RealmRegionSettingsQueriesFacet(
        ::std::weak_ptr<::Realms::RealmsRegionSettings> realmsRegionSettings
    );

    MCFOLD bool getDoNotShowPingWarning() const;

    MCFOLD bool getLowPingWarning() const;

    MCFOLD ::Realms::RealmsRegionSettingsState getRealmRegionSettingsState() const;

    MCFOLD int getRegionSelectedIndex() const;

    MCFOLD ::std::vector<::Realms::ServerRegion> const& getRegions() const;

    MCFOLD ::Realms::RealmsWorldEditorStateStatus getStatus() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::weak_ptr<::Realms::RealmsRegionSettings> realmsRegionSettings);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
