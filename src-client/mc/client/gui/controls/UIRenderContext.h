#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/TextAlignment.h"

// auto generated forward declare list
// clang-format off
class ComponentRenderBatch;
class Font;
class HashedString;
class RectangleArea;
class ResourceLocation;
class UIMeasureStrategy;
class UITextureInfoPtr;
struct CaretMeasureData;
struct CustomRenderComponent;
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

    virtual int getLineLength(::Font&, ::std::string const&, float, bool) const = 0;

    virtual float getTextAlpha() const = 0;

    virtual void setTextAlpha(float) = 0;

    virtual void drawDebugText(
        ::RectangleArea const&,
        ::std::string&&,
        ::mce::Color const&,
        float,
        ::ui::TextAlignment,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) = 0;

    virtual void drawText(
        ::Font&,
        ::RectangleArea const&,
        ::std::string&&,
        ::mce::Color const&,
        float,
        ::ui::TextAlignment,
        ::TextMeasureData const&,
        ::CaretMeasureData const&
    ) = 0;

    virtual void flushText(float, ::std::optional<float>) = 0;

    virtual void drawImage(
        ::mce::ClientTexture const&,
        ::glm::vec2 const&,
        ::glm::vec2 const&,
        ::glm::vec2 const&,
        ::glm::vec2 const&,
        bool const
    ) = 0;

    virtual void drawNineslice(::mce::ClientTexture const&, ::NinesliceInfo const&) = 0;

    virtual void flushImages(::mce::Color const&, float, ::HashedString const&) = 0;

    virtual void beginSharedMeshBatch(::ComponentRenderBatch&) = 0;

    virtual void endSharedMeshBatch(::ComponentRenderBatch&) = 0;

    virtual void reserveSharedMeshBatch(uint64) = 0;

    virtual uint64 getSharedMeshBatchVertexCount() const = 0;

    virtual void drawRectangle(::RectangleArea const&, ::mce::Color const&, float, int) = 0;

    virtual void fillRectangle(::RectangleArea const&, ::mce::Color const&, float) = 0;

    virtual void increaseStencilRef() = 0;

    virtual void decreaseStencilRef() = 0;

    virtual void resetStencilRef() = 0;

    virtual void fillRectangleStencil(::RectangleArea const&) = 0;

    virtual void enableScissorTest(::RectangleArea const&) = 0;

    virtual void disableScissorTest() = 0;

    virtual void setClippingRectangle(::RectangleArea const&) = 0;

    virtual void setFullClippingRectangle() = 0;

    virtual void saveCurrentClippingRectangle() = 0;

    virtual void restoreSavedClippingRectangle() = 0;

    virtual ::RectangleArea getFullClippingRectangle() const = 0;

    virtual bool updateCustom(::gsl::not_null<::CustomRenderComponent*>) = 0;

    virtual void renderCustom(::gsl::not_null<::CustomRenderComponent*>, int) = 0;

    virtual void cleanup() = 0;

    virtual void removePersistentMeshes() = 0;

    virtual ::mce::TexturePtr getTexture(::ResourceLocation const&, bool) const = 0;

    virtual ::mce::TexturePtr getZippedTexture(::Core::Path const&, ::ResourceLocation const&, bool) const = 0;

    virtual bool unloadTexture(::ResourceLocation const&) = 0;

    virtual ::UITextureInfoPtr getUITextureInfo(::ResourceLocation const&, bool) const = 0;

    virtual void touchTexture(::ResourceLocation const&) = 0;

    virtual ::UIMeasureStrategy& getMeasureStrategy() = 0;

    virtual void snapImageSizeToGrid(::glm::vec2&) const = 0;

    virtual void snapImagePositionToGrid(::glm::vec2&) const = 0;

    virtual void notifyImageEstimate(uint64) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
