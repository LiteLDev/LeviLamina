#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class ResponseVerifier {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ResponseVerifier() = default;

    virtual void setRequest(::Json::Value& request) = 0;

    virtual ::std::optional<::Json::Value> verify(::Json::Value&& response) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
