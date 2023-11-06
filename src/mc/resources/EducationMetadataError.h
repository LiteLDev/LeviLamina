#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/resources/PackError.h"

class EducationMetadataError : public ::PackError {
public:
    // prevent constructor by default
    EducationMetadataError& operator=(EducationMetadataError const&);
    EducationMetadataError(EducationMetadataError const&);
    EducationMetadataError();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EducationMetadataError@@UEAA@XZ
    virtual ~EducationMetadataError();

    // vIndex: 2, symbol:
    // ?getLocErrorMessageMap@EducationMetadataError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const;

    // vIndex: 3, symbol:
    // ?getEventErrorMessageMap@EducationMetadataError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const;

    // NOLINTEND
};
