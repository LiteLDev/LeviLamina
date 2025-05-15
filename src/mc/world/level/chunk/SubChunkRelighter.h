#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/ChunkPos.h"
#include "mc/world/level/chunk/SubChunkBrightnessStorage.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
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
    // prevent constructor by default
    SubChunkRelighter();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI SubChunkRelighter(
        ::IBlockSource&   source,
        uint64            centerSubChunkIndex,
        ::ChunkPos const& centerChunkPos,
        bool              originalLighting,
        bool              useFullyDarkSubchunk
    );

    MCNAPI void _checkEdgeForSubtractiveBlockLightProcessing(::SubChunkLightIndex const& coordIndex);

    MCNAPI void _checkEdgeForSubtractiveSkyLightProcessing(::SubChunkLightIndex const& coordIndex);

    MCNAPI ::SubChunk* _dirtySubChunk(::SubChunkLightIndex coordIndex, uint& subChunkIndex);

    MCNAPI ::SubChunk*
    _getBlock(::SubChunkLightIndex coordIndex, ::Block const*& block, ::Block const*& extraBlock) const;

    MCNAPI ::SubChunkBrightnessStorage::LightPair _getLightPair(::SubChunkLightIndex coordIndex) const;

    MCNAPI void _propagateBlockLight();

    MCNAPI void _propagateBlockLight(::SubChunkLightIndex coordIndex, uchar brightness);

    MCNAPI void _propagateSkyLight();

    MCNAPI void _propagateSkyLight(::SubChunkLightIndex coordIndex, uchar brightness);

    MCNAPI void _propagateSubtractiveBlockLight();

    MCNAPI void _propagateSubtractiveBlockLight(::SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    MCNAPI void _propagateSubtractiveSkyLight();

    MCNAPI void _propagateSubtractiveSkyLight(::SubChunkLightIndex coordIndex, uchar effectiveBrightness);

    MCNAPI void _setLightHelper(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption,
        uint                 lightType,
        uint                 subChunkIndex
    );

    MCNAPI void _setPropagatedBlockLightValue(::SubChunkLightIndex coordIndex, uchar brightness);

    MCNAPI void _setPropagatedSkyLightValue(::SubChunkLightIndex coordIndex, uchar brightness);

    MCNAPI void _setSkyLight(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption
    );

    MCNAPI void relightSubChunk(
        ::LevelChunk const&                         levelChunk,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList,
        ::std::vector<::BlockPos>&                  brightnessChangedList
    );

    MCNAPI void setBlockLight(
        ::Pos const& pos,
        ::Brightness oldBrightness,
        ::Brightness newBrightness,
        ::Brightness oldAbsorption,
        ::Brightness newAbsorption
    );

    MCNAPI ~SubChunkRelighter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::std::bitset<196608> computeAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCNAPI static ::std::bitset<196608> computeOuterEdgeOfComputationBits();

    MCNAPI static void initializeStatics();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::std::bitset<196608>& mAllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits();

    MCNAPI static ::std::bitset<196608>& mOuterEdgeOfComputationBits();

    MCNAPI static ::SpinLockImpl& sDarkSpinLock();

    MCNAPI static ::std::unique_ptr<::SubChunk>& sFullyDarkSubChunk();

    MCNAPI static ::std::unique_ptr<::SubChunk>& sFullyLitSubChunk();

    MCNAPI static ::SpinLockImpl& sLitSpinLock();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor(
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
    MCNAPI void $dtor();
    // NOLINTEND
};
