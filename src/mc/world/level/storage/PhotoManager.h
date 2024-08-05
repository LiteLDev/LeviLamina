#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/wrapper/StackRefResult.h"
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
    // vIndex: 0
    virtual class Bedrock::PubSub::Connector<
        void(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&)>&
    getPictureTakenConnector();

    // vIndex: 1
    virtual ~PhotoManager() = default;

    MCAPI PhotoManager(class StackRefResult<class LevelStorage> const&, bool);

    MCAPI void createPhotoStorage();

    MCAPI void createScreenshotsFolder(std::string const&, class AppPlatform&);

    MCAPI class PhotoStorage& getPhotoStorage();

    MCAPI class Core::PathBuffer<std::string> const& getScreenshotsFolder() const;

    MCAPI void takePicture(class cg::ImageBuffer&, class Actor*, class Actor*, struct ScreenshotOptions&);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI class Core::PathBuffer<std::string> _getPhotoStoragePath();

    // NOLINTEND
};
