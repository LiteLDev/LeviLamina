#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class Option;
namespace OreUI::Experimental { class ClientDependencies; }
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class AnimationQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::AnimationQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>     mScreenAnimationEnabled;
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
    MCAPI AnimationQuery(
        ::OreUI::Experimental::ClientDependencies const& client,
        ::OreUI::Experimental::GameDependencies const&   game
    );

    MCAPI void _updateProperty();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Experimental::ClientDependencies const& client, ::OreUI::Experimental::GameDependencies const& game);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForIQuery();

    MCNAPI static void** $vftableForPropertyObject();
    // NOLINTEND
};

} // namespace OreUI::Experimental
