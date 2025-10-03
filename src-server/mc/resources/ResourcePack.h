#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/ResourceSignature.h"

// auto generated forward declare list
// clang-format off
class Pack;
class PackAccessStrategy;
struct SubpackInfo;
namespace Core { class Path; }
// clang-format on

class ResourcePack {
public:
    // ResourcePack inner types define
    using Callback = ::std::function<void(::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                              mHidden;
    ::ll::TypedStorage<1, 1, bool>                                              mError;
    ::ll::TypedStorage<8, 16, ::gsl::not_null<::std::shared_ptr<::Pack>>>       mPack;
    ::ll::TypedStorage<8, 8, ::std::unique_ptr<::PackAccessStrategy>>           mSubpackAccessStrategy;
    ::ll::TypedStorage<8, 248, ::PackReport>                                    mPackReport;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::Pack>>>         mSubPacks;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::ResourcePack>>> mSubResourcePacks;
    ::ll::TypedStorage<8, 32, ::Core::PathBuffer<::std::string>>                mIconPath;
    ::ll::TypedStorage<8, 8, double>                                            mLoadTime;
    ::ll::TypedStorage<1, 1, bool>                                              mIsBaseGamePack;
    ::ll::TypedStorage<1, 1, bool>                                              mIsSlicePack;
    ::ll::TypedStorage<8, 64, ::ResourceSignature>                              mResourceSignature;
    ::ll::TypedStorage<1, 1, bool>                                              mIsMarkedForRemoval;
    // NOLINTEND

public:
    // prevent constructor by default
    ResourcePack();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit ResourcePack(::gsl::not_null<::std::shared_ptr<::Pack>> pack);

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

    MCAPI void generateAssetSet();

    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream, int subpackIndex) const;

    MCAPI bool hasResource(::Core::Path const& resourceName, int subpackIndex) const;

    MCAPI bool isAssetExtractionViable() const;

    MCAPI void setLocale(::std::string const& code);

    MCAPI ~ResourcePack();
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
    MCAPI void* $ctor(::gsl::not_null<::std::shared_ptr<::Pack>> pack);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
