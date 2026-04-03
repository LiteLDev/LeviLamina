#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Option;
namespace OreUI { class ClientDependencies; }
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class AnimationQuery : public ::OreUI::QueryBase<::OreUI::AnimationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mScreenAnimationEnabled;
    ::ll::TypedStorage<8, 8, ::Option*>                                   mAnimationOption;
    ::ll::TypedStorage<8, 8, ::std::reference_wrapper<::IClientInstance>> mClient;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRouteChangedToken;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mSplitScreenChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    AnimationQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~AnimationQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI AnimationQuery(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);

    MCAPI void _updateProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::ClientDependencies const& client, ::OreUI::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI
