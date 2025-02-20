#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class RequestBuilder {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 216> mUnkaf9bb2;
    ::ll::UntypedStorage<8, 64>  mUnkd459f4;
    // NOLINTEND

public:
    // prevent constructor by default
    RequestBuilder& operator=(RequestBuilder const&);
    RequestBuilder(RequestBuilder const&);

public:
    // member functions
    // NOLINTBEGIN
    MCAPI RequestBuilder();

    MCAPI ::Bedrock::Http::RequestBuilder& body(::std::string const& plainText);

    MCAPI ::Bedrock::Http::RequestBuilder& url(::std::string const& url);

    MCAPI ~RequestBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
