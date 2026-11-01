#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase_DEPRECATED.h"
#include "mc/client/gui/oreui/binding/facets/vanilla/ScreenshotGalleryFacetError.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class DateManager;
class TaskGroup;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct GalleryScreenshot; }
namespace Screenshots { class ScreenshotGallery; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class ScreenshotGalleryFacet : public ::OreUI::FacetBase_DEPRECATED<::OreUI::ScreenshotGalleryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>>      mUserManager;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mDirtySubscriber;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                   mScreenshotGalleryChangedSubscriber;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDirty;
    ::ll::TypedStorage<8, 32, ::std::string>                                     mXuid;
    ::ll::TypedStorage<1, 1, bool>                                               mIsLoadGalleryInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>               mLoadGalleryError;
    ::ll::TypedStorage<4, 4, int>                                                mActiveAddFeaturedOperations;
    ::ll::TypedStorage<4, 4, int>                                                mActiveAddShowcasedOperations;
    ::ll::TypedStorage<1, 1, bool>                                               mIsModifyShowcaseGalleryInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>               mModifyShowcaseGalleryError;
    ::ll::TypedStorage<1, 1, bool>                                               mIsDeleteScreenshotsInProgress;
    ::ll::TypedStorage<4, 4, ::OreUI::ScreenshotGalleryFacetError>               mDeleteScreenshotsError;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::TaskGroup>>                     mTaskGroup;
    ::ll::TypedStorage<8, 16, ::std::weak_ptr<::Screenshots::ScreenshotGallery>> mScreenshotGallery;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GalleryScreenshot>>         mDisplayableScreenshots;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                            mFeaturedScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenshotGalleryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScreenshotGalleryFacet() /*override*/ = default;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenshotGalleryFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCNAPI void _reset();

    MCNAPI void addScreenshotToShowcase(::std::string const& id, bool isFeatured);

    MCNAPI void clearDeleteScreenshotsError();

    MCNAPI void clearLoadGalleryError();

    MCNAPI void clearModifyShowcaseGalleryError();

    MCNAPI void deleteScreenshots(::std::vector<::std::string> const& ids);

    MCNAPI uint64 getCount() const;

    MCNAPI ::OreUI::ScreenshotGalleryFacetError const getDeleteScreenshotsError() const;

    MCNAPI ::OreUI::AllowListPath const& getFeaturedScreenshot() const;

    MCNAPI bool const getIsAddFeaturedImageInProgress() const;

    MCNAPI bool const getIsAddShowcasedImageInProgress() const;

    MCNAPI bool const getIsDeleteScreenshotsInProgress() const;

    MCNAPI bool const getIsLoadGalleryInProgress() const;

    MCNAPI bool const getIsModifyShowcaseGalleryInProgress() const;

    MCNAPI ::OreUI::ScreenshotGalleryFacetError const getLoadGalleryError() const;

    MCNAPI uint64 getMaxScreenshots() const;

    MCNAPI ::OreUI::ScreenshotGalleryFacetError const getModifyShowcaseGalleryError() const;

    MCNAPI ::std::vector<::OreUI::GalleryScreenshot> const& getScreenshots() const;

    MCNAPI uint64 getUndownloadedCount() const;

    MCNAPI bool isLoadingCount() const;

    MCNAPI bool isLoadingFeaturedScreenshot() const;

    MCNAPI void removeShowcasedScreenshot(::std::string const& id);

    MCNAPI void retryLoadGallery();
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
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI bool $update();
    // NOLINTEND
};

} // namespace OreUI
