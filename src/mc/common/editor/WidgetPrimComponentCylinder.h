#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Network {

class WidgetPrimComponentCylinder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnkb39144;
    ::ll::UntypedStorage<4, 4>  mUnk7fe9c9;
    ::ll::UntypedStorage<4, 4>  mUnk98ace0;
    ::ll::UntypedStorage<4, 4>  mUnkffff3e;
    ::ll::UntypedStorage<4, 16> mUnkf09100;
    ::ll::UntypedStorage<4, 16> mUnk474e85;
    ::ll::UntypedStorage<4, 8>  mUnkc9f111;
    // NOLINTEND

public:
    // prevent constructor by default
    WidgetPrimComponentCylinder& operator=(WidgetPrimComponentCylinder const&);
    WidgetPrimComponentCylinder(WidgetPrimComponentCylinder const&);
    WidgetPrimComponentCylinder();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool operator==(::Editor::Network::WidgetPrimComponentCylinder const&) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Network
