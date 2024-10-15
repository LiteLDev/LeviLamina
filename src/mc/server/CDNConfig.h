#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/EnableNonOwnerReferences.h"

// auto generated forward declare list
// clang-format off
namespace Bedrock { class EnableNonOwnerReferences; }
namespace Core { class Path; }
// clang-format on

class CDNConfig : public ::Bedrock::EnableNonOwnerReferences {
public:
    // prevent constructor by default
    CDNConfig& operator=(CDNConfig const&);
    CDNConfig(CDNConfig const&);
    CDNConfig();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CDNConfig() = default;

    MCAPI explicit CDNConfig(class Core::Path const& filePath);

    MCAPI std::vector<std::pair<std::string, std::string>> getCDNUrls();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _readConfigFile(class Core::Path const& filePath);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Core::Path const& filePath);

    // NOLINTEND
};
