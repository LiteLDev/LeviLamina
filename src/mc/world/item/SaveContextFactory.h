#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/SaveContext.h"

// auto generated forward declare list
// clang-format off
class SaveContext;
// clang-format on

namespace SaveContextFactory {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::SaveContext> createCloneSaveContext();

MCAPI ::std::unique_ptr<::SaveContext> createNetworkSaveContext();
// NOLINTEND

} // namespace SaveContextFactory
