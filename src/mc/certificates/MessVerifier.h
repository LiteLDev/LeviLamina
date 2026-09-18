#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/ResponseVerifier.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MessVerifier : public ::ResponseVerifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk917a33;
    ::ll::UntypedStorage<8, 32> mUnk15785f;
    ::ll::UntypedStorage<8, 32> mUnk1254be;
    ::ll::UntypedStorage<8, 64> mUnk9e4535;
    ::ll::UntypedStorage<8, 64> mUnk7dcbd1;
    ::ll::UntypedStorage<8, 32> mUnk9df88b;
    // NOLINTEND

public:
    // prevent constructor by default
    MessVerifier& operator=(MessVerifier const&);
    MessVerifier(MessVerifier const&);
    MessVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MessVerifier() /*override*/ = default;

    virtual void setRequest(::Json::Value& request) /*override*/;

    virtual ::std::optional<::Json::Value> verify(::Json::Value&& response) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setRequest(::Json::Value& request);

    MCNAPI ::std::optional<::Json::Value> $verify(::Json::Value&& response);
#endif


    // NOLINTEND
};
