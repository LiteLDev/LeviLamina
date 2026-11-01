#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

namespace OreUI {

class RealmsStoriesReportsCommandsFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesReportsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModerationManager;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsCommandsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI explicit RealmsStoriesReportsCommandsFacet(
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration
    );

    MCNAPI void _clearDeletionStatuses();

    MCNAPI void _clearReportFeedStatus();

    MCNAPI void _clearReportStatuses(::std::string const& feedItemId);

    MCNAPI void _dismiss(::std::string const& storyId, ::std::string const& reason);

    MCNAPI void _fetchReportImage(::std::string const& storyId);

    MCNAPI void _fetchReportPaths();

    MCNAPI void _loadReportsSlice(int fromIndex, int toIndex);

    MCNAPI void _reportFeedItemToXbox(
        ::std::string const& feedItemId,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCNAPI void _reportGamertagToXbox(
        ::std::string const& gamertag,
        ::std::string const& feedItemId,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCNAPI void _reset();

    MCNAPI void _retryLoadItem(int index);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
