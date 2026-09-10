#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { struct Image; }
// clang-format on

class IAppResourceLoadImpl {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IAppResourceLoadImpl() = default;

    virtual ::Core::Path getPath() const = 0;

    virtual ::Bedrock::Result<::std::string> readAssetFile(::Core::PathView filename) const = 0;

    virtual ::mce::Image loadTexture(::Core::Path const& fileName) const = 0;
    // NOLINTEND
};
