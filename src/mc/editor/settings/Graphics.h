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
    ::ll::UntypedStorage<1, 11> mUnk9a807a;
    // NOLINTEND

public:
    // prevent constructor by default
    Graphics& operator=(Graphics const&);
    Graphics(Graphics const&);
    Graphics();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI explicit Graphics(::std::function<void(::Editor::Settings::GraphicsProps const&)> callback);
#endif

#ifdef LL_PLAT_S
    MCNAPI void updateSettings(::Editor::Settings::GraphicsProps const& props, bool notifyUpdate);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::std::function<void(::Editor::Settings::GraphicsProps const&)> callback);
#endif
    // NOLINTEND
};

} // namespace Editor::Settings
