#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSVarDef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnk792033;
    ::ll::UntypedStorage<4, 4> mUnkfce3ae;
    ::ll::UntypedStorage<4, 4> mUnk549197;
    uchar                      mUnk1479af : 1;
    uchar                      mUnk160ff4 : 1;
    uchar                      mUnkef6e84 : 1;
    uchar                      mUnk156ed2 : 1;
    uchar                      mUnkceebca : 4;
    int                        mUnkf000da : 24;
    // NOLINTEND

public:
    // prevent constructor by default
    JSVarDef& operator=(JSVarDef const&);
    JSVarDef(JSVarDef const&);
    JSVarDef();
};
