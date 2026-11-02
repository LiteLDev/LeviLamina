#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"

// auto generated forward declare list
// clang-format off
namespace Clubs { struct FeedItem; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI::RealmsStories {

struct FacetStoryData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePosted;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePostedNarration;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                mImagePath;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mBody;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mSetViewedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mToggleLikePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToClubOwnerPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToXboxPrevStatus;
    ::ll::TypedStorage<1, 1, bool>                                                   mDirty;
    ::ll::TypedStorage<8, 8, ::Clubs::FeedItem&>                                     mFeedItem;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>                    NO_PLAYERS;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetStoryData& operator=(FacetStoryData const&);
    FacetStoryData(FacetStoryData const&);
    FacetStoryData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string const& getAuthorXuid() const;

    MCNAPI ::Realms::Stories::FetchStatus getCommentsStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getDeleteStatus() const;

    MCNAPI bool getEventHasCoordinates() const;

    MCNAPI ::std::string const& getEventMetadata() const;

    MCNAPI ::std::vector<::std::string> const& getEventPlayerXuids() const;

    MCNAPI int getEventXCoordinate() const;

    MCNAPI int getEventYCoordinate() const;

    MCNAPI int getEventZCoordinate() const;

    MCNAPI bool getHasLiked() const;

    MCNAPI bool getHasViewed() const;

    MCNAPI ::std::string const& getId() const;

    MCNAPI ::Realms::Stories::FetchStatus getImageStatus() const;

    MCNAPI bool getIsEvent() const;

    MCNAPI bool getIsEventLoaded() const;

    MCNAPI int getNumComments() const;

    MCNAPI ::Realms::Stories::PostStatus getReportToClubOwnerStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getReportToXboxStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getSetViewedStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getToggleLikeStatus() const;

    MCNAPI int getTotalLikes() const;

    MCNAPI void setHasViewed(bool value);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[28]> NAME();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
