#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Social { struct XUID; }
namespace Screenshots { struct GallerySize; }
namespace Screenshots { struct RawShowcasedScreenshot; }
// clang-format on

namespace Screenshots {

class IScreenshotGalleryHttpCall {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenshotGalleryHttpCall() = default;

    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<::Screenshots::RawShowcasedScreenshot>>>
    getGallery(::TaskGroup&, ::Social::XUID) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::Screenshots::GallerySize>>
    getGallerySize(::TaskGroup&, ::Social::XUID) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<uchar>>>
    getImage(::TaskGroup&, ::std::string const&) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<uchar>>>
    getFeaturedImage(::TaskGroup&, ::Social::XUID) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::Screenshots::RawShowcasedScreenshot>>
    addImageToShowcase(::TaskGroup&, int64, bool, ::Core::PathBuffer<::std::string> const&) = 0;

    virtual ::Bedrock::Threading::Async<bool> removeShowcasedImage(::TaskGroup&, ::std::string const&) = 0;

    virtual ::Bedrock::Threading::Async<bool> setFeaturedImage(::TaskGroup&, ::std::string const&) = 0;

    virtual ::Bedrock::Threading::Async<bool> removeFeaturedImage(::TaskGroup&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Screenshots
