#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentAxialSphere {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk322ea6;
    ::ll::UntypedStorage<4, 12> mUnk1a8279;
    ::ll::UntypedStorage<4, 4>  mUnk77ad2e;
    ::ll::UntypedStorage<4, 20> mUnke52fd2;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentAxialSphere& operator=(WidgetPrimComponentAxialSphere const&);
    WidgetPrimComponentAxialSphere(WidgetPrimComponentAxialSphere const&);
    WidgetPrimComponentAxialSphere();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI bool operator==(::Editor::Network::WidgetPrimComponentAxialSphere const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
