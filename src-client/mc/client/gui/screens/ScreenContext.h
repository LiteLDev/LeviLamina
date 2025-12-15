#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/UIScreenContext.h"
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MeshContext.h"

// auto generated forward declare list
// clang-format off
class GuiData;
class Tessellator;
struct CommandListQueue;
struct FrameRenderObject;
struct MinecraftGraphics;
struct ProfanityContext;
namespace mce { class Clock; }
namespace mce { struct ViewportInfo; }
// clang-format on

class ScreenContext : public ::UIScreenContext, public ::mce::MeshContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8>  mUnk5c8470;
    ::ll::UntypedStorage<8, 8>  mUnk581e45;
    ::ll::UntypedStorage<8, 24> mUnkb370b1;
    ::ll::UntypedStorage<8, 8>  mUnke4f9a0;
    ::ll::UntypedStorage<8, 8>  mUnk6b3be5;
    ::ll::UntypedStorage<8, 24> mUnka866e5;
    ::ll::UntypedStorage<8, 24> mUnk2d720c;
    ::ll::UntypedStorage<8, 8>  mUnke4f424;
    ::ll::UntypedStorage<1, 1>  mUnk5771a9;
    ::ll::UntypedStorage<8, 8>  mUnkb87ac4;
    ::ll::UntypedStorage<8, 8>  mUnk2b5e18;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenContext& operator=(ScreenContext const&);
    ScreenContext(ScreenContext const&);
    ScreenContext();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ScreenContext(::ScreenContext&&);

    MCNAPI ScreenContext(
        ::mce::ViewportInfo const&                                _vpInfo,
        ::Bedrock::NotNullNonOwnerPtr<::GuiData>                  _guiData,
        ::mce::Clock const&                                       _clock,
        ::Tessellator&                                            _tessellator,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> const& _minecraftGraphics,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const&  _profanityContext,
        ::CommandListQueue&                                       _commandListQueue,
        ::LinearAllocator<::FrameRenderObject>&                   _frameAllocator,
        ::mce::MeshContext&                                       meshContext,
        int                                                       xm,
        int                                                       ym,
        float                                                     a
    );

    MCNAPI ~ScreenContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::ScreenContext&&);

    MCNAPI void* $ctor(
        ::mce::ViewportInfo const&                                _vpInfo,
        ::Bedrock::NotNullNonOwnerPtr<::GuiData>                  _guiData,
        ::mce::Clock const&                                       _clock,
        ::Tessellator&                                            _tessellator,
        ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> const& _minecraftGraphics,
        ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext> const&  _profanityContext,
        ::CommandListQueue&                                       _commandListQueue,
        ::LinearAllocator<::FrameRenderObject>&                   _frameAllocator,
        ::mce::MeshContext&                                       meshContext,
        int                                                       xm,
        int                                                       ym,
        float                                                     a
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
