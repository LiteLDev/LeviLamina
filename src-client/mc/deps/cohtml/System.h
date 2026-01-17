#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/FontSDF.h"
#include "mc/deps/cohtml/IAsyncResourceResponse.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class SystemCacheStats; }
namespace cohtml { class SystemRenderer; }
namespace cohtml { class View; }
namespace cohtml { struct FontDescription; }
namespace cohtml { struct GamepadState; }
namespace cohtml { struct GamepadStateExtended; }
namespace cohtml { struct SystemRendererSettings; }
namespace cohtml { struct SystemRendererSettingsWithExternalRenderingLibrary; }
namespace cohtml { struct UserFontDescription; }
namespace cohtml { struct ViewSettings; }
// clang-format on

namespace cohtml {

class System {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual uint GetId() = 0;

    virtual void SetId(uint) = 0;

    virtual ~System() = default;

    virtual ::cohtml::View* CreateView(::cohtml::ViewSettings const&) = 0;

    virtual ::cohtml::SystemCacheStats* GetSystemCacheStats() const = 0;

    virtual void ClearCachedUnusedImages() = 0;

    virtual ::cohtml::SystemRenderer* CreateSystemRenderer(::cohtml::SystemRendererSettings const&) = 0;

    virtual ::cohtml::SystemRenderer* CreateSystemRendererWithExternalRenderingLibrary(
        ::cohtml::SystemRendererSettingsWithExternalRenderingLibrary const&
    ) = 0;

    virtual void AddFontsFromFolder_DEPRECATED(char const*) = 0;

    virtual void RegisterFont(char const*, ::cohtml::FontDescription const&, ::cohtml::Fonts::FontSDF) = 0;

    virtual void AddUserFont(char const**, uint*, uint, ::cohtml::UserFontDescription const&) = 0;

    virtual void
    AddUserFont(::cohtml::IAsyncResourceResponse::UserImageData const*, uint, ::cohtml::UserFontDescription const&) = 0;

    virtual void SetDefaultFallbackFontName_DEPRECATED(char const*) = 0;

    virtual void Destroy() = 0;

    virtual void Advance(double) = 0;

    virtual void RegisterGamepad(uint, char const*, uint, uint, void*) = 0;

    virtual void UnregisterGamepad(uint) = 0;

    virtual void UpdateGamepadState(::cohtml::GamepadState const&) = 0;

    virtual void UpdateGamepadStateExtended(::cohtml::GamepadStateExtended const&) = 0;

    virtual void UserImagesChanged(uint const*, uint) = 0;

    virtual void PreloadAndCacheStylesheet(char const*) = 0;

    virtual bool RemoveStylesheetCacheEntry(char const*) = 0;

    virtual void ClearStylesheetCache() = 0;

    virtual void PreloadAndCacheHTML(char const*) = 0;

    virtual bool RemoveHTMLCacheEntry(char const*) = 0;

    virtual void ClearHTMLCache() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
