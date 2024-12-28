#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Core { class Path; }
// clang-format on

class CDNConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnk811154;
    // NOLINTEND

public:
    // prevent constructor by default
    CDNConfig& operator=(CDNConfig const&);
    CDNConfig(CDNConfig const&);
    CDNConfig();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CDNConfig() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit CDNConfig(::Core::Path const& filePath);

    MCAPI void _readConfigFile(::Core::Path const& filePath);

    MCAPI ::std::vector<::std::pair<::std::string, ::std::string>> getCDNUrls();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Core::Path const& filePath);
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
