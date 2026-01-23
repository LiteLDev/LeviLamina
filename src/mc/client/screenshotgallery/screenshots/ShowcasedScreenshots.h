#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
namespace Core { class FileSystem; }
namespace Screenshots { class IScreenshotGalleryHttpCall; }
namespace Social { struct XUID; }
namespace Screenshots { struct RawShowcasedScreenshot; }
// clang-format on

namespace Screenshots {

class ShowcasedScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>   mUnk501be4;
    ::ll::UntypedStorage<8, 8>   mUnkc598fa;
    ::ll::UntypedStorage<8, 8>   mUnk4f71e5;
    ::ll::UntypedStorage<8, 32>  mUnkab068e;
    ::ll::UntypedStorage<8, 24>  mUnk12c9dd;
    ::ll::UntypedStorage<8, 8>   mUnk17bb98;
    ::ll::UntypedStorage<8, 184> mUnk792f8e;
    ::ll::UntypedStorage<8, 8>   mUnk2dcc43;
    ::ll::UntypedStorage<1, 1>   mUnk555533;
    ::ll::UntypedStorage<1, 1>   mUnk27792e;
    ::ll::UntypedStorage<1, 1>   mUnk707dc3;
    ::ll::UntypedStorage<8, 128> mUnk4ff035;
    ::ll::UntypedStorage<8, 8>   mUnk91ad15;
    // NOLINTEND

public:
    // prevent constructor by default
    ShowcasedScreenshots& operator=(ShowcasedScreenshots const&);
    ShowcasedScreenshots(ShowcasedScreenshots const&);
    ShowcasedScreenshots();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C ShowcasedScreenshots(
        ::Social::XUID                                               xuid,
        ::Core::PathBuffer<::std::string> const&                     cacheStoragePath,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&     fileSystem,
        ::std::unique_ptr<::Screenshots::IScreenshotGalleryHttpCall> httpCaller
    );

    MCNAPI_C ::std::string _addScreenshotToShowcaseCallback(
        ::Core::PathBuffer<::std::string> const&                      imagePath,
        ::std::optional<::Screenshots::RawShowcasedScreenshot> const& rawScreenshot
    );

    MCNAPI_C bool
    _cacheScreenshot(::Core::PathBuffer<::std::string> const& path, ::std::vector<uchar> const& imageData) const;

    MCNAPI_C ::Core::PathBuffer<::std::string> _getFeaturedImagePath();

    MCNAPI_C ::Core::PathBuffer<::std::string> _getShowcasedImagePath(::std::string const& guid, bool isThumbnail);

    MCNAPI_C bool _loadFeaturedScreenshotCallback(::std::optional<::std::vector<uchar>> const& rawScreenshot);

    MCNAPI_C bool _loadGalleryCallback(
        ::std::optional<::std::vector<::Screenshots::RawShowcasedScreenshot>> const& showcasedScreenshots
    );

    MCNAPI_C void _pruneCache();

    MCNAPI_C void _pruneIncrementally(::std::vector<::Core::PathBuffer<::std::string>> fileList);

    MCNAPI_C ::Bedrock::Threading::Async<::std::string>
    addScreenshotToShowcase(int64 captureTime, bool featured, ::Core::PathBuffer<::std::string> const& imagePath);

    MCNAPI_C ::Core::PathBuffer<::std::string> const getFeaturedScreenshotPath() const;

    MCNAPI_C ::Bedrock::Threading::Async<bool> loadCount();

    MCNAPI_C ::Bedrock::Threading::Async<bool> loadFeaturedScreenshot();

    MCNAPI_C ::Bedrock::Threading::Async<bool> loadGallery();

    MCNAPI_C ::Bedrock::Threading::Async<bool> loadShowcasedScreenshot(::std::string const& guid);

    MCNAPI_C ::Bedrock::Threading::Async<bool> removeFeaturedScreenshot();

    MCNAPI_C ::Bedrock::Threading::Async<bool> removeShowcasedScreenshot(::std::string const& guid);

    MCNAPI_C ::Bedrock::Threading::Async<bool> setFeaturedScreenshot(::std::string const& guid);

    MCNAPI_C ~ShowcasedScreenshots();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI_C static ::std::add_lvalue_reference_t<char const[]> CACHE_DIR_NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::Social::XUID                                               xuid,
        ::Core::PathBuffer<::std::string> const&                     cacheStoragePath,
        ::Bedrock::NotNullNonOwnerPtr<::Core::FileSystem> const&     fileSystem,
        ::std::unique_ptr<::Screenshots::IScreenshotGalleryHttpCall> httpCaller
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI_C void $dtor();
    // NOLINTEND
};

} // namespace Screenshots
