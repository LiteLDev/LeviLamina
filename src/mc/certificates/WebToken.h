#pragma once

#include "mc/_HeaderOutputPredefine.h"
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
struct CertificateSNIType;
struct PublicKeySignatureType;
namespace Json { class Value; }
// clang-format on

class WebToken {
public:
    // member variables
    // NOLINTBEGIN
    ::std::string mHeader;
    ::Json::Value mHeaderInfo;
    ::std::string mData;
    ::Json::Value mDataInfo;
    ::std::string mSignature;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit WebToken(::std::string token);

    MCAPI void _parse(::Json::Value& value, ::std::string const& data);

    MCAPI ::std::string _signatureToDER() const;

    MCAPI ::std::string toString() const;

    MCAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;

    MCAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::string _DERToBinary(::std::string const& derSignature, int outputLength);

    MCAPI static ::std::unique_ptr<::WebToken> createFromData(
        ::Json::Value const&                                           dataInfo,
        ::PrivateKeyManager const&                                     manager,
        ::std::variant<::PublicKeySignatureType, ::CertificateSNIType> signatureType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::string token);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
