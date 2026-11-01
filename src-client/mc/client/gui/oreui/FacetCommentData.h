#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/realms/PostStatus.h"

// auto generated forward declare list
// clang-format off
namespace Clubs { struct FeedItem; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI::RealmsStories {

struct FacetCommentData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePosted;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mTimePostedNarration;
    ::ll::TypedStorage<8, 32, ::std::string>                                         mBody;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mSetViewedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mToggleLikePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToClubOwnerPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                          mReportToXboxPrevStatus;
    ::ll::TypedStorage<8, 8, ::Clubs::FeedItem&>                                     mFeedItem;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetCommentData& operator=(FacetCommentData const&);
    FacetCommentData(FacetCommentData const&);
    FacetCommentData();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::std::string const& getAuthorXuid() const;

    MCNAPI ::Realms::Stories::PostStatus getDeleteStatus() const;

    MCNAPI bool const getHasLiked() const;

    MCNAPI bool const getHasViewed() const;

    MCNAPI ::std::string const& getId() const;

    MCNAPI ::std::string const& getParentId() const;

    MCNAPI ::Realms::Stories::PostStatus getReportToClubOwnerStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getReportToXboxStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getSetViewedStatus() const;

    MCNAPI ::Realms::Stories::PostStatus getToggleLikeStatus() const;

    MCNAPI int const getTotalLikes() const;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[30]> NAME();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
