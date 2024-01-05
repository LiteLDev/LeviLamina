#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDataOutput.h"

class BytesDataOutput : public ::IDataOutput {
public:
    // prevent constructor by default
    BytesDataOutput& operator=(BytesDataOutput const&);
    BytesDataOutput(BytesDataOutput const&);
    BytesDataOutput();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BytesDataOutput@@UEAA@XZ
    virtual ~BytesDataOutput() = default;

    // vIndex: 1, symbol: ?writeString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeString(std::string_view v);

    // vIndex: 2, symbol: ?writeLongString@BytesDataOutput@@UEAAXV?$basic_string_view@DU?$char_traits@D@std@@@std@@@Z
    virtual void writeLongString(std::string_view v);

    // vIndex: 5, symbol: ?writeByte@BytesDataOutput@@UEAAXD@Z
    virtual void writeByte(char v);

    // NOLINTEND
};
