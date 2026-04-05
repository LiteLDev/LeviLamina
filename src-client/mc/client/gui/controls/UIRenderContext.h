#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TextAlignment.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class CustomRenderComponent;
class Font;
class HashedString;
class RectangleArea;
class ResourceLocation;
class UIMeasureStrategy;
class UITextureInfoPtr;
struct CaretMeasureData;
struct NinesliceInfo;
struct TextMeasureData;
namespace Core { class Path; }
namespace mce { class Color; }
namespace mce { class TexturePtr; }
namespace mce { struct ClientTexture; }
// clang-format on

class UIRenderContext {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~UIRenderContext() = default;

    virtual int getLineLength(::Font& font, ::std::string const& text, float fontSize, bool showColorSymbol) const = 0;

    virtual float getTextAlpha() const = 0;

    virtual void setTextAlpha(float alpha) = 0;

    virtual void drawDebugText(
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) = 0;

    virtual void drawText(
        ::Font&                   font,
        ::RectangleArea const&    rect,
        ::std::string&&           text,
        ::mce::Color const&       color,
        float                     alpha,
        ::ui::TextAlignment       alignment,
        ::TextMeasureData const&  textData,
        ::CaretMeasureData const& caretData
    ) = 0;

    virtual void flushText(float deltaTime, ::std::optional<float> obfuscateSwitchTime) = 0;

    virtual void drawImage(
        ::mce::ClientTexture const& texture,
        ::glm::vec2 const&          position,
        ::glm::vec2 const&          size,
        ::glm::vec2 const&          uv,
        ::glm::vec2 const&          uvSize,
        bool const                  colorCorrected
    ) = 0;

    virtual void drawNineslice(::mce::ClientTexture const& texture, ::NinesliceInfo const& info) = 0;

    virtual void flushImages(::mce::Color const& color, float alpha, ::HashedString const& materialNameHash) = 0;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch& renderBatch) = 0;

    virtual void endSharedMeshBatch(::ComponentRenderBatch& renderBatch) = 0;

    virtual void reserveSharedMeshBatch(uint64 vertexCount) = 0;

    virtual uint64 getSharedMeshBatchVertexCount() const = 0;

    virtual void drawRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha, int thickness) = 0;

    virtual void fillRectangle(::RectangleArea const& rect, ::mce::Color const& color, float alpha) = 0;

    virtual void increaseStencilRef() = 0;

    virtual void decreaseStencilRef() = 0;

    virtual void resetStencilRef() = 0;

    virtual void fillRectangleStencil(::RectangleArea const& rect) = 0;

    virtual void enableScissorTest(::RectangleArea const& rect) = 0;

    virtual void disableScissorTest() = 0;

    virtual void setClippingRectangle(::RectangleArea const& rect) = 0;

    virtual void setFullClippingRectangle() = 0;

    virtual void saveCurrentClippingRectangle() = 0;

    virtual void restoreSavedClippingRectangle() = 0;

    virtual ::RectangleArea getFullClippingRectangle() const = 0;

    virtual bool updateCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer) = 0;

    virtual void renderCustom(::gsl::not_null<::CustomRenderComponent*> customRenderer, int pass) = 0;

    virtual void cleanup() = 0;

    virtual void removePersistentMeshes() = 0;

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const& resourceLocation, bool forceReload) const = 0;

    virtual ::mce::TexturePtr getZippedTexture(
        ::Core::Path const&       zippedFolderPath,
        ::ResourceLocation const& resourceLocation,
        bool                      forceReload
    ) const = 0;

    virtual bool unloadTexture(::ResourceLocation const& resourceLocation) = 0;

    virtual ::UITextureInfoPtr getUITextureInfo(::ResourceLocation const& resourceLocation, bool forceReload) const = 0;

    virtual void touchTexture(::ResourceLocation const& resourceLocation) = 0;

    virtual ::UIMeasureStrategy& getMeasureStrategy() = 0;

    virtual void snapImageSizeToGrid(::glm::vec2& size) const = 0;

    virtual void snapImagePositionToGrid(::glm::vec2& position) const = 0;

    virtual void notifyImageEstimate(uint64 imageCount) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
