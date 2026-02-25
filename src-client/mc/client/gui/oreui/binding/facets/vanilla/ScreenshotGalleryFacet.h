#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
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
namespace Screenshots { struct ScreenshotGallery; }
namespace Social { class IUserManager; }
// clang-format on

namespace OreUI {

class ScreenshotGalleryFacet : public ::OreUI::FacetBase<::OreUI::ScreenshotGalleryFacet> {
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
    virtual ~ScreenshotGalleryFacet() /*override*/;

    virtual bool update() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenshotGalleryFacet(
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI void _reset();

    MCAPI void addScreenshotToShowcase(::std::string const& id, bool isFeatured);

    MCAPI void clearDeleteScreenshotsError();

    MCAPI void clearLoadGalleryError();

    MCAPI void clearModifyShowcaseGalleryError();

    MCAPI void deleteScreenshots(::std::vector<::std::string> const& ids);

    MCAPI uint64 getCount() const;

    MCAPI ::OreUI::ScreenshotGalleryFacetError const getDeleteScreenshotsError() const;

    MCFOLD ::OreUI::AllowListPath const& getFeaturedScreenshot() const;

    MCAPI bool const getIsAddFeaturedImageInProgress() const;

    MCAPI bool const getIsAddShowcasedImageInProgress() const;

    MCFOLD bool const getIsDeleteScreenshotsInProgress() const;

    MCFOLD bool const getIsLoadGalleryInProgress() const;

    MCFOLD bool const getIsModifyShowcaseGalleryInProgress() const;

    MCAPI ::OreUI::ScreenshotGalleryFacetError const getLoadGalleryError() const;

    MCFOLD uint64 getMaxScreenshots() const;

    MCFOLD ::OreUI::ScreenshotGalleryFacetError const getModifyShowcaseGalleryError() const;

    MCFOLD ::std::vector<::OreUI::GalleryScreenshot> const& getScreenshots() const;

    MCAPI uint64 getUndownloadedCount() const;

    MCAPI bool isLoadingCount() const;

    MCAPI bool isLoadingFeaturedScreenshot() const;

    MCAPI void removeShowcasedScreenshot(::std::string const& id);

    MCAPI void retryLoadGallery();
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
        ::Bedrock::NotNullNonOwnerPtr<::Social::IUserManager>      userManager,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
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
