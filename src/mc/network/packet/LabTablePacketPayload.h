#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LabTablePacketPayload {
public:
    // LabTablePacketPayload inner types define
    enum class Type : uchar {
        StartCombine  = 0,
        StartReaction = 1,
        Reset         = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>  mUnkc3f2c1;
    ::ll::UntypedStorage<4, 12> mUnkce119c;
    ::ll::UntypedStorage<1, 1>  mUnk679d09;
    // NOLINTEND

public:
    // prevent constructor by default
    LabTablePacketPayload& operator=(LabTablePacketPayload const&);
    LabTablePacketPayload(LabTablePacketPayload const&);
    LabTablePacketPayload();
};
