#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/platform/Result.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class WebKey {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk59454e;
    ::ll::UntypedStorage<8, 32> mUnkcbf480;
    // NOLINTEND

public:
    // prevent constructor by default
    WebKey& operator=(WebKey const&);
    WebKey(WebKey const&);
    WebKey();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ::Bedrock::Result<::Json::Value> toJson(::std::optional<::std::string> kid) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Bedrock::Result<::WebKey> fromRawPublicKey(::std::string const& publicKey);

    MCNAPI static ::Bedrock::Result<::WebKey> parse(::Json::Value const& jwk);
    // NOLINTEND
};
