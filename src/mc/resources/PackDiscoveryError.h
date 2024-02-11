#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackDiscoveryError : public ::PackError {
public:
    // prevent constructor by default
    PackDiscoveryError& operator=(PackDiscoveryError const&);
    PackDiscoveryError(PackDiscoveryError const&);
    PackDiscoveryError();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PackDiscoveryError@@UEAA@XZ
    virtual ~PackDiscoveryError();

    // vIndex: 2, symbol:
    // ?getLocErrorMessageMap@PackDiscoveryError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3, symbol:
    // ?getEventErrorMessageMap@PackDiscoveryError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    // NOLINTEND
};
