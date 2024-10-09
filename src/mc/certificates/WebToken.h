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
    MCAPI explicit WebToken(std::string token);

    MCAPI std::string toString() const;

    MCAPI bool verifyWithIncludedKey(std::vector<std::string> const& trustedKeys) const;

    MCAPI ~WebToken();

    MCAPI static std::unique_ptr<class WebToken> createFromData(
        class Json::Value const&                                                               dataInfo,
        class PrivateKeyManager const&                                                         manager,
        std::variant<struct PublicKeySignatureType, struct CertificateThumbprintSignatureType> signatureType
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _parse(class Json::Value& value, std::string const& data);

    MCAPI std::string _signatureToDER() const;

    MCAPI static std::string _DERToBinary(std::string const& derSignature, int outputLength);

    // NOLINTEND
};
