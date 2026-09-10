#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"
#include "mc/resources/IAppResourceLoadImpl.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
namespace Core { class PathView; }
namespace mce { struct Image; }
// clang-format on

namespace AppResourceLoaderFactory {

class AppPlatformResourceLoadImpl : public ::IAppResourceLoadImpl {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 64> mUnk728095;
    // NOLINTEND

public:
    // prevent constructor by default
    AppPlatformResourceLoadImpl& operator=(AppPlatformResourceLoadImpl const&);
    AppPlatformResourceLoadImpl(AppPlatformResourceLoadImpl const&);
    AppPlatformResourceLoadImpl();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Core::Path getPath() const /*override*/;

    virtual ::Bedrock::Result<::std::string> readAssetFile(::Core::PathView filename) const /*override*/;

    virtual ::mce::Image loadTexture(::Core::Path const& fileName) const /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Core::Path $getPath() const;

    MCNAPI ::Bedrock::Result<::std::string> $readAssetFile(::Core::PathView filename) const;

    MCNAPI ::mce::Image $loadTexture(::Core::Path const& fileName) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace AppResourceLoaderFactory
