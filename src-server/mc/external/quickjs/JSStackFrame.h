#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct JSStackFrame {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk3cb6b0;
    ::ll::UntypedStorage<8, 16> mUnk751469;
    ::ll::UntypedStorage<8, 8> mUnk2befae;
    ::ll::UntypedStorage<8, 8> mUnk2243cc;
    ::ll::UntypedStorage<8, 16> mUnk782a4f;
    ::ll::UntypedStorage<8, 8> mUnkca9e8f;
    ::ll::UntypedStorage<4, 4> mUnkaac765;
    ::ll::UntypedStorage<4, 4> mUnk468e49;
    ::ll::UntypedStorage<8, 8> mUnk50c90a;
    // NOLINTEND

public:
    // prevent constructor by default
    JSStackFrame& operator=(JSStackFrame const&);
    JSStackFrame(JSStackFrame const&);
    JSStackFrame();

};
