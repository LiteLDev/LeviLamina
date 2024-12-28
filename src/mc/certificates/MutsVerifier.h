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
    // vIndex: 0
    virtual ~MutsVerifier() /*override*/;

    // vIndex: 1
    virtual void setRequest(::Json::Value&) /*override*/;

    // vIndex: 2
    virtual ::std::optional<::Json::Value> verify(::Json::Value&&) /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $setRequest(::Json::Value&);

    MCAPI ::std::optional<::Json::Value> $verify(::Json::Value&&);
    // NOLINTEND
};
