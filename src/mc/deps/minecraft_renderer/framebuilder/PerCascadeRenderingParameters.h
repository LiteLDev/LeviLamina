#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeDrawingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeSamplingParameters.h"
#include "mc/deps/minecraft_renderer/framebuilder/PerCascadeUpdateParameters.h"

namespace mce::framebuilder {

struct PerCascadeRenderingParameters : public ::mce::framebuilder::PerCascadeDrawingParameters,
                                       public ::mce::framebuilder::PerCascadeSamplingParameters,
                                       public ::mce::framebuilder::PerCascadeUpdateParameters {};

} // namespace mce::framebuilder
