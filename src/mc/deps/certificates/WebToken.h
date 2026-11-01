#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"
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
    // prevent constructor by default
    WebToken();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI WebToken(::WebToken const&);

    MCNAPI ::std::string getKeyId() const;

#ifdef LL_PLAT_C
    MCNAPI ::std::string getSignerPublicKey() const;
#endif

    MCNAPI ::WebToken& operator=(::WebToken&&);

    MCNAPI ::WebToken& operator=(::WebToken const&);

    MCNAPI bool verifyWithExternalKey(
        ::std::string const&                          publicKey,
        ::std::optional<::Crypto::Asymmetric::System> expectedSystem
    ) const;

    MCNAPI bool verifyWithIncludedKey(::std::vector<::std::string> const& trustedKeys) const;

    MCAPI ~WebToken();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::WebToken>
    createFromData(::Json::Value const& dataInfo, ::PrivateKeyManager const& manager);

#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::WebToken> createFromData(
        ::Json::Value const&       dataInfo,
        ::PrivateKeyManager const& manager,
        ::Json::Value const&       extraHeaders
    );
#endif

    MCNAPI static ::std::optional<::WebToken> createFromData(
        ::Json::Value const&                                                  dataInfo,
        ::PrivateKeyManager const&                                            manager,
        ::Json::Value const&                                                  extraHeaders,
        ::std::variant<::PublicKeySignatureType, ::CertificateSNIType> const& signatureType
    );

    MCNAPI static ::std::optional<::WebToken> parse(::std::string_view token, uint64 maxLength);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(::WebToken const&);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
