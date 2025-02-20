#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Editor::Settings { struct GraphicsProps; }
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace Editor::Settings {

class Graphics {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk705d9d;
    ::ll::UntypedStorage<1, 4>  mUnk9a807a;
    // NOLINTEND

public:
    // prevent constructor by default
    Graphics& operator=(Graphics const&);
    Graphics(Graphics const&);
    Graphics();

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Settings
