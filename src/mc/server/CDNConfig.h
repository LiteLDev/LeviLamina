#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/file/Path.h"
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

class CDNConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 24, ::std::vector<::std::pair<::std::string, ::std::string>>> mPackCDNUrls;
    ::ll::TypedStorage<8, 32, ::Core::Path const>                                       mPath;
    // NOLINTEND

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    CDNConfig();

#else // LL_PLAT_C
#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI explicit CDNConfig(::Core::Path const& filePath);

    MCNAPI void _readConfigFile();
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    MCNAPI void* $ctor(::Core::Path const& filePath);
#endif
    // NOLINTEND
};
