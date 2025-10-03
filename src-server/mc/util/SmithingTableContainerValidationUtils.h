#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ContainerScreenContext;
class ItemStackBase;
// clang-format on

namespace SmithingTableContainerValidationUtils {
// functions
// NOLINTBEGIN
MCNAPI bool isItemAllowedInInputSlot(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item);

MCNAPI bool isItemAllowedInMaterialSlot(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item);

MCNAPI bool isItemAllowedInTemplateSlot(::ContainerScreenContext const& screenContext, ::ItemStackBase const& item);
// NOLINTEND

} // namespace SmithingTableContainerValidationUtils
