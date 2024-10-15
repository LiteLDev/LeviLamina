#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WebToken {
public:
    // prevent constructor by default
    WebToken& operator=(WebToken const&);
    WebToken(WebToken const&);
    WebToken();

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

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(std::string token);

    MCAPI void dtor$();

    // NOLINTEND
};
