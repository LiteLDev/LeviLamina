#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
#include "mc/common/wrapper/WeakRef.h"
#include "mc/deps/core/PathBuffer.h"
#include "mc/deps/core/common/bedrock/pubsub/Connector.h"

// auto generated forward declare list
// clang-format off
namespace cg { class ImageBuffer; }
// clang-format on

class PhotoManager {
public:
    // prevent constructor by default
    PhotoManager& operator=(PhotoManager const&);
    PhotoManager(PhotoManager const&);
    PhotoManager();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol:
    // ?getPictureTakenConnector@PhotoManager@@UEAAAEAV?$Connector@$$A6AXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z@PubSub@Bedrock@@XZ
    virtual class Bedrock::PubSub::Connector<
        void(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&)>&
    getPictureTakenConnector();

    // vIndex: 1, symbol: __gen_??1PhotoManager@@UEAA@XZ
    virtual ~PhotoManager() = default;

    // symbol:
    // ??0PhotoManager@@QEAA@AEBV?$StackRefResult@VLevelStorage@@@@_NAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@@Z
    MCAPI
    PhotoManager(class StackRefResult<class LevelStorage> const&, bool, class Core::PathBuffer<std::string> const&);

    // symbol: ?createPhotoStorage@PhotoManager@@QEAAXXZ
    MCAPI void createPhotoStorage();

    // symbol: ?getPhotoStorage@PhotoManager@@QEAAAEAVPhotoStorage@@XZ
    MCAPI class PhotoStorage& getPhotoStorage();

    // symbol:
    // ?getScreenshotsFolder@PhotoManager@@QEBAAEBV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> const& getScreenshotsFolder() const;

    // symbol: ?takePicture@PhotoManager@@QEAAXAEAVImageBuffer@cg@@PEAVActor@@1AEAUScreenshotOptions@@@Z
    MCAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    // symbol:
    // ?initializeScreenshotsFolder@PhotoManager@@SA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@V?$WeakRef@VLevelStorage@@@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEAVAppPlatform@@@Z
    MCAPI static class Core::PathBuffer<std::string>
    initializeScreenshotsFolder(class WeakRef<class LevelStorage>, std::string const&, class AppPlatform&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_getPhotoStoragePath@PhotoManager@@AEAA?AV?$PathBuffer@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Core@@XZ
    MCAPI class Core::PathBuffer<std::string> _getPhotoStoragePath();

    // NOLINTEND
};
