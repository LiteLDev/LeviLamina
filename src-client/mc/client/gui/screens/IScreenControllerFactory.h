#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class InviteScreenController;
class MinecraftScreenModel;
class ScreenController;
class ToastScreenController;
// clang-format on

class IScreenControllerFactory {
public:
    // IScreenControllerFactory inner types declare
    // clang-format off
    template<typename T0> struct ControllerType;
    // clang-format on

    // IScreenControllerFactory inner types define
    template <typename T0>
    struct ControllerType {};

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IScreenControllerFactory() = default;

    virtual ::std::shared_ptr<::ScreenController> createScreenController(
        ::IScreenControllerFactory::ControllerType<::ToastScreenController>,
        ::std::shared_ptr<::MinecraftScreenModel>
    ) = 0;

    virtual ::std::shared_ptr<::ScreenController> createScreenController(
        ::IScreenControllerFactory::ControllerType<::InviteScreenController>,
        ::std::shared_ptr<::MinecraftScreenModel>
    ) = 0;
    // NOLINTEND
};
