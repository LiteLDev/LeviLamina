#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/realms/RealmMemberFilterOption.h"
#include "mc/client/realms/RealmMemberSortOption.h"
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
    ::ll::TypedStorage<8, 8, ::Realms::Stories::RealmMemberFilterOption&>        mCurrentMemberFilterOption;
    ::ll::TypedStorage<8, 8, ::Realms::Stories::RealmMemberSortOption&>          mCurrentMemberSortOption;
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
    MCNAPI RealmsStoriesPersistentDataFacet(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
    );

    MCNAPI ::std::string const& getCommentInProgressBody() const;

    MCNAPI ::Realms::Stories::RealmMemberFilterOption& getCurrentMemberFilterOption() const;

    MCNAPI ::std::string const& getCurrentMemberSearchText() const;

    MCNAPI ::Realms::Stories::RealmMemberSortOption& getCurrentMemberSortOption() const;

    MCNAPI ::std::string const& getCurrentStoryId() const;

    MCNAPI bool getNewPostAvailable() const;

    MCNAPI ::std::string const& getPostInProgressBody() const;

    MCNAPI ::std::string const& getStoryScreenshotSelectionFilePath() const;

    MCNAPI void setCommentInProgressBody(::std::string const& body);

    MCNAPI void setCurrentMemberFilterOption(::Realms::Stories::RealmMemberFilterOption filterOption);

    MCNAPI void setCurrentMemberSearchText(::std::string const& searchText);

    MCNAPI void setCurrentMemberSortOption(::Realms::Stories::RealmMemberSortOption sortOption);

    MCNAPI void setCurrentStoryId(::std::string const& id);

    MCNAPI void setNewPostAvailable(bool postAvailable);

    MCNAPI void setPostInProgressBody(::std::string const& body);

    MCNAPI void setStoryScreenshotSelectionFilePath(::std::string const& path);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::std::shared_ptr<::Realms::Stories::FacetStateManager> realmsStoriesProvider,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>       profanityContext
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
