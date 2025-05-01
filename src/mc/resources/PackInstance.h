#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/PackReport.h"
#include "mc/resources/PackStats.h"

// auto generated forward declare list
// clang-format off
class PackManifest;
class PackSettings;
class ResourcePack;
class SemVersion;
namespace Bedrock::Resources { class PreloadedPathHandle; }
namespace Core { class Path; }
namespace mce { class UUID; }
// clang-format on

class PackInstance {
public:
    // PackInstance inner types define
    using Callback = ::std::function<void(::Core::Path const&)>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 256, ::PackReport>                              mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                             mPackSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePack>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                mStats;
    ::ll::TypedStorage<4, 4, int>                                         mSubpackIndex;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI PackInstance(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        int                                           subpackIndex,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );

    MCNAPI PackInstance(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        ::std::string const&                          subpackName,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );

    MCNAPI void forEachInAssetSet(::Core::Path const& path, ::std::function<void(::Core::Path const&)> callback) const;

    MCNAPI ::std::string const& getFolderName() const;

    MCNAPI ::PackManifest const& getManifest() const;

    MCNAPI ::PackManifest& getManifest();

    MCNAPI ::PackCategory getPackCategory() const;

    MCNAPI ::mce::UUID const getPackId() const;

    MCNAPI ::PackOrigin getPackOrigin() const;

    MCNAPI ::std::string const& getSubpackFolderName() const;

    MCNAPI ::SemVersion const& getVersion() const;

    MCNAPI bool isBaseGamePack() const;

    MCNAPI ::Bedrock::Resources::PreloadedPathHandle preloadPath(::Core::Path const& packRelativePath) const;

    MCNAPI ~PackInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        int                                           subpackIndex,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );

    MCNAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        ::std::string const&                          subpackName,
        bool                                          packSettings,
        ::PackSettings*                               isDependent
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
