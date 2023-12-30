#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class PackSettingsError : public ::PackError {
public:
    // prevent constructor by default
    PackSettingsError& operator=(PackSettingsError const&);
    PackSettingsError(PackSettingsError const&);
    PackSettingsError();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1PackSettingsError@@UEAA@XZ
    virtual ~PackSettingsError();

    // vIndex: 1, symbol:
    // ?getLocErrorMessage@PackSettingsError@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getLocErrorMessage() const;

    // vIndex: 2, symbol:
    // ?getLocErrorMessageMap@PackSettingsError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3, symbol:
    // ?getEventErrorMessageMap@PackSettingsError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    // symbol:
    // ??0PackSettingsError@@QEAA@AEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI explicit PackSettingsError(std::vector<std::string> const& errorParam);

    // NOLINTEND
};
