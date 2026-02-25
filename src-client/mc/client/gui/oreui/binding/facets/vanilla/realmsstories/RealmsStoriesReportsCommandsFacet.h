#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace Realms::Stories { struct RealmsFeedModeration; }
// clang-format on

namespace OreUI {

class RealmsStoriesReportsCommandsFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesReportsCommandsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModerationManager;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsCommandsFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _clearDeletionStatuses();

    MCAPI void _clearReportFeedStatus();

    MCAPI void _clearReportStatuses(::std::string const& feedItemId);

    MCAPI void _dismiss(::std::string const& storyId, ::std::string const& reason);

    MCAPI void _fetchReportImage(::std::string const& storyId);

    MCAPI void _fetchReportPaths();

    MCAPI void _loadReportsSlice(int fromIndex, int toIndex);

    MCAPI void _reportFeedItemToXbox(
        ::std::string const& feedItemId,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reportGamertagToXbox(
        ::std::string const& gamertag,
        ::std::string const& feedItemId,
        ::std::string const& reportReason,
        ::std::string const& comment
    );

    MCAPI void _reset();

    MCAPI void _retryLoadItem(int index);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
