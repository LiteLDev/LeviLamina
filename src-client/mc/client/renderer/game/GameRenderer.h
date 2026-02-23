#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/ScreenContext.h"
#include "mc/client/renderer/MinecraftGraphicsPipeline.h"
#include "mc/client/renderer/RenderGraph.h"
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/math/Matrix.h"
#include "mc/deps/core/memory/LinearAllocator.h"
#include "mc/deps/core/timing/Clock.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core/utility/optional_ref.h"
#include "mc/deps/core/utility/pub_sub/Connector.h"
#include "mc/deps/core/utility/pub_sub/Subscription.h"

// auto generated forward declare list
// clang-format off
class Dimension;
class IClientInstance;
class Level;
class LevelRenderer;
class MinecraftGraphics;
class Tessellator;
class TickingTextureStage;
struct CommandListQueue;
struct FrameRenderObject;
struct IRenderChunkGarbageCollection;
struct InsideCubeRenderer;
struct PlayerRenderView;
namespace mce { class Color; }
namespace mce { class RenderContext; }
namespace mce { class RenderStage; }
// clang-format on

class GameRenderer {
public:
    // GameRenderer inner types define
    enum class FrameCaptureMode : int {
        Screenshot = 0,
        Panorama   = 1,
    };

    using PauseStateChangeConnector = ::Bedrock::PubSub::Connector<void(bool)>;

    using FrameObjectPtr = ::std::unique_ptr<::FrameRenderObject, ::std::function<void(::FrameRenderObject*)>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 72, ::std::unique_ptr<::FrameRenderObject, ::std::function<void(::FrameRenderObject*)>>>
                                                                                    mFrameObject_NoAccessOutsideRender;
    ::ll::TypedStorage<8, 16, ::LinearAllocator<::FrameRenderObject>>               mLinearAllocator;
    ::ll::TypedStorage<8, 208, ::MinecraftGraphicsPipeline>                         mMinecraftGraphicsPipeline;
    ::ll::TypedStorage<8, 8, ::MinecraftGraphics&>                                  mMinecraftGraphics;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::IClientInstance>>        mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>     mPrimaryClient;
    ::ll::TypedStorage<8, 88, ::mce::RenderGraph>                                   mRenderGraph;
    ::ll::TypedStorage<4, 24, ::mce::Clock>                                         mClock;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::Tessellator>>                      mTessellator;
    ::ll::TypedStorage<8, 8, ::TickingTextureStage*>                                mTickingTextureStage;
    ::ll::TypedStorage<4, 4, float>                                                 mLastClockTime;
    ::ll::TypedStorage<1, 1, bool>                                                  mFlushedInitCommandList;
    ::ll::TypedStorage<4, 4, int>                                                   _tick;
    ::ll::TypedStorage<2, 2, short>                                                 mPointerX;
    ::ll::TypedStorage<2, 2, short>                                                 mPointerY;
    ::ll::TypedStorage<1, 1, bool>                                                  mUseLowFrequencyUIRender;
    ::ll::TypedStorage<4, 8, ::std::optional<::GameRenderer::FrameCaptureMode>>     mFrameCaptureMode;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::InsideCubeRenderer>>               mInsideCubeRenderer;
    ::ll::TypedStorage<8, 8, ::std::chrono::nanoseconds>                            mLastFrameTime;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::PlayerRenderView>>> mPlayerViews;
    ::ll::TypedStorage<8, 8, ::optional_ref<::mce::RenderStage>>                    mDirectOutputStage;
    ::ll::TypedStorage<8, 8, ::optional_ref<::CommandListQueue>>                    mCommandListQueue;
    ::ll::TypedStorage<8, 280, ::std::optional<::ScreenContext>>                    mCurrentFrameScreenContext;
    ::ll::TypedStorage<4, 64, ::Matrix>                                             mLastLevelViewMatrix;
    ::ll::TypedStorage<4, 64, ::Matrix>                                             mLastLevelViewMatrixAbsolute;
    ::ll::TypedStorage<4, 64, ::Matrix>                                             mLastLevelProjMatrix;
    ::ll::TypedStorage<4, 64, ::Matrix>                                             mLastLevelWorldMatrix;
    ::ll::TypedStorage<4, 64, ::Matrix>                                             mCubemapWorldMatrix;
    ::ll::TypedStorage<1, 1, bool>                                                  mCubemapRotationPaused;
    ::ll::TypedStorage<8, 8, double>                                                mCubemapRotationSeconds;
    ::ll::TypedStorage<1, 1, bool>                                                  mHasCustomSoftwareCursor;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                    mCustomSoftwareCursorAsset;
    ::ll::TypedStorage<8, 32, ::std::string>                                        mExperimentsString;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::IRenderChunkGarbageCollection>>    mGarbageCollection;
    ::ll::TypedStorage<8, 16, ::Bedrock::PubSub::Subscription>                      mPauseSubscription;
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
    MCAPI GameRenderer(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& ci, ::MinecraftGraphics& graphics);

    MCAPI void _checkAndDrawInputUI(::ScreenContext& screenContext);

    MCAPI ::std::unique_ptr<::FrameRenderObject, ::std::function<void(::FrameRenderObject*)>>
    _extractFrame(::ScreenContext& screenContext, bool renderGraphContainsPlayScreen);

    MCAPI void _tickLightTexture(::Dimension& dimension, float a);

    MCAPI ::std::weak_ptr<::PlayerRenderView> addPlayerRenderView(::LevelRenderer& renderer);

    MCAPI void cleanupRenderGraph();

    MCAPI void createRenderGraph(::mce::RenderContext& renderContext, bool onResume);

    MCAPI void endFrame(::mce::RenderContext& renderContext);

    MCAPI ::ScreenContext makeScreenContext(float a);

    MCAPI void onSubClientRemoved(::IClientInstance const& client);

    MCAPI void recreateTickingTextureStage();

    MCAPI void registerPauseManagerCallback(::Bedrock::PubSub::Connector<void(bool)>& connector);

    MCAPI void renderCurrentFrame(float a);

    MCAPI void renderCursor(::ScreenContext& screenContext, float xMouse, float yMouse);

    MCAPI void renderDebugScreen(::ScreenContext& screenContext, ::IClientInstance& client);

    MCAPI void setClient(::IClientInstance& ci);

    MCAPI void setLevel(::Level* level, ::Dimension* dimension);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color& mClearColor();

    MCAPI static bool& mSplitScreenActive();

    MCAPI static ::std::string& mVersionString();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const& ci, ::MinecraftGraphics& graphics);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
