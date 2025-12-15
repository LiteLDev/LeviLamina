#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/client/gui/TextAlignment.h"
#include "mc/client/gui/controls/UIRenderContext.h"
#include "mc/client/renderer/screen/MinecraftUIMeasureStrategy.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class HashedString;
class IClientInstance;
class RectangleArea;
class ResourceLocation;
class ScreenContext;
class UIMeasureStrategy;
class UIScene;
class UITextureInfoPtr;
struct BatchKey;
struct CaretMeasureData;
struct ComponentRenderBatch;
struct CustomRenderComponent;
struct IUIRepository;
struct NinesliceInfo;
struct TextMeasureData;
namespace Core { class Path; }
namespace mce { class Color; }
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
    struct PersistentMeshItem;
    // clang-format on

    // MinecraftUIRenderContext inner types define
    struct TextItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 8>  mUnk504479;
        ::ll::UntypedStorage<4, 16> mUnk189d72;
        ::ll::UntypedStorage<8, 32> mUnk844247;
        ::ll::UntypedStorage<4, 16> mUnk803177;
        ::ll::UntypedStorage<1, 1>  mUnkbc01ca;
        ::ll::UntypedStorage<1, 1>  mUnkb392a3;
        ::ll::UntypedStorage<4, 4>  mUnkf1b65e;
        ::ll::UntypedStorage<4, 4>  mUnk607c6f;
        ::ll::UntypedStorage<4, 4>  mUnkad246d;
        ::ll::UntypedStorage<4, 4>  mUnkf8a40a;
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
        ::ll::UntypedStorage<8, 8> mUnk2cff1d;
        ::ll::UntypedStorage<4, 8> mUnk8e0ed0;
        ::ll::UntypedStorage<4, 8> mUnk5109ea;
        ::ll::UntypedStorage<4, 8> mUnka821f4;
        ::ll::UntypedStorage<4, 8> mUnk5cdb7d;
        ::ll::UntypedStorage<1, 1> mUnk9f2c40;
        // NOLINTEND

    public:
        // prevent constructor by default
        ImageItem& operator=(ImageItem const&);
        ImageItem(ImageItem const&);
        ImageItem();
    };

    struct PersistentMeshItem {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 176> mUnk2ebbdd;
        ::ll::UntypedStorage<8, 24>  mUnk8fd1b1;
        ::ll::UntypedStorage<4, 4>   mUnke729fc;
        ::ll::UntypedStorage<4, 4>   mUnka1e24d;
        ::ll::UntypedStorage<8, 16>  mUnkb037ea;
        ::ll::UntypedStorage<8, 528> mUnk375457;
        // NOLINTEND

    public:
        // prevent constructor by default
        PersistentMeshItem& operator=(PersistentMeshItem const&);
        PersistentMeshItem(PersistentMeshItem const&);
        PersistentMeshItem();

    public:
        // member functions
        // NOLINTBEGIN
        MCNAPI PersistentMeshItem(
            ::BatchKey const&                batchKey,
            ::std::vector<::mce::TexturePtr> textures,
            ::HashedString const&            materialNameHash,
            uint                             numInstances
        );
        // NOLINTEND

    public:
        // constructor thunks
        // NOLINTBEGIN
        MCNAPI void* $ctor(
            ::BatchKey const&                batchKey,
            ::std::vector<::mce::TexturePtr> textures,
            ::HashedString const&            materialNameHash,
            uint                             numInstances
        );
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::IClientInstance&>                                    mClient;
    ::ll::TypedStorage<8, 8, ::ScreenContext&>                                      mScreenContext;
    ::ll::TypedStorage<8, 32, ::MinecraftUIMeasureStrategy>                         mMeasureStrategy;
    ::ll::TypedStorage<4, 4, float>                                                 mTextAlpha;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::IUIRepository>>       mUIRepository;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>               mTextureGroup;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::mce::TextureGroup>>   mStoreCacheTextures;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftUIRenderContext::TextItem>>  mTextToDraw;
    ::ll::TypedStorage<8, 24, ::std::vector<::MinecraftUIRenderContext::ImageItem>> mImagesToDraw;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::MinecraftUIRenderContext::PersistentMeshItem>>>
                                                            mPersistentMeshes;
    ::ll::TypedStorage<1, 1, uchar>                         mStencilRef;
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

    MCAPI float _getTextAlignmentPosition(::MinecraftUIRenderContext::TextItem const& textItem) const;

    MCAPI void
    _renderTextAligned(::MinecraftUIRenderContext::TextItem const& textItem, float tx, float ty, bool forceUseCache);

    MCAPI void
    _splitTextItemText(::MinecraftUIRenderContext::TextItem const& textItem, ::std::vector<::std::string>& lines) const;
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
    MCAPI int $getLineLength(::Font& font, ::std::string const& text, float fontSize, bool showColorSymbol) const;

    MCFOLD float $getTextAlpha() const;

    MCAPI void $setTextAlpha(float alpha);

    MCAPI void $drawDebugText(
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCAPI void $drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    );

    MCAPI void $flushText(float deltaTime, ::std::optional<float> obfuscateSwitchTime);

    MCAPI void $drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    );

    MCAPI void $drawNineslice(::mce::ClientTexture const& texture, ::NinesliceInfo const& info);

    MCAPI void $flushImages(::mce::Color const& color, float alpha, ::HashedString const& materialNameHash);

    MCAPI ::mce::TexturePtr $getTexture(::ResourceLocation const& resourceLocation, bool forceReload) const;

    MCAPI ::mce::TexturePtr $getZippedTexture(
        ::Core::Path const&       zippedFolderPath,
        ::ResourceLocation const& resourceLocation,
        bool                      forceReload
    ) const;

    MCAPI bool $unloadTexture(::ResourceLocation const& resourceLocation);

    MCAPI ::UITextureInfoPtr $getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload) const;

    MCAPI void $touchTexture(::ResourceLocation const& resourceLocation);

    MCAPI void $beginSharedMeshBatch(::ComponentRenderBatch& renderBatch);

    MCAPI void $endSharedMeshBatch(::ComponentRenderBatch& renderBatch);

    MCAPI void $reserveSharedMeshBatch(uint64 vertexCount);

    MCAPI uint64 $getSharedMeshBatchVertexCount() const;

    MCAPI void $drawRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha, int thickness);

    MCAPI void $fillRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha);

    MCAPI void $increaseStencilRef();

    MCAPI void $decreaseStencilRef();

    MCAPI void $resetStencilRef();

    MCAPI void $fillRectangleStencil(::RectangleArea const& rect);

    MCAPI void $enableScissorTest(::RectangleArea const& rect);

    MCAPI void $disableScissorTest();

    MCAPI void $setClippingRectangle(::RectangleArea const& rect);

    MCAPI void $setFullClippingRectangle();

    MCAPI void $saveCurrentClippingRectangle();

    MCAPI void $restoreSavedClippingRectangle();

    MCAPI ::RectangleArea $getFullClippingRectangle() const;

    MCAPI void $cleanup();

    MCAPI void $removePersistentMeshes();

    MCFOLD ::UIMeasureStrategy& $getMeasureStrategy();

    MCAPI void $snapImageSizeToGrid(::glm::vec2& size) const;

    MCAPI void $snapImagePositionToGrid(::glm::vec2& position) const;

    MCAPI void $notifyImageEstimate(uint64 imageCount);

    MCAPI bool $updateCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer);

    MCAPI void $renderCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer, int pass);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
