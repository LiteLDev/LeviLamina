#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/brstd/move_only_function.h"

// auto generated forward declare list
// clang-format off
class MinecraftScreenModel;
class ScreenController;
// clang-format on

namespace ScreenControllerFactory {

struct FactoryFunctions {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::shared_ptr<::ScreenController>(::std::shared_ptr<::MinecraftScreenModel>)>>
        mCreateToastScreenController;
    ::ll::TypedStorage<
        8,
        64,
        ::brstd::move_only_function<::std::shared_ptr<::ScreenController>(::std::shared_ptr<::MinecraftScreenModel>)>>
        mCreateInviteScreenController;
    // NOLINTEND
};

} // namespace ScreenControllerFactory
