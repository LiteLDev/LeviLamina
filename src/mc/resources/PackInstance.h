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
    ::ll::TypedStorage<8, 248, ::PackReport>                              mPackReport;
    ::ll::TypedStorage<8, 8, ::PackSettings*>                             mPackSettings;
    ::ll::TypedStorage<8, 24, ::Bedrock::NonOwnerPointer<::ResourcePack>> mPack;
    ::ll::TypedStorage<4, 16, ::PackStats>                                mStats;
    ::ll::TypedStorage<4, 4, int>                                         mSubpackIndex;
    // NOLINTEND

public:
    // prevent constructor by default
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

    MCAPI ::std::string const& getFolderName() const;

    MCAPI ::PackManifest const& getManifest() const;

    MCAPI ::PackCategory getPackCategory() const;

    MCAPI ::mce::UUID const getPackId() const;

    MCAPI ::PackOrigin getPackOrigin() const;

    MCAPI ::std::string const& getSubpackFolderName() const;

    MCAPI ::SemVersion const& getVersion() const;

    MCAPI bool isBaseGamePack() const;

    MCAPI ::Bedrock::Resources::PreloadedPathHandle preloadPath(::Core::Path const& packRelativePath) const;

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
