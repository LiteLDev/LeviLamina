#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class MatchmakingQueueState;
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class MatchmakingQuery : public ::OreUI::QueryBase<::OreUI::MatchmakingQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool, bool>>                         mIsQueued;
    ::ll::TypedStorage<8, 200, ::OreUI::Property<::std::string, ::std::string>>       mQueueTitle;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int, int>>                           mElapsedSeconds;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MatchmakingQueueState>> mMatchmakingQueueState;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mMatchmakingQueueStateChangedSubscription;
    // NOLINTEND

public:
    // prevent constructor by default
    MatchmakingQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void update(double) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit MatchmakingQuery(::OreUI::GameDependencies const& game);

    MCAPI void _update();
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
