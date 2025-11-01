#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting {

struct RuntimeStats {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 8, int64> mMallocLimit;
    ::ll::TypedStorage<8, 8, int64> mMemoryUsedCount;
    ::ll::TypedStorage<8, 8, int64> mMemoryUsedSize;
    ::ll::TypedStorage<8, 8, int64> mMallocCount;
    ::ll::TypedStorage<8, 8, int64> mMallocSize;
    ::ll::TypedStorage<8, 8, int64> mAtomCount;
    ::ll::TypedStorage<8, 8, int64> mAtomSize;
    ::ll::TypedStorage<8, 8, int64> mStringCount;
    ::ll::TypedStorage<8, 8, int64> mStringSize;
    ::ll::TypedStorage<8, 8, int64> mObjectCount;
    ::ll::TypedStorage<8, 8, int64> mObjectSize;
    ::ll::TypedStorage<8, 8, int64> mPropertyCount;
    ::ll::TypedStorage<8, 8, int64> mPropertySize;
    ::ll::TypedStorage<8, 8, int64> mShapeCount;
    ::ll::TypedStorage<8, 8, int64> mShapeSize;
    ::ll::TypedStorage<8, 8, int64> mFuncCount;
    ::ll::TypedStorage<8, 8, int64> mFuncSize;
    ::ll::TypedStorage<8, 8, int64> mFuncCodeSize;
    ::ll::TypedStorage<8, 8, int64> mFuncPc2lineCount;
    ::ll::TypedStorage<8, 8, int64> mFuncPc2lineSize;
    ::ll::TypedStorage<8, 8, int64> mNativeFuncCount;
    ::ll::TypedStorage<8, 8, int64> mArrayCount;
    ::ll::TypedStorage<8, 8, int64> mFastArrayCount;
    ::ll::TypedStorage<8, 8, int64> mFastArrayElements;
    ::ll::TypedStorage<8, 8, int64> mBinaryObjectCount;
    ::ll::TypedStorage<8, 8, int64> mBinaryObjectSize;
    // NOLINTEND

};

}
