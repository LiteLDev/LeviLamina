#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IJsonSerializable {
public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IJsonSerializable();

    // vIndex: 1
    virtual void serialize(class Json::Value& root) = 0;

    // vIndex: 2
    virtual void deserialize(class Json::Value& root) = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
