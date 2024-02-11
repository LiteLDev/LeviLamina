#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackLoadError : public ::PackError {
public:
    // prevent constructor by default
    PackLoadError& operator=(PackLoadError const&);
    PackLoadError(PackLoadError const&);
    PackLoadError();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PackLoadError@@UEAA@XZ
    virtual ~PackLoadError();

    // vIndex: 2, symbol:
    // ?getLocErrorMessageMap@PackLoadError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3, symbol:
    // ?getEventErrorMessageMap@PackLoadError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    // NOLINTEND
};
