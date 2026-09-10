#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/crypto/asymmetric/system/System.h"

// auto generated forward declare list
// clang-format off
class PrivateKeyManager;
namespace Json { class Value; }
// clang-format on

class WebSignature {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnkecbed0;
    ::ll::UntypedStorage<8, 16> mUnk9d9703;
    ::ll::UntypedStorage<8, 32> mUnkf7737f;
    ::ll::UntypedStorage<8, 32> mUnk59b486;
    // NOLINTEND

public:
    // prevent constructor by default
    WebSignature& operator=(WebSignature const&);
    WebSignature(WebSignature const&);
    WebSignature();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI bool
    verify(::std::string const& publicKey, ::std::optional<::Crypto::Asymmetric::System> expectedSystem) const;

    MCNAPI ~WebSignature();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::optional<::WebSignature>
    parseDetached(::std::string const& compactSerialization, ::std::string payload, uint64 maxLength);

    MCNAPI static ::std::optional<::WebSignature>
    sign(::std::string const& payload, ::PrivateKeyManager const& manager, ::Json::Value const& additionalProperties);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
