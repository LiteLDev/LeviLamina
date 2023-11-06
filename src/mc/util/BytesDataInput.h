#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataInput.h"

class BytesDataInput : public ::IDataInput {
public:
    // prevent constructor by default
    BytesDataInput& operator=(BytesDataInput const&);
    BytesDataInput(BytesDataInput const&);
    BytesDataInput();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BytesDataInput();

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
