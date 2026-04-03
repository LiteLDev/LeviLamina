#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct NetworkWorldInfo;
namespace Network { struct ServerID; }
namespace OreUI { struct FriendWorld; }
namespace Parties { class PartyTravelManager; }
namespace Social { class FriendList; }
namespace World { class FriendServerWorldList; }
// clang-format on

namespace OreUI {

class FriendWorldListFacet : public ::OreUI::FacetBase<::OreUI::FriendWorldListFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::World::FriendServerWorldList&>                            mFriendServerWorldList;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Social::FriendList>>                   mFriendList;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::FriendWorld>>                       mFriendWorlds;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager>> mPartyTravelManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FriendWorldListFacet& operator=(FriendWorldListFacet const&);
    FriendWorldListFacet(FriendWorldListFacet const&);
    FriendWorldListFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~FriendWorldListFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FriendWorldListFacet(
        ::World::FriendServerWorldList&                           friendServerWorldList,
        ::std::shared_ptr<::Social::FriendList>                   friendList,
        ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager> partyTravelManager
    );

    MCAPI ::OreUI::FriendWorld _createFriendWorld(
        ::Network::ServerID const& serverId,
        ::NetworkWorldInfo const&  networkWorldInfo,
        bool                       directFriend
    );

    MCFOLD ::std::vector<::OreUI::FriendWorld> const& getFriendWorlds() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::World::FriendServerWorldList&                           friendServerWorldList,
        ::std::shared_ptr<::Social::FriendList>                   friendList,
        ::Bedrock::NonOwnerPointer<::Parties::PartyTravelManager> partyTravelManager
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
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
