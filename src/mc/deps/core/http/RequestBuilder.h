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
    MCNAPI RequestBuilder();

    MCNAPI ::Bedrock::Http::RequestBuilder& body(::std::string const& plainText);

    MCNAPI ::Bedrock::Http::RequestBuilder& url(::std::string const& url);

    MCNAPI ~RequestBuilder();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Bedrock::Http
