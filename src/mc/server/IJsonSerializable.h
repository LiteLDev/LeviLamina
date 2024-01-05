#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class IJsonSerializable {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1IJsonSerializable@@UEAA@XZ
    virtual ~IJsonSerializable();

    // vIndex: 1, symbol: ?serialize@AllowList@@UEAAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value& root) = 0;

    // vIndex: 2, symbol: ?deserialize@AllowList@@UEAAXAEAVValue@Json@@@Z
    virtual void deserialize(class Json::Value& root) = 0;

    // NOLINTEND
};
