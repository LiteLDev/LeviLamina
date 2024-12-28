#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IJsonSerializable {
public:
    // prevent constructor by default
    IJsonSerializable& operator=(IJsonSerializable const&);
    IJsonSerializable(IJsonSerializable const&);
    IJsonSerializable();

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IJsonSerializable();

    // vIndex: 1
    virtual void serialize(::Json::Value&) = 0;

    // vIndex: 2
    virtual void deserialize(::Json::Value&) = 0;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
