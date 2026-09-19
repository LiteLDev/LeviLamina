#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/IScreenControllerFactory.h"
#include "mc/client/gui/screens/screen_controller_factory/FactoryFunctions.h"

// auto generated forward declare list
// clang-format off
class InviteScreenController;
class MinecraftScreenModel;
class ScreenController;
class ToastScreenController;
// clang-format on

namespace ScreenControllerFactory {

class Impl : public ::IScreenControllerFactory {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 128, ::ScreenControllerFactory::FactoryFunctions> mFactories;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::std::shared_ptr<::ScreenController> createScreenController(
        ::IScreenControllerFactory::ControllerType<::ToastScreenController>,
        ::std::shared_ptr<::MinecraftScreenModel> model
    ) /*override*/;

    virtual ::std::shared_ptr<::ScreenController> createScreenController(
        ::IScreenControllerFactory::ControllerType<::InviteScreenController>,
        ::std::shared_ptr<::MinecraftScreenModel> model
    ) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::std::shared_ptr<::ScreenController> $createScreenController(
        ::IScreenControllerFactory::ControllerType<::ToastScreenController>,
        ::std::shared_ptr<::MinecraftScreenModel> model
    );

    MCAPI ::std::shared_ptr<::ScreenController> $createScreenController(
        ::IScreenControllerFactory::ControllerType<::InviteScreenController>,
        ::std::shared_ptr<::MinecraftScreenModel> model
    );
    // NOLINTEND
};

} // namespace ScreenControllerFactory
