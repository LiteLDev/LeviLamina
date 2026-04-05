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
    getGallery(::TaskGroup& taskGroup, ::Social::XUID xuid) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::Screenshots::GallerySize>>
    getGallerySize(::TaskGroup& taskGroup, ::Social::XUID xuid) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<uchar>>>
    getImage(::TaskGroup& taskGroup, ::std::string const& imageUrl) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<uchar>>>
    getFeaturedImage(::TaskGroup& taskGroup, ::Social::XUID xuid) = 0;

    virtual ::Bedrock::Threading::Async<::std::optional<::Screenshots::RawShowcasedScreenshot>> addImageToShowcase(
        ::TaskGroup&                             taskGroup,
        int64                                    captureTime,
        bool                                     featured,
        ::Core::PathBuffer<::std::string> const& imagePath
    ) = 0;

    virtual ::Bedrock::Threading::Async<bool>
    removeShowcasedImage(::TaskGroup& taskGroup, ::std::string const& guid) = 0;

    virtual ::Bedrock::Threading::Async<bool> setFeaturedImage(::TaskGroup& taskGroup, ::std::string const& guid) = 0;

    virtual ::Bedrock::Threading::Async<bool> removeFeaturedImage(::TaskGroup& taskGroup) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Screenshots
