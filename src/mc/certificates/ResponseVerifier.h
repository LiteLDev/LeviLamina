#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ResponseVerifier {
public:
    // prevent constructor by default
    ResponseVerifier& operator=(ResponseVerifier const&);
    ResponseVerifier(ResponseVerifier const&);
    ResponseVerifier();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ResponseVerifier() = default;

    // vIndex: 1
    virtual void setRequest(::Json::Value&) = 0;

    // vIndex: 2
    virtual ::std::optional<::Json::Value> verify(::Json::Value&&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
