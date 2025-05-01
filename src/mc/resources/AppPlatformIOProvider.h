#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/resources/IPackIOProvider.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class Path; }
// clang-format on

class AppPlatformIOProvider : public ::IPackIOProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 1
    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem system) const /*override*/;

    // vIndex: 2
    virtual ::std::function<::std::string(::Core::Path const&)> getAssetReader() const /*override*/;

    // vIndex: 3
    virtual ::std::unique_ptr<::IPackIOProvider> clone() const /*override*/;

    // vIndex: 0
    virtual ~AppPlatformIOProvider() /*override*/ = default;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> $getFileAccess(::ResourceFileSystem system) const;

    MCNAPI ::std::function<::std::string(::Core::Path const&)> $getAssetReader() const;

    MCNAPI ::std::unique_ptr<::IPackIOProvider> $clone() const;
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
