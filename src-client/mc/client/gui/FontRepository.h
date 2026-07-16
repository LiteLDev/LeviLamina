#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/FontHandle.h"
#include "mc/deps/application/AppPlatformListener.h"
#include "mc/deps/core/threading/Async.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
class Font;
class ResourceLocation;
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
    ::ll::TypedStorage<8, 8, uint64>                                                     mUIFontId;
    ::ll::TypedStorage<8, 8, uint64>                                                     mSmoothSmallFontID;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                              mFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                              mRuneFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                              mUnicodeFontHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                              mSmoothFontLatinHandle;
    ::ll::TypedStorage<8, 80, ::FontHandle>                                              mUIFontHandle;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::Font>>>   mOriginalMinecraftFonts;
    ::ll::TypedStorage<8, 64, ::std::unordered_map<uint64, ::std::shared_ptr<::Font>>>   mOverriddenFonts;
    ::ll::TypedStorage<8, 24, ::std::vector<::Bedrock::Threading::Async<void>>>          mFontLoadingTaskTrackers;
    ::ll::TypedStorage<8, 32, ::std::string>                                             mLanguageCode;
    // NOLINTEND

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
    MCAPI FontRepository();

    MCAPI ::FontHandle getFontFromFontType(::std::string const& fontType) const;

    MCAPI ::std::vector<::ResourceLocation> getReloadFontTextures() const;

    MCAPI void initDefaultFontHandles();

    MCAPI void loadDefaultFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void onLanguageChanged(::std::string const& languageCode);

    MCAPI void parseAndLoadMetadataFonts(::std::shared_ptr<::mce::TextureGroup> textureGroup);

    MCAPI void reloadFontTextures(bool blockingLoad);

    MCAPI void setMinecraftSmoothFontStyle(float guiScale, ::std::string const&);

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
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
