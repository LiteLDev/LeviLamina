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
    ::ll::UntypedStorage<8, 32> mUnk87d2e3;
    ::ll::UntypedStorage<8, 32> mUnk1a0301;
    ::ll::UntypedStorage<8, 32> mUnk81a108;
    ::ll::UntypedStorage<8, 64> mUnkfb3af1;
    ::ll::UntypedStorage<8, 64> mUnkb615b9;
    ::ll::UntypedStorage<8, 32> mUnke63434;
    // NOLINTEND

public:
    // prevent constructor by default
    MutsVerifier& operator=(MutsVerifier const&);
    MutsVerifier(MutsVerifier const&);
    MutsVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MutsVerifier() /*override*/ = default;

    virtual void setRequest(::Json::Value&) /*override*/;

    virtual ::std::optional<::Json::Value> verify(::Json::Value&&) /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
