#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/services/clubs/ReportedItem.h"

// auto generated forward declare list
// clang-format off
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
};

} // namespace OreUI::RealmsStories
