#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/experimental/QueryBase.h"
#include "mc/client/gui/oreui/binding/experimental/properties/Property.h"
#include "mc/client/options/SplitScreenDirection.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
struct SplitScreenInfo;
namespace OreUI::Experimental { class ClientDependencies; }
namespace OreUI::Experimental { class GameDependencies; }
// clang-format on

namespace OreUI::Experimental {

class SplitScreenQuery : public ::OreUI::Experimental::QueryBase<::OreUI::Experimental::SplitScreenQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<bool>>                   mIsPrimaryUser;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<int>>                    mSplitScreenPosition;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<int>>                    mActivePlayers;
    ::ll::TypedStorage<8, 176, ::OreUI::Experimental::Property<::SplitScreenDirection>> mSplitScreenDirection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                          mChangeToken;
    // NOLINTEND

public:
    // prevent constructor by default
    SplitScreenQuery();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~SplitScreenQuery() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SplitScreenQuery(
        ::OreUI::Experimental::GameDependencies const&   game,
        ::OreUI::Experimental::ClientDependencies const& client
    );

    MCAPI void _updateData(::SplitScreenInfo const& info);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void*
    $ctor(::OreUI::Experimental::GameDependencies const& game, ::OreUI::Experimental::ClientDependencies const& client);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForPropertyObject();

    MCNAPI static void** $vftableForIQuery();
    // NOLINTEND
};

} // namespace OreUI::Experimental
