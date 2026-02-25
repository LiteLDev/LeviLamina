#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class IResourceAllowList; }
namespace OreUI::RealmsStories { struct FacetPlayerData; }
namespace Realms::Stories { struct FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesPlayersFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesPlayersFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetPlayerData>>  mPlayers;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                           mFetchMembersPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                           mFetchOnlineMembersPrevStatus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPlayersFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPlayersFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesPlayersFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NonOwnerPointer<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI ::Realms::Stories::FetchStatus _getFetchMembersStatus() const;

    MCAPI ::Realms::Stories::FetchStatus _getFetchOnlineMembersStatus() const;

    MCAPI void _regenerateView();
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
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NonOwnerPointer<::OreUI::IResourceAllowList> resourceAllowList
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
