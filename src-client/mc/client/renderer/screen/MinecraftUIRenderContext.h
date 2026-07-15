#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/UIRenderContext.h"
#include "mc/client/renderer/screen/MinecraftUIMeasureStrategy.h"
#include "mc/deps/core/math/Color.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/input/RectangleArea.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class CustomRenderComponent;
class Font;
class HashedString;
class IClientInstance;
class IUIRepository;
class ResourceLocation;
class ScreenContext;
class UIMeasureStrategy;
class UIScene;
class UITextureInfoPtr;
struct CaretMeasureData;
struct MinecraftUIPersistentMeshItem;
struct NinesliceInfo;
struct OffscreenCaptureDescription;
struct TextMeasureData;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class MinecraftUIRenderContext : public ::UIRenderContext {
public:
    // MinecraftUIRenderContext inner types declare
    // clang-format off
    struct TextItem;
    struct ImageItem;
    // clang-format on

    // MinecraftUIRenderContext inner types define
    struct TextItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::Font&>             mFont;
        ::ll::TypedStorage<4, 16, ::RectangleArea>    mArea;
        ::ll::TypedStorage<8, 32, ::std::string>      mText;
        ::ll::TypedStorage<4, 16, ::mce::Color>       mColor;
        ::ll::TypedStorage<1, 1, bool>                mShadow;
        ::ll::TypedStorage<1, 1, bool>                mShowColorSymbol;
        ::ll::TypedStorage<4, 4, int>                 mCaretLocation;
        ::ll::TypedStorage<4, 4, float>               mFontScale;
        ::ll::TypedStorage<4, 4, float>               mLinePadding;
        ::ll::TypedStorage<4, 4, ::ui::TextAlignment> mAlignment;
        // NOLINTEND

    public:
        // prevent constructor by default
        TextItem& operator=(TextItem const&);
        TextItem(TextItem const&);
        TextItem();
    };

    struct ImageItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<8, 8, ::mce::ClientTexture const&> mTexture;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mPosition;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mSize;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mUV;
        ::ll::TypedStorage<4, 8, ::glm::vec2>                 mUVSize;
        ::ll::TypedStorage<1, 1, bool>                        mColorCorrected;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageItem& operator=(ImageItem const&);
        ImageItem(ImageItem const&);
        ImageItem();
    };

    using PersistentMeshItem = ::MinecraftUIPersistentMeshItem;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                                 mClient;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                                   mScreenContext;
    ::ll::TypedStorage<8, 32, ::MinecraftUIMeasureStrategy>                                      mMeasureStrategy;
    ::ll::TypedStorage<4, 4, float>                                                              mTextAlpha;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>>                    mUIRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>                            mTextureGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup>>                mStoreCacheTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftUIRenderContext::TextItem>>               mTextToDraw;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftUIRenderContext::ImageItem>>              mImagesToDraw;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::MinecraftUIPersistentMeshItem>>> mPersistentMeshes;
    ::ll::TypedStorage<1, 1, uchar>                                                              mStencilRef;
    ::ll::TypedStorage<4, 4, int>                           mCurrentPersistentMeshItemIdx;
    ::ll::TypedStorage<8, 80, ::FontHandle>                 mDebugTextFontHandle;
    ::ll::TypedStorage<8, 8, ::UIScene const&>              mCurrentScene;
    ::ll::TypedStorage<4, 20, ::std::optional<::glm::vec4>> mSavedOriginalClippingRectangle;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftUIRenderContext& operator=(MinecraftUIRenderContext const&);
    MinecraftUIRenderContext(MinecraftUIRenderContext const&);
    MinecraftUIRenderContext();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftUIRenderContext() /*override*/;

    virtual int getLineLength(::Font&, ::std::string const&, float, bool) const /*override*/;

    virtual float getTextAlpha() const /*override*/;

    virtual void setTextAlpha(float) /*override*/;

    virtual void drawDebugText(
        ::RectangleArea const&,
        ::std::string&&,
        ::mce::Color const&,
        float,
        ::ui::TextAlignment,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) /*override*/;

    virtual void drawText(
        ::Font&,
        ::RectangleArea const&,
        ::std::string&&,
        ::mce::Color const&,
        float,
        ::ui::TextAlignment,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) /*override*/;

    virtual void flushText(float, ::std::optional<float>) /*override*/;

    virtual void drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    ) /*override*/;

    virtual void drawNineslice(::mce::ClientTexture const&, ::NinesliceInfo const&) /*override*/;

    virtual void flushImages(::mce::Color const&, float, ::HashedString const&) /*override*/;

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const&, bool) const /*override*/;

    virtual ::mce::TexturePtr getZippedTexture(::Core::Path const&, ::ResourceLocation const&, bool) const /*override*/;

    virtual bool unloadTexture(::ResourceLocation const&) /*override*/;

    virtual ::UITextureInfoPtr getUITextureInfo(::ResourceLocation const&, bool) const /*override*/;

    virtual void touchTexture(::ResourceLocation const&) /*override*/;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch&) /*override*/;

    virtual void endSharedMeshBatch(::ComponentRenderBatch&) /*override*/;

    virtual void reserveSharedMeshBatch(uint64) /*override*/;

    virtual uint64 getSharedMeshBatchVertexCount() const /*override*/;

    virtual void drawRectangle(::RectangleArea const&, ::mce::Color const&, float, int) /*override*/;

    virtual void fillRectangle(::RectangleArea const&, ::mce::Color const&, float) /*override*/;

    virtual void increaseStencilRef() /*override*/;

    virtual void decreaseStencilRef() /*override*/;

    virtual void resetStencilRef() /*override*/;

    virtual void fillRectangleStencil(::RectangleArea const&) /*override*/;

    virtual void enableScissorTest(::RectangleArea const&) /*override*/;

    virtual void disableScissorTest() /*override*/;

    virtual void setClippingRectangle(::RectangleArea const&) /*override*/;

    virtual void setFullClippingRectangle() /*override*/;

    virtual void saveCurrentClippingRectangle() /*override*/;

    virtual void restoreSavedClippingRectangle() /*override*/;

    virtual ::RectangleArea getFullClippingRectangle() const /*override*/;

    virtual void cleanup() /*override*/;

    virtual void removePersistentMeshes() /*override*/;

    virtual ::UIMeasureStrategy& getMeasureStrategy() /*override*/;

    virtual void snapImageSizeToGrid(::glm::vec2&) const /*override*/;

    virtual void snapImagePositionToGrid(::glm::vec2&) const /*override*/;

    virtual void notifyImageEstimate(uint64) /*override*/;

    virtual bool updateCustom(::gsl::not_null<::CustomRenderComponent*>) /*override*/;

    virtual void renderCustom(::gsl::not_null<::CustomRenderComponent*>, int) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI
    MinecraftUIRenderContext(::IClientInstance& client, ::ScreenContext& screenContext, ::UIScene const& currentScene);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    _createPersistentMesh(::ComponentRenderBatch const& renderBatch, ::mce::TextureGroup& textureGroup);

    MCAPI static bool _endSharedMeshBatch(
        ::ComponentRenderBatch&              renderBatch,
        ::MinecraftUIPersistentMeshItem&     persistentMeshItem,
        ::ScreenContext&                     screenContext,
        ::OffscreenCaptureDescription const& capture
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::IClientInstance& client, ::ScreenContext& screenContext, ::UIScene const& currentScene);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    );
    // NOLINTEND
};
