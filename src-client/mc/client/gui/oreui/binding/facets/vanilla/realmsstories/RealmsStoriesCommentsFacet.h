#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/PostStatus.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class ProfanityContext;
namespace OreUI::RealmsStories { struct FacetCommentData; }
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesCommentsFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesCommentsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                                           mCurrentStoryId;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::RealmsStories::FacetCommentData>> mComments;
    ::ll::TypedStorage<4, 4, ::Realms::Stories::PostStatus>                            mPostCommentPrevStatus;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::Realms::Stories::FacetStateManager>> mStoriesFacetStateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>      mDateManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>       mProfanityContext;
    ::ll::TypedStorage<1, 1, bool>                                                     mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesCommentsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesCommentsFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesCommentsFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>      dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
    );

    MCAPI ::Realms::Stories::PostStatus _getPostCommentStatus() const;

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
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> provider,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>      dateManager,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
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
