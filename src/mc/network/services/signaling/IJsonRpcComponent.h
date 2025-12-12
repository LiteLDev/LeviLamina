#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace JsonRpc { class JsonRpcProvider; }
// clang-format on

class IJsonRpcComponent {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~IJsonRpcComponent() = default;

    virtual void initialize(::std::shared_ptr<::JsonRpc::JsonRpcProvider>) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};
