#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/Async.h"

// auto generated forward declare list
// clang-format off
class TaskGroup;
namespace Screenshots { struct GallerySize; }
namespace Screenshots { struct RawShowcasedScreenshot; }
// clang-format on

namespace Screenshots {

class IScreenshotGalleryHttpCall {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IScreenshotGalleryHttpCall() = default;

    // vIndex: 1
    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<::Screenshots::RawShowcasedScreenshot>>>
    getGallery(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 2
    virtual ::Bedrock::Threading::Async<::std::optional<::Screenshots::GallerySize>>
    getGallerySize(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 3
    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<uchar>>>
    getImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 4
    virtual ::Bedrock::Threading::Async<::std::optional<::std::vector<uchar>>>
    getFeaturedImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 5
    virtual ::Bedrock::Threading::Async<::std::optional<::Screenshots::RawShowcasedScreenshot>>
    addImageToShowcase(::TaskGroup&, int64, bool, ::Core::PathBuffer<::std::string> const&) = 0;

    // vIndex: 6
    virtual ::Bedrock::Threading::Async<bool> removeShowcasedImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 7
    virtual ::Bedrock::Threading::Async<bool> setFeaturedImage(::TaskGroup&, ::std::string const&) = 0;

    // vIndex: 8
    virtual ::Bedrock::Threading::Async<bool> removeFeaturedImage(::TaskGroup&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Screenshots
