#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/quickjs/JSGCObjectTypeEnum.h"

struct JSGCObjectHeader {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk55bd9d;
    ::JSGCObjectTypeEnum mUnk19b26d : 4;
    uchar mUnk936382 : 4;
    ::ll::UntypedStorage<1, 1> mUnk94b2e1;
    ::ll::UntypedStorage<2, 2> mUnkff360b;
    ::ll::UntypedStorage<8, 16> mUnke18c2c;
    // NOLINTEND

public:
    // prevent constructor by default
    JSGCObjectHeader& operator=(JSGCObjectHeader const&);
    JSGCObjectHeader(JSGCObjectHeader const&);
    JSGCObjectHeader();

};
