#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace OreUI::RealmsStories { struct FacetReportData; }
namespace Realms::Stories { class RealmsFeedModeration; }
// clang-format on

namespace OreUI {

class RealmsStoriesReportsQueriesFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesReportsQueriesFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetReportData>>     mReports;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration>> mFeedModeration;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>          mProfanityContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription> mRealmModerationStateSubscriber;
    ::ll::TypedStorage<1, 1, bool>                             mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesReportsQueriesFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesReportsQueriesFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesReportsQueriesFacet(
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
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
        ::std::shared_ptr<::Realms::Stories::RealmsFeedModeration> feedModeration,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
