#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/MemberFilterOption.h"
#include "mc/client/realms/MemberSortOption.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ProfanityContext;
namespace Realms::Stories { class FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesPersistentDataFacet
: public ::OreUI::FacetBase_DEPRECATED<::OreUI::RealmsStoriesPersistentDataFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>> mProfanityContext;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mCurrentStoryId;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mPostInProgressBody;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mCommentInProgressBody;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mStoryScreenshotSelectionFilePath;
    ::ll::TypedStorage<8, 8, ::std::string&>                                     mCurrentMemberSearchText;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::MemberFilterOption&>             mCurrentMemberFilterOption;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::MemberSortOption&>               mCurrentMemberSortOption;
    ::ll::TypedStorage<8, 8, bool&>                                              mNewPostAvailable;
    ::ll::TypedStorage<1, 1, bool>                                               mDirty;
    // NOLINTEND

public:
    // prevent constructor by default
    RealmsStoriesPersistentDataFacet& operator=(RealmsStoriesPersistentDataFacet const&);
    RealmsStoriesPersistentDataFacet(RealmsStoriesPersistentDataFacet const&);
    RealmsStoriesPersistentDataFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~RealmsStoriesPersistentDataFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RealmsStoriesPersistentDataFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
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
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace OreUI
