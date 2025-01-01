#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/resource/PackType.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PackAccessStrategy;
class PackManifest;
class PackReport;
class ResourceLocation;
class ResourceSignature;
class SemVersion;
struct SubpackInfo;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class ResourcePack : public ::Bedrock::EnableNonOwnerReferences {
public:
    // ResourcePack inner types define
    using Callback = ::std::function<void(::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mHidden;
    ::ll::TypedStorage<1, 1, bool>                                              mError;
    ::ll::TypedStorage<8, 24, ::Bedrock::NotNullNonOwnerPtr<::Pack>>            mPack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>           mSubpackAccessStrategy;
    ::ll::TypedStorage<8, 432, ::PackReport>                                    mPackReport;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::Pack>>>         mSubPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::unique_ptr<::ResourcePack>>> mSubResourcePacks;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mIconPath;
    ::ll::TypedStorage<8, 8, double>                                            mLoadTime;
    ::ll::TypedStorage<1, 1, bool>                                              mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSlicePack;
    ::ll::TypedStorage<8, 64, ::ResourceSignature>                              mResourceSignature;
    ::ll::TypedStorage<1, 1, bool>                                              mIsMarkedForRemoval;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResourcePack() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourcePack(::Pack& pack);

    MCAPI void _createSubpack(::SubpackInfo const& subpackInfo);

    MCAPI void _createSubpacks();

    MCAPI void _generateIconPath();

    MCAPI bool areKnownFilesValid();

    MCAPI void forEachIn(
        ::Core::Path const&                        filePath,
        ::std::function<void(::Core::Path const&)> callback,
        int                                        subpackIndex,
        bool                                       recurseAnyways
    ) const;

    MCAPI void
    forEachInAssetSet(::Core::Path const& filePath, ::std::function<void(::Core::Path const&)> callback) const;

    MCAPI void generateAssetSet();

    MCAPI ::PackManifest& getManifest();

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::mce::UUID const& getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream, int subpackIndex) const;

    MCAPI ::ResourceLocation const& getResourceLocation() const;

    MCAPI ::SemVersion const& getVersion() const;

    MCAPI bool hasResource(::Core::Path const& resourceName, int subpackIndex) const;

    MCAPI bool isAssetExtractionViable() const;

    MCAPI bool isType(::PackType packType) const;

    MCAPI bool isZipped() const;

    MCAPI void markForRemoval();

    MCAPI ::Bedrock::Resources::PreloadedPathHandle preloadPath(::Core::Path const& packRelativePath) const;

    MCAPI void setAsSlicePack();

    MCAPI void setError();

    MCAPI void setLocale(::std::string const& code);

    MCAPI void unregisterDeleteCallback(void* owner);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_BUG_ICON_PATH();

    MCAPI static ::Core::PathBuffer<::std::string> const& RESOURCE_PACK_ICON_PATH();

    MCAPI static ::Core::PathBuffer<::std::string> const& TEXTURES_LIST_PATH();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Pack& pack);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
