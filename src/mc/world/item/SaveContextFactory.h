#pragma once

#include <memory>

#include "mc/_HeaderOutputPredefine.h"
#include "mc/world/item/SaveContext.h"

// auto generated forward declare list
// clang-format off
class SaveContext;
// clang-format on

namespace SaveContextFactory {
inline ::std::unique_ptr<::SaveContext> createNetworkSaveContext() {
    return std::make_unique<::SaveContext>(::SaveContext::SaveUseCase::SendOverNetwork);
}
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::SaveContext> createCloneSaveContext();
// NOLINTEND

} // namespace SaveContextFactory
