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
    virtual ~CDNConfig() /*override*/ = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void _readConfigFile(::Core::Path const& filePath);
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
