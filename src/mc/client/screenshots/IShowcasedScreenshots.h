#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/threading/IAsyncResult.h"

namespace Screenshots {

class IShowcasedScreenshots {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32>  mUnk3c5613;
    ::ll::UntypedStorage<8, 64>  mUnk72b2cf;
    ::ll::UntypedStorage<8, 32>  mUnkd763f3;
    ::ll::UntypedStorage<8, 16>  mUnk282215;
    ::ll::UntypedStorage<1, 1>   mUnkb24f62;
    ::ll::UntypedStorage<1, 1>   mUnk9c024a;
    ::ll::UntypedStorage<1, 1>   mUnke7ddee;
    ::ll::UntypedStorage<8, 128> mUnk768fe2;
    // NOLINTEND

public:
    // prevent constructor by default
    IShowcasedScreenshots& operator=(IShowcasedScreenshots const&);
    IShowcasedScreenshots(IShowcasedScreenshots const&);
    IShowcasedScreenshots();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IShowcasedScreenshots() = default;

    // vIndex: 1
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> loadGallery() = 0;

    // vIndex: 2
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> loadCount() = 0;

    // vIndex: 3
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    loadShowcasedScreenshot(::std::string const&) = 0;

    // vIndex: 4
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> loadFeaturedScreenshot() = 0;

    // vIndex: 5
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<::std::string>>
    addScreenshotToShowcase(int64, bool, ::Core::PathBuffer<::std::string> const&) = 0;

    // vIndex: 6
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>>
    removeShowcasedScreenshot(::std::string const&, bool) = 0;

    // vIndex: 7
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> setFeaturedScreenshot(::std::string const&) = 0;

    // vIndex: 8
    virtual ::std::shared_ptr<::Bedrock::Threading::IAsyncResult<bool>> removeFeaturedScreenshot() = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace Screenshots
