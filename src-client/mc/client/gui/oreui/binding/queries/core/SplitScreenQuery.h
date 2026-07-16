#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class SplitScreenQuery : public ::OreUI::QueryBase<::OreUI::SplitScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mIsPrimaryUser;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mSplitScreenPosition;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<int>>                    mActivePlayers;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<::SplitScreenDirection>> mSplitScreenDirection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SplitScreenQuery(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::OreUI::ClientDependencies const& client);
    // NOLINTEND
};

} // namespace OreUI
