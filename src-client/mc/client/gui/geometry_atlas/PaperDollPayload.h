#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/geometry_atlas/InitializeCallbackPayload.h"
#include "mc/client/gui/geometry_atlas/PaperDollTransformPayload.h"

namespace GeometryAtlas {

struct PaperDollPayload
: public ::std::variant<::GeometryAtlas::PaperDollTransformPayload, ::GeometryAtlas::InitializeCallbackPayload> {};

} // namespace GeometryAtlas
