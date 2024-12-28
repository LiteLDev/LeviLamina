#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SubChunkInsertManager {
public:
    // SubChunkInsertManager inner types declare
    // clang-format off
    struct SubChunkInsertTaskInfo;
    // clang-format on

    // SubChunkInsertManager inner types define
    struct SubChunkInsertTaskInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<4, 4>  mUnkb8c063;
        ::ll::UntypedStorage<4, 12> mUnkd004a7;
        ::ll::UntypedStorage<8, 16> mUnk1bd87e;
        // NOLINTEND

    public:
        // prevent constructor by default
        SubChunkInsertTaskInfo& operator=(SubChunkInsertTaskInfo const&);
        SubChunkInsertTaskInfo(SubChunkInsertTaskInfo const&);
        SubChunkInsertTaskInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24>  mUnk7b78c2;
    ::ll::UntypedStorage<8, 336> mUnkb0339f;
    ::ll::UntypedStorage<8, 8>   mUnkd2c47c;
    ::ll::UntypedStorage<8, 8>   mUnk94db9c;
    ::ll::UntypedStorage<1, 1>   mUnk88dcd8;
    ::ll::UntypedStorage<8, 64>  mUnk631899;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkInsertManager& operator=(SubChunkInsertManager const&);
    SubChunkInsertManager(SubChunkInsertManager const&);
    SubChunkInsertManager();
};
