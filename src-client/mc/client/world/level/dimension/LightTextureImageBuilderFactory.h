#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Factory.h"

// auto generated forward declare list
// clang-format off
class BaseLightTextureImageBuilder;
class Level;
class Scheduler;
// clang-format on

namespace LightTextureImageBuilderFactory {
// functions
// NOLINTBEGIN
MCNAPI void
registerLightImageBuilders(::Factory<::BaseLightTextureImageBuilder, ::Level&, ::Scheduler&>& builderFactory);
// NOLINTEND

} // namespace LightTextureImageBuilderFactory
