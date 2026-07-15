#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/controls/renderers/MinecraftUICustomRenderer.h"

// auto generated forward declare list
// clang-format off
class IClientInstance;
class NinePatchLayer;
class UIControl;
class UIScene;
// clang-format on

class HoverRenderer : public ::MinecraftUICustomRenderer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string>                      mContent;
    ::ll::TypedStorage<8, 32, ::std::string>                      mFormattedContent;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mCursorPosition;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mOffset;
    ::ll::TypedStorage<4, 8, ::glm::vec2>                         mBoxDimensions;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::NinePatchLayer>> mLayer;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update(::IClientInstance& client, ::UIControl& owner, ::UIScene const& scene) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
