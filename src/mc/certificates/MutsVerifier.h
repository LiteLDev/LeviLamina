#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/certificates/ResponseVerifier.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class MutsVerifier : public ::ResponseVerifier {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk4e821b;
    ::ll::UntypedStorage<8, 32> mUnka8a50e;
    ::ll::UntypedStorage<8, 32> mUnk1ff508;
    ::ll::UntypedStorage<8, 64> mUnkfb3af1;
    ::ll::UntypedStorage<8, 64> mUnkfedaec;
    ::ll::UntypedStorage<8, 32> mUnk1bb995;
    // NOLINTEND

public:
    // prevent constructor by default
    MutsVerifier& operator=(MutsVerifier const&);
    MutsVerifier(MutsVerifier const&);
    MutsVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
#ifdef LL_PLAT_S
    virtual ~MutsVerifier() /*override*/ = default;
#else // LL_PLAT_C
    virtual ~MutsVerifier() /*override*/;
#endif

    virtual void setRequest(::Json::Value& request) /*override*/;

    virtual ::std::optional<::Json::Value> verify(::Json::Value&& response) /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN

    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(
        ::std::string                    responseField,
        ::std::string                    payloadField,
        ::std::string                    publicKey,
        ::std::function<int64()>         getTime,
        ::std::function<::std::string()> createRequestId
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setRequest(::Json::Value& request);

    MCNAPI ::std::optional<::Json::Value> $verify(::Json::Value&& response);
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
