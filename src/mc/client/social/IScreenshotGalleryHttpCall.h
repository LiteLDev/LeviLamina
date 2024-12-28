#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Social { struct GallerySize; }
namespace Social { struct RawShowcasedScreenshot; }
// clang-format on

namespace Social {

class IScreenshotGalleryHttpCall {
public:
    // prevent constructor by default
    IScreenshotGalleryHttpCall& operator=(IScreenshotGalleryHttpCall const&);
    IScreenshotGalleryHttpCall(IScreenshotGalleryHttpCall const&);
    IScreenshotGalleryHttpCall();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScreenshotGalleryHttpCall();

    // vIndex: 1
    virtual ::std::shared_ptr<
        ::Bedrock::Threading::IAsyncResult<::std::optional<::std::vector<::Social::RawShowcasedScreenshot>>>>
    getGallery(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::optional<::Social::GallerySize>>>
    getGallerySize(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::optional<::std::vector<uchar>>>>
    getImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 4
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::optional<::std::vector<uchar>>>>
    getFeaturedImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 5
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::optional<::Social::RawShowcasedScreenshot>>>
    addImageToShowcase(::TaskGroup&, int64, bool, ::Core::PathBuffer<::std::string> const&) = 0;

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    removeShowcasedImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 7
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    setFeaturedImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 8
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> removeFeaturedImage(::TaskGroup&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Social
