#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/PathBuffer.h"
#include "mc/deps/core/resource/PackCategory.h"
#include "mc/deps/core/resource/PackOrigin.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class ContentTierInfo;
class PackManifest;
class PackReport;
class PackSettings;
class PackStats;
class ResourceLocation;
class ResourcePack;
class SemVersion;
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
    ::ll::TypedStorage<8, 432, ::PackReport>                              mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                             mPackSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePack>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                mStats;
    ::ll::TypedStorage<4, 4, int>                                         mSubpackIndex;
    // NOLINTEND

public:
    // prevent constructor by default
    PackInstance(PackInstance const&);
    PackInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI PackInstance(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        int                                           subpackIndex,
        bool                                          isDependent,
        ::PackSettings*                               packSettings
    );

    MCAPI PackInstance(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        ::std::string const&                          subpackName,
        bool                                          isDependent,
        ::PackSettings*                               packSettings
    );

    MCAPI void
    forEachIn(::Core::Path const& path, ::std::function<void(::Core::Path const&)> callback, bool recurseAnyways) const;

    MCAPI void forEachInAssetSet(::Core::Path const& path, ::std::function<void(::Core::Path const&)> callback) const;

    MCAPI ::std::string const& getFolderName() const;

    MCAPI double getLoadTime() const;

    MCAPI ::PackManifest const& getManifest() const;

    MCAPI ::PackManifest& getManifest();

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::mce::UUID const getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI ::PackStats const& getPackStats() const;

    MCAPI ::PackStats& getPackStats();

    MCAPI ::Core::PathBuffer<::std::string> const& getRelativePathWithinZip() const;

    MCAPI bool getResource(::Core::Path const& resourceName, ::std::string& resourceStream) const;

    MCAPI ::ResourceLocation const& getResourceLocation() const;

    MCAPI ::std::string const& getSubpackFolderName() const;

    MCAPI ::ContentTierInfo getTierInfo() const;

    MCAPI ::SemVersion const& getVersion() const;

    MCAPI bool hasResource(::Core::Path const& resourceName) const;

    MCAPI bool isBaseGamePack() const;

    MCAPI bool isSlicePack() const;

    MCAPI bool isZipped() const;

    MCAPI ::PackInstance& operator=(::PackInstance const&);

    MCAPI ~PackInstance();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        int                                           subpackIndex,
        bool                                          isDependent,
        ::PackSettings*                               packSettings
    );

    MCAPI void* $ctor(
        ::Bedrock::NotNullNonOwnerPtr<::ResourcePack> pack,
        ::std::string const&                          subpackName,
        bool                                          isDependent,
        ::PackSettings*                               packSettings
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
