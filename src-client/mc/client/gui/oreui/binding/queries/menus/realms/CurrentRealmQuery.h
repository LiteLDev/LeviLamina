#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/QueryBase.h"
#include "mc/client/gui/oreui/binding/properties/Property.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class GameDependencies; }
// clang-format on

namespace OreUI {

class CurrentRealmQuery : public ::OreUI::QueryBase<::OreUI::CurrentRealmQuery> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 184, ::OreUI::Property<::std::optional<int64>>> mID;
    ::ll::TypedStorage<8, 176, ::OreUI::Property<bool>>                   mIsRealmOwner;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>            mRealmIDChangedToken;
    // NOLINTEND

public:
    // prevent constructor by default
    CurrentRealmQuery();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CurrentRealmQuery(::OreUI::GameDependencies const& game, ::std::string xuid);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GameDependencies const& game, ::std::string xuid);
    // NOLINTEND
};

} // namespace OreUI
