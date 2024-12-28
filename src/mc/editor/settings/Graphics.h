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
    ::ll::UntypedStorage<1, 3>  mUnk9a807a;
    // NOLINTEND

public:
    // prevent constructor by default
    Graphics& operator=(Graphics const&);
    Graphics(Graphics const&);
    Graphics();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit Graphics(::std::function<void(::Editor::Settings::GraphicsProps const&)> callback);

    MCAPI bool getShowChunkBoundaries() const;

    MCAPI bool getShowCompass() const;

    MCAPI bool getShowInvisibleBlocks() const;

    MCAPI void setShowChunkBoundaries(bool shouldShow);

    MCAPI void setShowCompass(bool shouldShow);

    MCAPI void setShowInvisibleBlocks(bool shouldShow);

    MCAPI void updateSettings(::Editor::Settings::GraphicsProps const& props, bool notifyUpdate);

    MCAPI ~Graphics();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::function<void(::Editor::Settings::GraphicsProps const&)> callback);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Settings
