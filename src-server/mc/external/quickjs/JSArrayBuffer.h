#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSArrayBuffer {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnke7d229;
    ::ll::UntypedStorage<1, 1> mUnk34770e;
    ::ll::UntypedStorage<1, 1> mUnkca2153;
    ::ll::UntypedStorage<8, 8> mUnk8b3701;
    ::ll::UntypedStorage<8, 16> mUnke5d05f;
    ::ll::UntypedStorage<8, 8> mUnkf8353b;
    ::ll::UntypedStorage<8, 8> mUnk840101;
    // NOLINTEND

public:
    // prevent constructor by default
    JSArrayBuffer& operator=(JSArrayBuffer const&);
    JSArrayBuffer(JSArrayBuffer const&);
    JSArrayBuffer();

};
