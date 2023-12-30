#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BytesDataInput@@UEAA@XZ
    virtual ~BytesDataInput() = default;

    // vIndex: 1, symbol:
    // ?readString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readString();

    // vIndex: 2, symbol:
    // ?readLongString@BytesDataInput@@UEAA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
    virtual std::string readLongString();

    // vIndex: 5, symbol: ?readByte@BytesDataInput@@UEAADXZ
    virtual char readByte();

    // NOLINTEND
};
