#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class ChunkPos;
class IBlockSource;
class LevelChunk;
class Pos;
class SpinLockImpl;
struct Brightness;
struct SubChunk;
struct SubChunkLightIndex;
struct SubChunkLightUpdate;
struct SubtractiveLightInfo;
// clang-format on

class SubChunkRelighter {
public:
    // SubChunkRelighter inner types define
    enum class SubChunkToDoBitsClearMode : int {
        AllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits = 0,
        SetOuterEdgeOfComputationBits                            = 1,
    };

    using LightPair = ::SubChunkBrightnessStorage::LightPair;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                         mNeedToResetToDoBits;
    ::ll::TypedStorage<8, 24576, ::std::bitset<196608>>                    mToDo;
    ::ll::TypedStorage<1, 4096, ::std::array<uchar, 4096>>                 mOldAbsorption;
    ::ll::TypedStorage<8, 768, ::std::vector<::SubChunkLightIndex>[2][16]> mAdditiveBlocksToProcess;
    ::ll::TypedStorage<8, 384, ::std::vector<::SubChunkLightIndex>[16]>    mEdgeBlocksToProcess;
    ::ll::TypedStorage<8, 384, ::std::vector<::SubChunkLightIndex>[16]>    mBlocksToProcess;
    ::ll::TypedStorage<8, 24, ::std::vector<::SubChunkLightIndex>>         mAbsorptionBlocksToProcess;
    ::ll::TypedStorage<8, 48, ::std::vector<::SubtractiveLightInfo>[2]>    mSubtractiveBlocks;
    ::ll::TypedStorage<8, 384, ::SubChunk* [3][4][4]>                      mSubChunkPtrArray;
    ::ll::TypedStorage<1, 48, bool[3][4][4]>                               mSubChunkTouched;
    ::ll::TypedStorage<8, 8, ::ChunkPos>                                   mCenterChunkPos;
    ::ll::TypedStorage<8, 8, uint64>                                       mCenterSubChunkIndex;
    ::ll::TypedStorage<1, 1, bool>                                         mOriginalLighting;
    ::ll::TypedStorage<1, 1, ::SubChunkBrightnessStorage::LightPair>       mDefaultLightPair;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubChunkRelighter(
        ::IBlockSource&   source,
        uint64            centerSubChunkIndex,
        ::ChunkPos const& centerChunkPos,
        bool              originalLighting,
        bool              useFullyDarkSubchunk
    );

    MCAPI void _checkEdgeForSubtractiveBlockLightProcessing(::SubChunkLightIndex const& coordIndex);

    MCAPI void _checkEdgeForSubtractiveSkyLightProcessing(::SubChunkLightIndex const& coordIndex);

    MCAPI ::SubChunk* _dirtySubChunk(::SubChunkLightIndex coordIndex, uint& subChunkIndex);

    MCAPI ::SubChunk*
    _getBlock(::SubChunkLightIndex coordIndex, ::Block const*& block, ::Block const*& extraBlock) const;

    MCAPI ::SubChunkBrightnessStorage::LightPair _getLightPair(::SubChunkLightIndex coordIndex) const;

    MCAPI void _propagateBlockLight();

    MCAPI void _propagateBlockLight(::SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _propagateSkyLight();

    MCAPI void _propagateSkyLight(::SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _propagateSubtractiveBlockLight();

    MCAPI void _propagateSubtractiveBlockLight(::SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    MCAPI void _propagateSubtractiveSkyLight();

    MCAPI void _propagateSubtractiveSkyLight(::SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    MCAPI void _setLightHelper(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption,
        uint                 lightType,
        uint                 subChunkIndex
    );

    MCAPI void _setPropagatedBlockLightValue(::SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _setPropagatedSkyLightValue(::SubChunkLightIndex coordIndex, uchar brightness);

    MCAPI void _setSkyLight(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption
    );

    MCAPI void relightSubChunk(
        ::LevelChunk const&                         levelChunk,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList,
        ::std::vector<::BlockPos>&                  brightnessChangedList
    );

    MCAPI void setBlockLight(
        ::Pos const& pos,
        ::Brightness oldBrightness,
        ::Brightness newBrightness,
        ::Brightness oldAbsorption,
        ::Brightness newAbsorption
    );

    MCAPI ~SubChunkRelighter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCAPI static ::std::bitset<196608> computeOuterEdgeOfComputationBits();

    MCAPI static void initializeStatics();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::bitset<196608>& mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCAPI static ::std::bitset<196608>& mOuterEdgeOfComputationBits();

    MCAPI static ::SpinLockImpl& sDarkSpinLock();

    MCAPI static ::std::unique_ptr<::SubChunk>& sFullyDarkSubChunk();

    MCAPI static ::std::unique_ptr<::SubChunk>& sFullyLitSubChunk();

    MCAPI static ::SpinLockImpl& sLitSpinLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::IBlockSource&   source,
        uint64            centerSubChunkIndex,
        ::ChunkPos const& centerChunkPos,
        bool              originalLighting,
        bool              useFullyDarkSubchunk
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
