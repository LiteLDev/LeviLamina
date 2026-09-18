#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class IScreenControllerFactory;
class MinecraftScreenModel;
class ScreenController;
// clang-format on

namespace ScreenControllerFactory {
// functions
// NOLINTBEGIN
MCAPI ::std::unique_ptr<::IScreenControllerFactory> createScreenControllerFactory(
    ::brstd::move_only_function<::std::shared_ptr<::ScreenController>(::std::shared_ptr<::MinecraftScreenModel>)>
        createToastScreenController,
    ::brstd::move_only_function<::std::shared_ptr<::ScreenController>(::std::shared_ptr<::MinecraftScreenModel>)>
        createInviteScreenController
);
// NOLINTEND

} // namespace ScreenControllerFactory
