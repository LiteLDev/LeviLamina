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
// clang-format on

class SubChunkRelighter {
public:
    // SubChunkRelighter inner types define
    enum class SubChunkToDoBitsClearMode : int {
        AllSubChunkBorderBitsExceptTheOuterEdgeOfComputationBits = 0,
        SetOuterEdgeOfComputationBits                            = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1>     mUnkd7efd2;
    ::ll::UntypedStorage<8, 24576> mUnk247b51;
    ::ll::UntypedStorage<1, 4096>  mUnka955ff;
    ::ll::UntypedStorage<8, 768>   mUnkd07591;
    ::ll::UntypedStorage<8, 384>   mUnka0b056;
    ::ll::UntypedStorage<8, 384>   mUnk97e476;
    ::ll::UntypedStorage<8, 24>    mUnkb53041;
    ::ll::UntypedStorage<8, 48>    mUnk54a36d;
    ::ll::UntypedStorage<8, 384>   mUnk3b2e93;
    ::ll::UntypedStorage<1, 48>    mUnk590c49;
    ::ll::UntypedStorage<8, 8>     mUnkef334f;
    ::ll::UntypedStorage<8, 8>     mUnk236233;
    ::ll::UntypedStorage<1, 1>     mUnk8d0aec;
    ::ll::UntypedStorage<1, 1>     mUnk700671;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRelighter& operator=(SubChunkRelighter const&);
    SubChunkRelighter(SubChunkRelighter const&);
    SubChunkRelighter();

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
