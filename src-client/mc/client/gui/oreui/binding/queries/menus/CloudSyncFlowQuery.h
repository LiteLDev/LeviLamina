#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/gui/oreui/binding/queries/menus/CloudSyncFlowStatus.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class CloudSyncTrigger;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class CloudSyncFlowQuery : public ::OreUI::QueryBase<::OreUI::CloudSyncFlowQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::CloudSyncTrigger*>                     mCloudSyncTrigger;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>        mStateChangedSubscription;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mSyncStartTimestamp;
    ::ll::TypedStorage<1, 1, bool>                                    mIsSyncRunning;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::OreUI::CloudSyncFlowStatus, ::OreUI::CloudSyncFlowStatus>> mStatus;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mShowCancelButton;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>> mIsBlocking;
    // NOLINTEND

public:
    // prevent constructor by default
    CloudSyncFlowQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CloudSyncFlowQuery(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $update(double);
    // NOLINTEND
};

} // namespace OreUI
