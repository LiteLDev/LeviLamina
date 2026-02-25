#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Font;
class FontHandle;
class ResourceLocation;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
// clang-format on

class FontRepository : public ::AppPlatformListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                     mIsInitialized;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Font>>>                mLoadedFonts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, uint64>>             mFontNameToIdentifier;
    ::ll::TypedStorage<8, 8, uint64>                                                   mDefaultFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                   mRuneFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                   mUnicodeFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                   mSmoothFontLatinFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                   mUIFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                   mSmoothSmallFontID;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::Font>>> mOriginalMinecraftFonts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::Font>>> mOverriddenFonts;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Threading::Async<void>>>        mFontLoadingTaskTrackers;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mLanguageCode;
    // NOLINTEND

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
    MCAPI FontRepository();

    MCAPI void _queueBitmapFont(
        ::std::string const&                 alias,
        ::Core::Path const&                  asciiName,
        ::Core::Path const&                  unicodeName,
        ::std::weak_ptr<::mce::TextureGroup> textureGroupWeakPtr
    );

    MCAPI void _queueMsdfFont(
        ::std::string const&                 alias,
        ::Core::Path const&                  fontPagePrefix,
        ::std::weak_ptr<::mce::TextureGroup> textureGroupWeakPtr
    );

    MCAPI void _setDefaultFont(::std::string const& fontName, uint64 fontId, ::std::shared_ptr<::Font> font);

    MCAPI void _setFontIfOverride(uint64 fontId, ::std::shared_ptr<::Font> font);

    MCAPI uint64 addPreloadedFont(::std::string const& fontName, ::std::shared_ptr<::Font> font);

    MCAPI void getDefaultFontHandles(
        ::FontHandle& defaultFontHandle,
        ::FontHandle& runeFontHandle,
        ::FontHandle& unicodeFontHandle,
        ::FontHandle& smoothLatinFontHandle,
        ::FontHandle& uiFontHandle
    );

    MCAPI uint64 getFontIdentifier(::std::string const& fontName);

    MCAPI ::std::vector<::ResourceLocation> getReloadFontTextures() const;

    MCAPI void loadDefaultFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void onLanguageChanged(::std::string const& languageCode);

    MCAPI void parseAndLoadMetadataFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void prepForShutdown();

    MCAPI void reloadFontTextures(bool blockingLoad);

    MCAPI void resetPerFontData();

    MCAPI void setFont(uint64 fontId, ::std::shared_ptr<::Font> font);

    MCAPI void setMinecraftUIFontStyle(::std::string const& languageCode);

    MCAPI void setUseFontOverrides(bool useOverrides);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64& INVALID_FONT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $onAppSuspended();

    MCAPI void $onDeviceLost();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftableForAppPlatformListener();

    MCNAPI static void** $vftableForEnableNonOwnerReferences();
    // NOLINTEND
};
