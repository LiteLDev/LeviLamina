#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/SubChunkPos.h"
#include "mc/world/level/dimension/DimensionType.h"

struct SubChunkPacketPayload {
public:
    // SubChunkPacketPayload inner types declare
    // clang-format off
    struct HeightmapData;
    struct SubChunkPosOffset;
    struct SubChunkPacketData;
    // clang-format on

    // SubChunkPacketPayload inner types define
    enum class HeightMapDataType : uchar {
        NoData     = 0,
        HasData    = 1,
        AllTooHigh = 2,
        AllTooLow  = 3,
        AllCopied  = 4,
    };

    enum class SubChunkRequestResult : uchar {
        Undefined             = 0,
        Success               = 1,
        LevelChunkDoesntExist = 2,
        WrongDimension        = 3,
        PlayerDoesntExist     = 4,
        IndexOutOfBounds      = 5,
        SuccessAllAir         = 6,
    };

    struct HeightmapData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::HeightMapDataType>                   mHeightMapType;
        ::ll::TypedStorage<1, 257, ::std::optional<::std::array<::std::array<schar, 16>, 16>>> mSubchunkHeightMap;
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::HeightMapDataType>                   mRenderHeightMapType;
        ::ll::TypedStorage<1, 257, ::std::optional<::std::array<::std::array<schar, 16>, 16>>> mSubchunkRenderHeightMap;
        // NOLINTEND

    public:
        HeightmapData() {
            mHeightMapType       = HeightMapDataType::NoData;
            mRenderHeightMapType = HeightMapDataType::NoData;
        }
    };

    struct SubChunkPosOffset {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 1, schar> mX;
        ::ll::TypedStorage<1, 1, schar> mY;
        ::ll::TypedStorage<1, 1, schar> mZ;
        // NOLINTEND
    };

    struct SubChunkPacketData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::TypedStorage<1, 3, ::SubChunkPacketPayload::SubChunkPosOffset>     mSubChunkPosOffset;
        ::ll::TypedStorage<1, 1, ::SubChunkPacketPayload::SubChunkRequestResult> mResult;
        ::ll::TypedStorage<8, 40, ::std::optional<::std::string>>                mSerializedSubChunk;
        ::ll::TypedStorage<1, 516, ::SubChunkPacketPayload::HeightmapData>       mHeightMapData;
        ::ll::TypedStorage<8, 16, ::std::optional<uint64>>                       mBlobId;
        // NOLINTEND

    public:
        SubChunkPacketData(SubChunkPosOffset const& pos, SubChunkRequestResult requestResult) {
            mSubChunkPosOffset                   = pos;
            mResult                              = requestResult;
            mSerializedSubChunk                  = {};
            mHeightMapData->mHeightMapType       = HeightMapDataType::NoData;
            mHeightMapData->mRenderHeightMapType = HeightMapDataType::NoData;
            mBlobId                              = 0;
        }

        SubChunkPacketData& operator=(SubChunkPacketData const& rhs) {
            mSubChunkPosOffset                   = rhs.mSubChunkPosOffset;
            mSerializedSubChunk                  = rhs.mSerializedSubChunk;
            mResult                              = rhs.mResult;
            mHeightMapData->mHeightMapType       = rhs.mHeightMapData->mHeightMapType;
            mHeightMapData->mRenderHeightMapType = rhs.mHeightMapData->mRenderHeightMapType;
            mBlobId                              = rhs.mBlobId;
            return *this;
        }

        SubChunkPacketData() {
            mSubChunkPosOffset = {
                0,
                0,
                0,
            };
            mResult                              = SubChunkRequestResult::Undefined;
            mSerializedSubChunk                  = {};
            mHeightMapData->mHeightMapType       = HeightMapDataType::NoData;
            mHeightMapData->mRenderHeightMapType = HeightMapDataType::NoData;
            mBlobId                              = 0;
        }

    public:
        // member functions
        // NOLINTBEGIN
        MCAPI bool operator==(::SubChunkPacketPayload::SubChunkPacketData const&) const;

#ifdef LL_PLAT_C
        MCAPI ~SubChunkPacketData();
#endif
        // NOLINTEND

    public:
        // destructor thunk
        // NOLINTBEGIN
#ifdef LL_PLAT_C
        MCFOLD void $dtor();
#endif
        // NOLINTEND
    };

    using HeightMapArray = ::std::array<::std::array<schar, 16>, 16>;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                        mCacheEnabled;
    ::ll::TypedStorage<4, 4, ::DimensionType>                                             mDimensionType;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkPacketPayload::SubChunkPacketData>> mSubChunkData;
    ::ll::TypedStorage<4, 12, ::SubChunkPos>                                              mCenterPos;
    // NOLINTEND
};
