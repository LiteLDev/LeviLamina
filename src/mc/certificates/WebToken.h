#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
struct CertificateSNIType;
struct PublicKeySignatureType;
// clang-format on

class WebToken {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 32, ::std::string> mHeader;
    ::ll::TypedStorage<8, 16, ::Json::Value> mHeaderInfo;
    ::ll::TypedStorage<8, 32, ::std::string> mData;
    ::ll::TypedStorage<8, 16, ::Json::Value> mDataInfo;
    ::ll::TypedStorage<8, 32, ::std::string> mSignature;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WebToken();

    MCNAPI explicit WebToken(::std::string token);

    MCNAPI void _parse(::Json::Value& value, ::std::string const& data);

    MCNAPI ::std::string _signatureToDER() const;

    MCNAPI ::std::string toString() const;

    MCNAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;

    MCNAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::string _DERToBinary(::std::string const& derSignature, int outputLength);

    MCNAPI static ::std::unique_ptr<::WebToken> createFromData(
        ::Json::Value const&                                           dataInfo,
        ::PrivateKeyManager const&                                     manager,
        ::std::variant<::PublicKeySignatureType, ::CertificateSNIType> signatureType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();

    MCNAPI void* $ctor(::std::string token);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
