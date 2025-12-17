#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IClientInstance;
class Level;
class LevelRenderer;
class MinecraftGraphics;
class ScreenContext;
struct FrameRenderObject;
struct PlayerRenderView;
namespace mce { class Color; }
namespace mce { class RenderContext; }
// clang-format on

class GameRenderer {
public:
    // GameRenderer inner types define
    enum class FrameCaptureMode : int {
        Screenshot = 0,
        Panorama   = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 72>  mUnkf77c73;
    ::ll::UntypedStorage<8, 16>  mUnk4bcc9d;
    ::ll::UntypedStorage<8, 208> mUnkbb71a2;
    ::ll::UntypedStorage<8, 8>   mUnke80e6d;
    ::ll::UntypedStorage<8, 24>  mUnkbc4500;
    ::ll::UntypedStorage<8, 24>  mUnka330b1;
    ::ll::UntypedStorage<8, 88>  mUnk4cdac0;
    ::ll::UntypedStorage<4, 24>  mUnk579f17;
    ::ll::UntypedStorage<8, 8>   mUnk67a789;
    ::ll::UntypedStorage<8, 8>   mUnkb9a987;
    ::ll::UntypedStorage<4, 4>   mUnk4c0455;
    ::ll::UntypedStorage<1, 1>   mUnkdcd0c1;
    ::ll::UntypedStorage<4, 4>   mUnkf53110;
    ::ll::UntypedStorage<2, 2>   mUnka0758c;
    ::ll::UntypedStorage<2, 2>   mUnk69208b;
    ::ll::UntypedStorage<1, 1>   mUnk4ee18c;
    ::ll::UntypedStorage<4, 8>   mUnkddec90;
    ::ll::UntypedStorage<8, 8>   mUnk90f5fb;
    ::ll::UntypedStorage<8, 24>  mUnk7c8d71;
    ::ll::UntypedStorage<8, 8>   mUnkb5cc8d;
    ::ll::UntypedStorage<8, 8>   mUnkcec6f6;
    ::ll::UntypedStorage<8, 280> mUnk4e03ea;
    ::ll::UntypedStorage<4, 64>  mUnk958d63;
    ::ll::UntypedStorage<4, 64>  mUnk1c8c9f;
    ::ll::UntypedStorage<4, 64>  mUnkf507f2;
    ::ll::UntypedStorage<4, 64>  mUnka5c459;
    ::ll::UntypedStorage<4, 64>  mUnk112887;
    ::ll::UntypedStorage<1, 1>   mUnk39e531;
    ::ll::UntypedStorage<8, 8>   mUnk3ff461;
    ::ll::UntypedStorage<1, 1>   mUnk3eb6b9;
    ::ll::UntypedStorage<8, 32>  mUnke0631b;
    ::ll::UntypedStorage<8, 32>  mUnk34e304;
    ::ll::UntypedStorage<8, 8>   mUnk97a74c;
    ::ll::UntypedStorage<8, 16>  mUnka47328;
    // NOLINTEND

public:
    // prevent constructor by default
    GameRenderer& operator=(GameRenderer const&);
    GameRenderer(GameRenderer const&);
    GameRenderer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~GameRenderer();
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI GameRenderer(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& ci, ::MinecraftGraphics& graphics);

    MCNAPI void _checkAndDrawInputUI(::ScreenContext& screenContext);

    MCNAPI ::std::unique_ptr<::FrameRenderObject, ::std::function<void(::FrameRenderObject*)>>
    _extractFrame(::ScreenContext& screenContext, bool renderGraphContainsPlayScreen);

    MCNAPI ::std::weak_ptr<::PlayerRenderView> addPlayerRenderView(::LevelRenderer& renderer);

    MCNAPI void cleanupRenderGraph();

    MCNAPI void createRenderGraph(::mce::RenderContext& renderContext, bool onResume);

    MCNAPI void endFrame(::mce::RenderContext& renderContext);

    MCNAPI ::ScreenContext makeScreenContext(float a);

    MCNAPI void onSubClientRemoved(::IClientInstance const& client);

    MCNAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCNAPI void renderCurrentFrame(float a);

    MCNAPI void renderCursor(::ScreenContext& screenContext, float xMouse, float yMouse);

    MCNAPI void renderDebugScreen(::ScreenContext& screenContext, ::IClientInstance& client);

    MCNAPI void setClient(::IClientInstance& ci);

    MCNAPI void setLevel(::Level* level, ::Dimension* dimension);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::mce::Color& mClearColor();

    MCNAPI static bool& mSplitScreenActive();

    MCNAPI static ::std::string& mVersionString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& ci, ::MinecraftGraphics& graphics);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
