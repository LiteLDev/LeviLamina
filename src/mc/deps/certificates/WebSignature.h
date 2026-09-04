#pragma once

#include "mc/_HeaderOutputPredefine.h"

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
#ifdef LL_PLAT_C
    MCNAPI ~WebSignature();
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::std::optional<::WebSignature>
    sign(::std::string const& payload, ::PrivateKeyManager const& manager, ::Json::Value const& additionalHeaderClaims);
#endif
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $dtor();
#endif
    // NOLINTEND
};
