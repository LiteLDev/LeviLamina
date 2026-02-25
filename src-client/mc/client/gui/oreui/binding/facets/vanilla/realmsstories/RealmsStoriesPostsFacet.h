#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/client/realms/stories/FetchStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
struct ProfanityContext;
namespace OreUI { class IResourceAllowList; }
namespace OreUI::RealmsStories { struct FacetStoryData; }
namespace Realms::Stories { struct FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesPostsFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesPostsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetStoryData>>      mStories;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                              mStoryFeedPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::FetchStatus>                              mEventsPrevStatus;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                               mPostStoryPrevStatus;
    ::ll::TypedStorage<4, 4, int const>                                                   STORIES_PER_PAGE;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>>    mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>          mProfanityContext;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<1, 1, bool>                                                        mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPostsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPostsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesPostsFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager>    provider,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
    );

    MCAPI bool _getMostRecentStoriesViewed() const;

    MCFOLD int _getPageLength() const;

    MCAPI ::Realms::Stories::PostStatus _getPostStoryStatus() const;

    MCAPI bool _getStoryFeedFirstPageReady() const;

    MCAPI ::Realms::Stories::FetchStatus _getStoryFeedStatus() const;

    MCAPI int _getStoryFeedTotalStories() const;

    MCAPI int _getUnreadStoryCount() const;

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
        ::std::shared_ptr<::Realms::Stories::FacetStateManager>    provider,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>          profanityContext,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList
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
