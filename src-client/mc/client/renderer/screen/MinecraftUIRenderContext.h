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
        ::ll::TypedStorage<8, 8, ::Font&>                                            mFont;
        ::ll::TypedStorage<4, 16, ::RectangleArea>                                   mArea;
        ::ll::TypedStorage<8, 40, ::std::variant<::std::string, ::std::string_view>> mText;
        ::ll::TypedStorage<4, 16, ::mce::Color>                                      mColor;
        ::ll::TypedStorage<4, 4, int>                                                mCaretLocation;
        ::ll::TypedStorage<4, 4, float>                                              mFontScale;
        ::ll::TypedStorage<4, 4, float>                                              mLinePadding;
        ::ll::TypedStorage<4, 4, ::ui::TextAlignment>                                mAlignment;
        ::ll::TypedStorage<1, 1, bool>                                               mShadow;
        ::ll::TypedStorage<1, 1, bool>                                               mShowColorSymbol;
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

    virtual int getLineLength(::Font& font, ::std::string const& text, float fontSize, bool showColorSymbol) const
        /*override*/;

    virtual float getTextAlpha() const /*override*/;

    virtual void setTextAlpha(float alpha) /*override*/;

    virtual void drawDebugText(
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) /*override*/;

    virtual void drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) /*override*/;

    virtual void drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string_view        text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) /*override*/;

    virtual void flushText(float deltaTime, ::std::optional<float> obfuscateSwitchTime) /*override*/;

    virtual void drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    ) /*override*/;

    virtual void drawNineslice(::mce::ClientTexture const& texture, ::NinesliceInfo const& info) /*override*/;

    virtual void
    flushImages(::mce::Color const& color, float alpha, ::HashedString const& materialNameHash) /*override*/;

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const& resourceLocation, bool forceReload) const
        /*override*/;

    virtual ::mce::TexturePtr getZippedTexture(
        ::Core::Path const&       zippedFolderPath,
        ::ResourceLocation const& resourceLocation,
        bool                      forceReload
    ) const /*override*/;

    virtual bool unloadTexture(::ResourceLocation const& resourceLocation) /*override*/;

    virtual ::UITextureInfoPtr getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload) const
        /*override*/;

    virtual void touchTexture(::ResourceLocation const& resourceLocation) /*override*/;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch& renderBatch) /*override*/;

    virtual void endSharedMeshBatch(::ComponentRenderBatch& renderBatch) /*override*/;

    virtual void reserveSharedMeshBatch(uint64 vertexCount) /*override*/;

    virtual uint64 getSharedMeshBatchVertexCount() const /*override*/;

    virtual void
    drawRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha, int thickness) /*override*/;

    virtual void fillRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha) /*override*/;

    virtual void increaseStencilRef() /*override*/;

    virtual void decreaseStencilRef() /*override*/;

    virtual void resetStencilRef() /*override*/;

    virtual void fillRectangleStencil(::RectangleArea const& rect) /*override*/;

    virtual void enableScissorTest(::RectangleArea const& rect) /*override*/;

    virtual void disableScissorTest() /*override*/;

    virtual void setClippingRectangle(::RectangleArea const& rect) /*override*/;

    virtual void setFullClippingRectangle() /*override*/;

    virtual void saveCurrentClippingRectangle() /*override*/;

    virtual void restoreSavedClippingRectangle() /*override*/;

    virtual ::RectangleArea getFullClippingRectangle() const /*override*/;

    virtual void cleanup() /*override*/;

    virtual void removePersistentMeshes() /*override*/;

    virtual ::UIMeasureStrategy& getMeasureStrategy() /*override*/;

    virtual void snapImageSizeToGrid(::glm::vec2& size) const /*override*/;

    virtual void snapImagePositionToGrid(::glm::vec2& position) const /*override*/;

    virtual void notifyImageEstimate(uint64 imageCount) /*override*/;

    virtual bool updateCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer) /*override*/;

    virtual void renderCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer, int pass) /*override*/;
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
    MCNAPI static ::std::unique_ptr<::MinecraftUIPersistentMeshItem>
    _createPersistentMesh(::ComponentRenderBatch const& renderBatch, ::mce::TextureGroup& textureGroup);

    MCNAPI static bool _endSharedMeshBatch(
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
    MCNAPI int $getLineLength(::Font& font, ::std::string const& text, float fontSize, bool showColorSymbol) const;

    MCNAPI float $getTextAlpha() const;

    MCNAPI void $setTextAlpha(float alpha);

    MCNAPI void $drawDebugText(
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCNAPI void $drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCNAPI void $drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string_view        text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCNAPI void $flushText(float deltaTime, ::std::optional<float> obfuscateSwitchTime);

    MCNAPI void $drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    );

    MCNAPI void $drawNineslice(::mce::ClientTexture const& texture, ::NinesliceInfo const& info);

    MCNAPI void $flushImages(::mce::Color const& color, float alpha, ::HashedString const& materialNameHash);

    MCNAPI ::mce::TexturePtr $getTexture(::ResourceLocation const& resourceLocation, bool forceReload) const;

    MCNAPI ::mce::TexturePtr $getZippedTexture(
        ::Core::Path const&       zippedFolderPath,
        ::ResourceLocation const& resourceLocation,
        bool                      forceReload
    ) const;

    MCNAPI bool $unloadTexture(::ResourceLocation const& resourceLocation);

    MCNAPI ::UITextureInfoPtr $getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload) const;

    MCNAPI void $touchTexture(::ResourceLocation const& resourceLocation);

    MCNAPI void $beginSharedMeshBatch(::ComponentRenderBatch& renderBatch);

    MCNAPI void $endSharedMeshBatch(::ComponentRenderBatch& renderBatch);

    MCNAPI void $reserveSharedMeshBatch(uint64 vertexCount);

    MCNAPI uint64 $getSharedMeshBatchVertexCount() const;

    MCNAPI void $drawRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha, int thickness);

    MCNAPI void $fillRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha);

    MCNAPI void $increaseStencilRef();

    MCNAPI void $decreaseStencilRef();

    MCNAPI void $resetStencilRef();

    MCNAPI void $fillRectangleStencil(::RectangleArea const& rect);

    MCNAPI void $enableScissorTest(::RectangleArea const& rect);

    MCNAPI void $disableScissorTest();

    MCNAPI void $setClippingRectangle(::RectangleArea const& rect);

    MCNAPI void $setFullClippingRectangle();

    MCNAPI void $saveCurrentClippingRectangle();

    MCNAPI void $restoreSavedClippingRectangle();

    MCNAPI ::RectangleArea $getFullClippingRectangle() const;

    MCNAPI void $cleanup();

    MCNAPI void $removePersistentMeshes();

    MCNAPI ::UIMeasureStrategy& $getMeasureStrategy();

    MCNAPI void $snapImageSizeToGrid(::glm::vec2& size) const;

    MCNAPI void $snapImagePositionToGrid(::glm::vec2& position) const;

    MCNAPI void $notifyImageEstimate(uint64 imageCount);

    MCNAPI bool $updateCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer);

    MCNAPI void $renderCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer, int pass);
    // NOLINTEND
};
