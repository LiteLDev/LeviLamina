#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace OreUI::RealmsStories { struct FacetSessionData; }
namespace Realms::Stories { struct FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesSessionsFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesSessionsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetSessionData>> mSessions;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirty;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                           mFetchSessionsPrevStatus;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesSessionsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ::Realms::Stories::FetchStatus _getFetchSessionsState() const;

    MCAPI void _regenerateView();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
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
