#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct ProfanityContext;
namespace Clubs { struct FeedItem; }
namespace Realms::Stories { struct FacetStateManager; }
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
    MCAPI FacetStoryData(::OreUI::RealmsStories::FacetStoryData&&);

    MCAPI FacetStoryData(
        ::Clubs::FeedItem&                                    feedItem,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>    dateManager,
        ::OreUI::AllowListPath                                imagePath,
        ::std::weak_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>     profanityContext
    );

    MCAPI ::std::string const& getAuthorXuid() const;

    MCAPI ::Realms::Stories::FetchStatus getCommentsStatus() const;

    MCAPI ::Realms::Stories::PostStatus getDeleteStatus() const;

    MCAPI bool getEventHasCoordinates() const;

    MCAPI ::std::string const& getEventMetadata() const;

    MCAPI ::std::vector<::std::string> const& getEventPlayerXuids() const;

    MCAPI int getEventXCoordinate() const;

    MCAPI int getEventYCoordinate() const;

    MCAPI int getEventZCoordinate() const;

    MCAPI bool getHasLiked() const;

    MCAPI bool getHasViewed() const;

    MCAPI ::std::string const& getId() const;

    MCAPI ::Realms::Stories::FetchStatus getImageStatus() const;

    MCAPI bool getIsEvent() const;

    MCAPI bool getIsEventLoaded() const;

    MCAPI int getNumComments() const;

    MCAPI ::Realms::Stories::PostStatus getReportToClubOwnerStatus() const;

    MCAPI ::Realms::Stories::PostStatus getReportToXboxStatus() const;

    MCAPI ::Realms::Stories::PostStatus getSetViewedStatus() const;

    MCAPI ::Realms::Stories::PostStatus getToggleLikeStatus() const;

    MCAPI int getTotalLikes() const;

    MCAPI void setHasViewed(bool value);

    MCAPI ~FacetStoryData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RealmsStories::FacetStoryData&&);

    MCAPI void* $ctor(
        ::Clubs::FeedItem&                                    feedItem,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>    dateManager,
        ::OreUI::AllowListPath                                imagePath,
        ::std::weak_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>     profanityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
