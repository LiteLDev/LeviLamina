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
class MinecraftGraphics;
class Tessellator;
struct CommandListQueue;
struct FrameRenderObject;
struct ProfanityContext;
namespace mce { class Clock; }
namespace mce { struct FrameBufferObject; }
namespace mce { struct FrameDiscardContext; }
namespace mce { struct ViewportInfo; }
// clang-format on

class ScreenContext : public ::UIScreenContext, public ::mce::MeshContext {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::mce::FrameBufferObject*>                           frameBufferObject;
    ::ll::TypedStorage<8, 8, ::mce::ViewportInfo const&>                          viewport;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::GuiData>>           guiData;
    ::ll::TypedStorage<8, 8, ::mce::Clock const&>                                 clock;
    ::ll::TypedStorage<8, 8, ::Tessellator&>                                      tessellator;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics>> minecraftGraphics;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ProfanityContext>>  profanityContext;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::mce::FrameDiscardContext>>       frameDiscardContext;
    ::ll::TypedStorage<1, 1, bool>                                                isCapturingPanorama;
    ::ll::TypedStorage<8, 8, ::CommandListQueue&>                                 commandListQueue;
    ::ll::TypedStorage<8, 8, ::LinearAllocator<::FrameRenderObject>&>             frameAllocator;
    // NOLINTEND

public:
    // prevent constructor by default
    ScreenContext& operator=(ScreenContext const&);
    ScreenContext(ScreenContext const&);
    ScreenContext();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScreenContext(::ScreenContext&&);

    MCAPI ScreenContext(
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

    MCAPI ~ScreenContext();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScreenContext&&);

    MCAPI void* $ctor(
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
    MCAPI void $dtor();
    // NOLINTEND
};
