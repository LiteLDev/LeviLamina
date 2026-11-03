#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Font;
class ResourceLoadManager;
class ResourceLocation;
namespace Core { class Path; }
namespace mce { class TextureGroup; }
// clang-format on

class FontRepository : public ::AppPlatformListener, public ::Bedrock::EnableNonOwnerReferences {
public:
    // FontRepository inner types define
    using NonNullFontPtr = ::gsl::not_null<::std::shared_ptr<::Font>>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                       mIsInitialized;
    ::ll::TypedStorage<8, 24, ::std::vector<::gsl::not_null<::std::shared_ptr<::Font>>>> mLoadedFonts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<::std::string, uint64>>               mFontNameToIdentifier;
    ::ll::TypedStorage<8, 8, uint64>                                                     mDefaultFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                     mRuneFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                     mUnicodeFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                     mSmoothFontLatinFontId;
    ::ll::TypedStorage<8, 8, uint64>        mSmoothFontWithHangulFallbackFontId;
    ::ll::TypedStorage<8, 8, uint64>        mUIFontId;
    ::ll::TypedStorage<8, 8, uint64>        mSmoothSmallFontID;
    ::ll::TypedStorage<8, 80, ::FontHandle> mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle> mRuneFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle> mUnicodeFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle> mSmoothFontLatinHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle> mUIFontHandle;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::Font>>> mOriginalMinecraftFonts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::Font>>> mOverriddenFonts;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Threading::Async<void>>>        mFontLoadingTaskTrackers;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::mce::TextureGroup>>                  mFontTextureGroup;
    ::ll::TypedStorage<8, 32, ::std::string>                                           mLanguageCode;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager>>    mResourceLoadManager;
    ::ll::TypedStorage<1, 1, bool>                                                     mIsOnLowMemoryDevice;
    ::ll::TypedStorage<1, 1, bool>                                                     mHasLoggedFontLoadFailure;
    ::ll::TypedStorage<1, 1, bool> mHasLoggedMissingSmoothFontWithHangulFallback;
    // NOLINTEND

public:
    // prevent constructor by default
    FontRepository();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~FontRepository() /*override*/ = default;

    virtual void onAppSuspended() /*override*/;

    virtual void onDeviceLost() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI FontRepository(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> manager, bool isOnLowMemoryDevice);

    MCNAPI void _queueBitmapFont(
        ::std::string const&                 alias,
        ::Core::Path const&                  asciiName,
        ::Core::Path const&                  unicodeName,
        ::std::weak_ptr<::mce::TextureGroup> textureGroupWeakPtr,
        uchar                                asciiSheetCount
    );

    MCNAPI void _queueMsdfFont(
        ::std::string const&                 alias,
        ::Core::Path const&                  fontPagePrefix,
        ::std::weak_ptr<::mce::TextureGroup> textureGroupWeakPtr
    );

    MCNAPI void _setDefaultFont(::std::string const& fontName, uint64 const fontId, ::std::shared_ptr<::Font> font);

    MCNAPI void _setFontIfOverride(uint64 const fontId, ::std::shared_ptr<::Font> font);

    MCNAPI void
    _setMinecraftSmoothFontStyle(float guiScale, ::std::string const& languageCode, bool supportsCjkSmoothFont);

    MCNAPI uint64 addPreloadedFont(::std::string const& fontName, ::gsl::not_null<::std::shared_ptr<::Font>> font);

    MCAPI ::FontHandle getFontFromFontType(::std::string const& fontType) const;

    MCNAPI ::FontHandle getFontHandle(uint64 const fontId);

    MCNAPI uint64 getFontIdentifier(::std::string const& fontName);

    MCNAPI ::std::vector<::ResourceLocation> getReloadFontTextures() const;

    MCNAPI bool haveDefaultFontsLoaded();

    MCNAPI void initDefaultFontHandles();

    MCNAPI bool isRepositoryInitialized();

    MCNAPI void loadDefaultFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void onLanguageChanged(::std::string const& languageCode);

    MCNAPI void parseAndLoadMetadataFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCNAPI void reloadFontTextures(bool blockingLoad);

    MCNAPI void setMinecraftUIFontStyle(::std::string const& languageCode);

    MCNAPI void setUseFontOverrides(bool useOverrides);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static uint64& INVALID_FONT();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Bedrock::NotNullNonOwnerPtr<::ResourceLoadManager> manager, bool isOnLowMemoryDevice);
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI void $onAppSuspended();

    MCNAPI void $onDeviceLost();
    // NOLINTEND
};
