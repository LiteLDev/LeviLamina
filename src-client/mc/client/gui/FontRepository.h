#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontHandle;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
// clang-format on

class FontRepository : public ::AppPlatformListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnk3ee564;
    ::ll::UntypedStorage<8, 24> mUnkf072cf;
    ::ll::UntypedStorage<8, 64> mUnk84aa87;
    ::ll::UntypedStorage<8, 8>  mUnk56c2d2;
    ::ll::UntypedStorage<8, 8>  mUnkfc28f4;
    ::ll::UntypedStorage<8, 8>  mUnk9bc0d4;
    ::ll::UntypedStorage<8, 8>  mUnk5e8073;
    ::ll::UntypedStorage<8, 8>  mUnk76b378;
    ::ll::UntypedStorage<8, 8>  mUnkb58b58;
    ::ll::UntypedStorage<8, 64> mUnk7d2c03;
    ::ll::UntypedStorage<8, 64> mUnk5c7d20;
    ::ll::UntypedStorage<8, 24> mUnkfacaf1;
    ::ll::UntypedStorage<8, 32> mUnk45e53a;
    // NOLINTEND

public:
    // prevent constructor by default
    FontRepository& operator=(FontRepository const&);
    FontRepository(FontRepository const&);

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontRepository() /*override*/;

    virtual void onAppSuspended() /*override*/;

    virtual void onDeviceLost() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FontRepository();

    MCNAPI void _queueBitmapFont(
        ::std::string const&                 alias,
        ::Core::Path const&                  asciiName,
        ::Core::Path const&                  unicodeName,
        ::std::weak_ptr<::mce::TextureGroup> textureGroupWeakPtr
    );

    MCNAPI void _queueMsdfFont(
        ::std::string const&                 alias,
        ::Core::Path const&                  fontPagePrefix,
        ::std::weak_ptr<::mce::TextureGroup> textureGroupWeakPtr
    );

    MCNAPI void _setDefaultFont(::std::string const& fontName, uint64 fontId, ::std::shared_ptr<::Font> font);

    MCNAPI void _setFontIfOverride(uint64 fontId, ::std::shared_ptr<::Font> font);

    MCNAPI uint64 addPreloadedFont(::std::string const& fontName, ::std::shared_ptr<::Font> font);

    MCNAPI void getDefaultFontHandles(
        ::FontHandle& defaultFontHandle,
        ::FontHandle& runeFontHandle,
        ::FontHandle& unicodeFontHandle,
        ::FontHandle& smoothLatinFontHandle,
        ::FontHandle& uiFontHandle
    );

    MCNAPI void loadDefaultFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void parseAndLoadMetadataFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void prepForShutdown();

    MCNAPI void reloadFontTextures(bool blockingLoad);

    MCNAPI void resetPerFontData();

    MCNAPI void setFont(uint64 fontId, ::std::shared_ptr<::Font> font);

    MCNAPI void setMinecraftUIFontStyle(::std::string const& languageCode);

    MCNAPI void setUseFontOverrides(bool useOverrides);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static uint64& INVALID_FONT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onDeviceLost();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
