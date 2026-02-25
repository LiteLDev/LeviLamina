#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/resources/AllowListPath.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class DateManager;
namespace OreUI { class IResourceAllowList; }
namespace Screenshots { struct GalleryScreenshot; }
namespace Screenshots { struct ShowcasedScreenshot; }
// clang-format on

namespace OreUI {

struct GalleryScreenshot {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>          id;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> thumbnail;
    ::ll::TypedStorage<8, 96, ::OreUI::AllowListPath> image;
    ::ll::TypedStorage<8, 32, ::std::string>          filePath;
    ::ll::TypedStorage<8, 8, int64>                   captureTime;
    ::ll::TypedStorage<8, 32, ::std::string>          captureTimeLabel;
    ::ll::TypedStorage<8, 8, int64>                   lastModifiedTime;
    ::ll::TypedStorage<1, 1, bool>                    showcased;
    ::ll::TypedStorage<1, 1, bool>                    featured;
    ::ll::TypedStorage<1, 1, bool>                    loadingImage;
    // NOLINTEND

public:
    // prevent constructor by default
    GalleryScreenshot& operator=(GalleryScreenshot const&);
    GalleryScreenshot(GalleryScreenshot const&);
    GalleryScreenshot();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI GalleryScreenshot(::OreUI::GalleryScreenshot&&);

    MCAPI GalleryScreenshot(
        ::Screenshots::GalleryScreenshot const&                    screenshot,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI GalleryScreenshot(
        ::Screenshots::ShowcasedScreenshot const&                  showcasedScreenshot,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI GalleryScreenshot(
        ::std::string          id,
        ::OreUI::AllowListPath thumbnail,
        ::OreUI::AllowListPath image,
        ::std::string          filePath,
        int64                  captureTime,
        ::std::string          captureTimeLabel,
        int64                  lastModifiedTime,
        bool                   showcased,
        bool                   featured,
        bool                   loadingImage
    );

    MCAPI ~GalleryScreenshot();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::OreUI::GalleryScreenshot&&);

    MCAPI void* $ctor(
        ::Screenshots::GalleryScreenshot const&                    screenshot,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI void* $ctor(
        ::Screenshots::ShowcasedScreenshot const&                  showcasedScreenshot,
        ::Bedrock::NotNullNonOwnerPtr<::OreUI::IResourceAllowList> resourceAllowList,
        ::Bedrock::NotNullNonOwnerPtr<::DateManager const>         dateManager
    );

    MCAPI void* $ctor(
        ::std::string          id,
        ::OreUI::AllowListPath thumbnail,
        ::OreUI::AllowListPath image,
        ::std::string          filePath,
        int64                  captureTime,
        ::std::string          captureTimeLabel,
        int64                  lastModifiedTime,
        bool                   showcased,
        bool                   featured,
        bool                   loadingImage
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace OreUI
