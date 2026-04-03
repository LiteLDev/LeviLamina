#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/client/services/clubs/ReportedItem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

namespace OreUI::RealmsStories {

struct FacetReportData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                            mId;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mFeedItemId;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mBody;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTimePosted;
    ::ll::TypedStorage<8, 32, ::std::string>                                            mTimePostedNarration;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                   mImagePath;
    ::ll::TypedStorage<1, 1, bool>                                                      mDirty;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                             mDeletePrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                             mReportToXboxPrevStatus;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string>>                             mReporterXuids;
    ::ll::TypedStorage<8, 560, ::Clubs::ReportedItem>                                   mReportItem;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModeration;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::string> const>                       NO_PLAYERS;
    // NOLINTEND

public:
    // prevent constructor by default
    FacetReportData& operator=(FacetReportData const&);
    FacetReportData();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI FacetReportData(::OreUI::RealmsStories::FacetReportData const&);

    MCAPI FacetReportData(::OreUI::RealmsStories::FacetReportData&&);

    MCAPI FacetReportData(
        ::Clubs::ReportedItem                                    feedItem,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>       dateManager,
        ::OreUI::AllowListPath                                   imagePath,
        ::std::weak_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>        profanityContext
    );

    MCFOLD ::std::string const& getAuthorXuid() const;

    MCAPI ::Realms::Stories::PostStatus getDeleteStatus() const;

    MCAPI bool const getEventHasCoordinates() const;

    MCAPI ::std::string const& getEventMetaData() const;

    MCAPI ::std::vector<::std::string> const& getEventPlayerXuids() const;

    MCAPI int const getEventXCoordinate() const;

    MCAPI int const getEventYCoordinate() const;

    MCAPI int const getEventZCooridnate() const;

    MCFOLD ::std::string const& getFeedItemId() const;

    MCFOLD ::std::string const& getId() const;

    MCAPI ::Realms::Stories::FetchStatus getImageStatus() const;

    MCAPI bool const getIsComment() const;

    MCAPI bool const getIsEvent() const;

    MCFOLD ::std::string const& getLastReported() const;

    MCFOLD int const getReportCount() const;

    MCAPI ::Realms::Stories::FetchStatus getReportStatus() const;

    MCAPI ::Realms::Stories::PostStatus getReportToXboxStatus() const;

    MCFOLD ::std::vector<::std::string> const& getReporterXuids() const;

    MCAPI ~FacetReportData();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::RealmsStories::FacetReportData const&);

    MCAPI void* $ctor(::OreUI::RealmsStories::FacetReportData&&);

    MCAPI void* $ctor(
        ::Clubs::ReportedItem                                    feedItem,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>       dateManager,
        ::OreUI::AllowListPath                                   imagePath,
        ::std::weak_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>        profanityContext
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI::RealmsStories
