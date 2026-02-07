#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/screens/BaseScreen.h"
#include "mc/deps/core/timing/Stopwatch.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/minecraft_renderer/renderer/MaterialPtr.h"

// auto generated forward declare list
// clang-format off
class CubemapBackgroundResources;
class IClientInstance;
class RectangleArea;
class ScreenContext;
struct FrameRenderObject;
struct ScreenSizeData;
// clang-format on

class CubemapBackgroundScreen : public ::BaseScreen {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 16, ::mce::MaterialPtr>                                          mCubeMaterial;
    ::ll::TypedStorage<1, 1, bool>                                                         mFlushable;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IClientInstance>>            mClient;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources>> mCubemapResources;
    ::ll::TypedStorage<8, 56, ::Stopwatch>                                                 mFadeTimer;
    ::ll::TypedStorage<4, 4, float>                                                        mAccumulatedTime;
    ::ll::TypedStorage<1, 1, bool>                                                         mIsFading;
    // NOLINTEND

public:
    // prevent constructor by default
    CubemapBackgroundScreen();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~CubemapBackgroundScreen() /*override*/;

    virtual void init(::ScreenSizeData const& screenSizeData) /*override*/;

    virtual void terminate() /*override*/;

    virtual void render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj) /*override*/;

    virtual bool screenIsNotFlushable() const /*override*/;

    virtual bool renderOnlyWhenTopMost() const /*override*/;

    virtual bool lowFreqRendering() const /*override*/;

    virtual bool renderGameBehind() const /*override*/;

    virtual bool isShowingMenu() const /*override*/;

    virtual ::std::string getScreenName() const /*override*/;

    virtual bool equalsScreenName(::std::string_view comparison) const /*override*/;

    virtual bool containsScreenNameSubstring(::std::string_view substring) const /*override*/;

    virtual bool getShouldSendEvents() /*override*/;

    virtual ::RectangleArea getAreaOfControlByName(::std::string const&) const /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI CubemapBackgroundScreen(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&            client,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapResources,
        bool                                                               flushable
    );

    MCAPI void renderCubemap(::ScreenContext& screenContext, bool hdrCubemap);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::IClientInstance> const&            client,
        ::Bedrock::NotNullNonOwnerPtr<::CubemapBackgroundResources> const& cubemapResources,
        bool                                                               flushable
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $init(::ScreenSizeData const& screenSizeData);

    MCAPI void $terminate();

    MCAPI void $render(::ScreenContext& screenContext, ::FrameRenderObject const& renderObj);

    MCFOLD bool $screenIsNotFlushable() const;

    MCAPI bool $renderOnlyWhenTopMost() const;

    MCFOLD bool $lowFreqRendering() const;

    MCFOLD bool $renderGameBehind() const;

    MCFOLD bool $isShowingMenu() const;

    MCAPI ::std::string $getScreenName() const;

    MCAPI bool $equalsScreenName(::std::string_view comparison) const;

    MCAPI bool $containsScreenNameSubstring(::std::string_view substring) const;

    MCFOLD bool $getShouldSendEvents();

    MCFOLD ::RectangleArea $getAreaOfControlByName(::std::string const&) const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
