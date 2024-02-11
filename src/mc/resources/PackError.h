#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/resources/PackErrorType.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class PackError {
public:
    PackError() = delete;

    std::vector<std::string> mErrorParameters;
    int                      mErrorValue;
    PackErrorType            mPackErrorType;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PackError@@UEAA@XZ
    virtual ~PackError() = default;

    // vIndex: 1, symbol:
    // ?getLocErrorMessage@PackError@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string getLocErrorMessage() const;

    // vIndex: 2, symbol:
    // ?getLocErrorMessageMap@EducationMetadataError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getLocErrorMessageMap() const = 0;

    // vIndex: 3, symbol:
    // ?getEventErrorMessageMap@EducationMetadataError@@EEBAAEBV?$unordered_map@HV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@U?$hash@H@2@U?$equal_to@H@2@V?$allocator@U?$pair@$$CBHV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@std@@@2@@std@@XZ
    virtual std::unordered_map<int, std::string> const& getEventErrorMessageMap() const = 0;

    // symbol: ?serialize@PackError@@QEAAXAEAVValue@Json@@@Z
    MCAPI void serialize(class Json::Value& out);

    // NOLINTEND
};

using PackErrors = std::vector<std::shared_ptr<PackError>>;
