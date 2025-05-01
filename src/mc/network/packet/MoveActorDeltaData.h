#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/legacy/ActorRuntimeID.h"
#include "mc/network/packet/MoveActorAbsoluteData.h"

class MoveActorDeltaData {
public:
    // MoveActorDeltaData inner types define
    union Header {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<2, 2> mUnkf843cc;
        ::ll::UntypedStorage<1, 2> mUnk9db329;
        ::ll::UntypedStorage<1, 2> mUnk5bbecc;
        ::ll::UntypedStorage<1, 2> mUnk9923a7;
        ::ll::UntypedStorage<1, 2> mUnke31c0b;
        ::ll::UntypedStorage<1, 2> mUnk9f4a86;
        ::ll::UntypedStorage<1, 2> mUnk996760;
        ::ll::UntypedStorage<1, 2> mUnk96fd33;
        ::ll::UntypedStorage<1, 2> mUnk99f021;
        ::ll::UntypedStorage<1, 2> mUnk10b4d4;
        // NOLINTEND
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, ::ActorRuntimeID>             mRuntimeId;
    ::ll::TypedStorage<2, 2, ::MoveActorDeltaData::Header> mHeader;
    ::ll::TypedStorage<4, 4, float>                        mNewPositionX;
    ::ll::TypedStorage<4, 4, float>                        mNewPositionY;
    ::ll::TypedStorage<4, 4, float>                        mNewPositionZ;
    ::ll::TypedStorage<1, 1, char>                         mRotX;
    ::ll::TypedStorage<1, 1, char>                         mRotY;
    ::ll::TypedStorage<1, 1, char>                         mRotYHead;
    ::ll::TypedStorage<8, 32, ::MoveActorAbsoluteData>     mPreviousData;
    // NOLINTEND
};
