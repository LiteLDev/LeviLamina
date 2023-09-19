#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MoveActorDeltaData {
public:
    union Header {
        ushort mRaw;                   // this+0x0
        bool   mContainsPositionX;     // this(bf)+0x0:0x0 len(0x1)
        bool   mContainsPositionY;     // this(bf)+0x0:0x1 len(0x1)
        bool   mContainsPositionZ;     // this(bf)+0x0:0x2 len(0x1)
        bool   mContainsRotationX;     // this(bf)+0x0:0x3 len(0x1)
        bool   mContainsRotationY;     // this(bf)+0x0:0x4 len(0x1)
        bool   mContainsRotationYHead; // this(bf)+0x0:0x5 len(0x1)
        bool   mIsOnGround;            // this(bf)+0x0:0x6 len(0x1)
        bool   mTeleported;            // this(bf)+0x0:0x7 len(0x1)
        bool   mForceMoveLocalEntity;  // this(bf)+0x1:0x0 len(0x1)
    };

    ActorRuntimeID             mRuntimeId;
    MoveActorDeltaData::Header mHeader;
    float                      mNewPositionX;
    float                      mNewPositionY;
    float                      mNewPositionZ;
    schar                      mRotX;
    schar                      mRotY;
    schar                      mRotYHead;
    MoveActorAbsoluteData      mPreviousData;

    // prevent constructor by default
    MoveActorDeltaData& operator=(MoveActorDeltaData const&);
    MoveActorDeltaData(MoveActorDeltaData const&);
    MoveActorDeltaData();
};
