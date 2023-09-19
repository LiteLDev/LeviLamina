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
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?serialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
    virtual void serialize(class Json::Value&) = 0;

    // vIndex: 2, symbol: ?deserialize@AllowListEntry@@UEAAXAEAVValue@Json@@@Z
    virtual void deserialize(class Json::Value&) = 0;

    // symbol: ??1IJsonSerializable@@UEAA@XZ
    MCVAPI ~IJsonSerializable();

    // NOLINTEND
};
