#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Actor;
struct ScreenshotOptions;
namespace cg { class ImageBuffer; }
// clang-format on

class IPhotoManagerConnector {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ::Bedrock::PubSub::Connector<void(::cg::ImageBuffer&, ::Actor*, ::Actor*, ::ScreenshotOptions&)>&
    getPictureTakenConnector() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
