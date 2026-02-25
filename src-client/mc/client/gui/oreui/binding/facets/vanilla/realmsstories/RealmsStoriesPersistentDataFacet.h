#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/realms/MemberFilterOption.h"
#include "mc/client/realms/MemberSortOption.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
struct ProfanityContext;
namespace Realms::Stories { struct FacetStateManager; }
// clang-format on

namespace OreUI {

class RealmsStoriesPersistentDataFacet : public ::OreUI::FacetBase<::OreUI::RealmsStoriesPersistentDataFacet> {
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

    MCFOLD ::std::string const& getCommentInProgressBody() const;

    MCFOLD ::Realms::Stories::MemberFilterOption& getCurrentMemberFilterOption() const;

    MCFOLD ::std::string const& getCurrentMemberSearchText() const;

    MCFOLD ::Realms::Stories::MemberSortOption& getCurrentMemberSortOption() const;

    MCFOLD ::std::string const& getCurrentStoryId() const;

    MCAPI bool getNewPostAvailable() const;

    MCFOLD ::std::string const& getPostInProgressBody() const;

    MCFOLD ::std::string const& getStoryScreenshotSelectionFilePath() const;

    MCAPI void setCommentInProgressBody(::std::string const& body);

    MCAPI void setCurrentMemberFilterOption(::Realms::Stories::MemberFilterOption filterOption);

    MCAPI void setCurrentMemberSearchText(::std::string const& searchText);

    MCAPI void setCurrentMemberSortOption(::Realms::Stories::MemberSortOption sortOption);

    MCAPI void setCurrentStoryId(::std::string const& id);

    MCAPI void setNewPostAvailable(bool postAvailable);

    MCAPI void setPostInProgressBody(::std::string const& body);

    MCAPI void setStoryScreenshotSelectionFilePath(::std::string const& path);
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
    MCAPI bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
