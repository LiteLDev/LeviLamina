#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/ResourceLocation.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/deps/core_graphics/file_watcher/FileWatcherHandle.h"
#include "mc/world/actor/player/SerializedSkinRef.h"

// auto generated forward declare list
// clang-format off
class MinecraftGraphics;
class SkinPack;
struct FileWatcherUpdate;
namespace Core { class Path; }
namespace mce { struct Image; }
// clang-format on

class Skin {
public:
    // Skin inner types define
    enum class SkinType : int {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mSkinTextureName;
    ::ll::TypedStorage<8, 8, ::SkinPack const*>                       mSkinPack;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::FileWatcherUpdate>> mFileWatcherUpdate;
    ::ll::TypedStorage<8, 32, ::std::string>                          mName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mLocName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mSerializableName;
    ::ll::TypedStorage<8, 32, ::std::string>                          mSerializableLegacyName;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>      mCapeTextureName;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mSkinImageLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mCapeImageLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mAnimationsLocation;
    ::ll::TypedStorage<8, 56, ::ResourceLocation>                     mAnimationControllersLocation;
    ::ll::TypedStorage<4, 4, ::Skin::SkinType>                        mSkinType;
    ::ll::TypedStorage<8, 16, ::mce::FileWatcherHandle>               mSkinFileWatcherHandle;
    ::ll::TypedStorage<8, 16, ::mce::FileWatcherHandle>               mCapeFileWatcherHandle;
    ::ll::TypedStorage<4, 4, int>                                     mSkinIndex;
    ::ll::TypedStorage<8, 8, ::std::chrono::steady_clock::time_point> mLastUpdated;
    ::ll::TypedStorage<1, 1, bool>                                    mIsCapeOnClassicSkin;
    ::ll::TypedStorage<8, 32, ::std::string>                          mCapeId;
    ::ll::TypedStorage<8, 16, ::SerializedSkinRef>                    mSerializedSkin;
    // NOLINTEND

public:
    // prevent constructor by default
    Skin& operator=(Skin const&);
    Skin();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI Skin(::Skin const& rhs);

    MCNAPI Skin(::Skin&& rhs);

    MCNAPI Skin(
        ::SkinPack&          skinPack,
        ::std::string const& name,
        ::Core::Path const&  skinTextureName,
        ::Core::Path const&  capeTextureName,
        ::std::string const& skinTypeName,
        ::SerializedSkinRef  skinInfo,
        int                  skinIndex
    );

    MCNAPI ::mce::Image const*
    getCapeImage(::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> const& minecraftGraphics, bool isPlayer) const;

    MCNAPI ::std::string getNameWithCapeIdAppended() const;

    MCNAPI ::mce::Image const*
    getSkinImage(::Bedrock::NotNullNonOwnerPtr<::MinecraftGraphics> const& minecraftGraphics) const;

    MCNAPI bool isCustomSkin() const;

    MCNAPI void setCapeTextureName(::std::string const& capeId, ::std::string const& capeTextureName);

    MCNAPI ~Skin();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::Skin const& rhs);

    MCNAPI void* $ctor(::Skin&& rhs);

    MCNAPI void* $ctor(
        ::SkinPack&          skinPack,
        ::std::string const& name,
        ::Core::Path const&  skinTextureName,
        ::Core::Path const&  capeTextureName,
        ::std::string const& skinTypeName,
        ::SerializedSkinRef  skinInfo,
        int                  skinIndex
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
