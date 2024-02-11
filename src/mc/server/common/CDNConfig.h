#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/EnableNonOwnerReferences.h"

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
    // vIndex: 0, symbol: __gen_??1CDNConfig@@UEAA@XZ
    virtual ~CDNConfig() = default;

    // symbol: ??0CDNConfig@@QEAA@AEBVPath@Core@@@Z
    MCAPI explicit CDNConfig(class Core::Path const&);

    // symbol:
    // ?getCDNUrls@CDNConfig@@QEAA?AV?$vector@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@V?$allocator@U?$pair@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V12@@std@@@2@@std@@XZ
    MCAPI std::vector<std::pair<std::string, std::string>> getCDNUrls();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_readConfigFile@CDNConfig@@AEAAXAEBVPath@Core@@@Z
    MCAPI void _readConfigFile(class Core::Path const&);

    // NOLINTEND
};
