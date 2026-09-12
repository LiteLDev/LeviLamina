#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/resources/AtlasTileCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIStructureVolumeOffscreenCaptureDescription.h"
#include "mc/deps/minecraft_renderer/resources/UIThumbnailMeshOffscreenCaptureDescription.h"

struct OffscreenCaptureDescription : public ::std::variant<
                                         ::std::monostate,
                                         ::AtlasTileCaptureDescription,
                                         ::UIThumbnailMeshOffscreenCaptureDescription,
                                         ::UIStructureVolumeOffscreenCaptureDescription> {};
