#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollScreenBoundsPayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollSetBodyRotationPayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"

namespace GeometryAtlas {

struct PaperDollPayload : public ::std::variant<
                              ::GeometryAtlas::PaperDollTransformPayload,
                              ::GeometryAtlas::PaperDollScreenBoundsPayload,
                              ::GeometryAtlas::PaperDollSetBodyRotationPayload,
                              ::GeometryAtlas::InitializeCallbackPayload> {};

} // namespace GeometryAtlas
