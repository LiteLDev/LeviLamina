#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/resource/ResourceFileSystem.h"
#include "mc/deps/core/utility/NonOwnerPointer.h"

// auto generated forward declare list
// clang-format off
class IFileAccess;
namespace Core { class Path; }
// clang-format on

class IPackIOProvider {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IPackIOProvider() = default;

    virtual ::Bedrock::NotNullNonOwnerPtr<::IFileAccess> getFileAccess(::ResourceFileSystem) const = 0;

    virtual ::std::function<::std::string(::Core::Path const&)> getAssetReader() const = 0;

    virtual ::Core::Path getOnDiskScratchPath() const = 0;

    virtual ::std::unique_ptr<::IPackIOProvider> clone() const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
