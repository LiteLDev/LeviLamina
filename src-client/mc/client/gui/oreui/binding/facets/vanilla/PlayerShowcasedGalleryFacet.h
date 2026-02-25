#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"
#include "mc/identity/XUID.h"
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace OreUI { struct GalleryScreenshot; }
namespace Screenshots { class ShowcasedScreenshots; }
// clang-format on

namespace OreUI {

class PlayerShowcasedGalleryFacet : public ::OreUI::FacetBase<::OreUI::PlayerShowcasedGalleryFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList>> mResourceAllowList;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::DateManager const>>         mDateManager;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                            mDirtySubscriber;
    ::ll::TypedStorage<1, 1, bool>                                                        mIsDirty;
    ::ll::TypedStorage<8, 16, ::std::optional<::Social::XUID>>                            mXuid;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Screenshots::ShowcasedScreenshots>>      mShowcasedScreenshots;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::GalleryScreenshot>>                  mDisplayableScreenshots;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath>                                     mFeaturedScreenshot;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerShowcasedGalleryFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~PlayerShowcasedGalleryFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PlayerShowcasedGalleryFacet(
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI ::Bedrock::Result<void> _resetIfUserChanged(::std::string const& xuidString);

    MCAPI uint64 getCount() const;

    MCFOLD ::OreUI::AllowListPath const& getFeaturedScreenshot() const;

    MCAPI uint64 getMaxScreenshots() const;

    MCFOLD ::std::vector<::OreUI::GalleryScreenshot> const& getScreenshots() const;

    MCAPI bool isLoadingCount() const;

    MCAPI bool isLoadingFeaturedScreenshot() const;

    MCAPI bool isLoadingScreenshots() const;

    MCAPI void loadCount(::std::string const& xuid);

    MCAPI void loadFeaturedScreenshot(::std::string const& xuid);

    MCAPI void loadGallery(::std::string const& xuid);

    MCAPI void loadShowcasedScreenshot(::std::string const& id) const;
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
