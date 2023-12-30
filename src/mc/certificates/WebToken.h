#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WebToken {
public:
    std::string mHeader;
    Json::Value mHeaderInfo;
    std::string mData;
    Json::Value mDataInfo;
    std::string mSignature;

    WebToken() = delete;

public:
    // NOLINTBEGIN
    // symbol: ??0WebToken@@QEAA@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI explicit WebToken(std::string token);

    // symbol: ?toString@WebToken@@QEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string toString() const;

    // symbol:
    // ?verifyWithIncludedKey@WebToken@@QEBA_NAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI bool verifyWithIncludedKey(std::vector<std::string> const& trustedKeys) const;

    // symbol: ??1WebToken@@QEAA@XZ
    MCAPI ~WebToken();

    // symbol:
    // ?createFromData@WebToken@@SA?AV?$unique_ptr@VWebToken@@U?$default_delete@VWebToken@@@std@@@std@@AEBVValue@Json@@AEBVPrivateKeyManager@@@Z
    MCAPI static std::unique_ptr<class WebToken>
    createFromData(class Json::Value const& dataInfo, class PrivateKeyManager const& manager);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol:
    // ?_parse@WebToken@@AEAAXAEAVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
    MCAPI void _parse(class Json::Value& value, std::string const& data);

    // symbol: ?_signatureToDER@WebToken@@AEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    MCAPI std::string _signatureToDER() const;

    // symbol: ?_DERToBinary@WebToken@@CA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@AEBV23@H@Z
    MCAPI static std::string _DERToBinary(std::string const& derSignature, int outputLength);

    // NOLINTEND
};
