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
    ::ll::TypedStorage<1, 1, bool>                                         mIsClientSide;
    ::ll::TypedStorage<1, 1, ::SubChunkBrightnessStorage::LightPair>       mDefaultLightPair;
    // NOLINTEND

public:
    // prevent constructor by default
    SubChunkRelighter();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SubChunkRelighter(
        ::IBlockSource&   source,
        uint64            centerSubChunkIndex,
        ::ChunkPos const& centerChunkPos,
        bool              isClientSide,
        bool              originalLighting,
        bool              useFullyDarkSubchunk
    );

    MCAPI ::SubChunk*
    _getBlock(::SubChunkLightIndex coordIndex, ::Block const*& block, ::Block const*& extraBlock) const;

#ifdef LL_PLAT_S
    MCAPI void _propagateBlockLight();

    MCAPI void _propagateSkyLight();

    MCAPI void _propagateSubtractiveBlockLight();

    MCAPI void _propagateSubtractiveSkyLight(bool shouldCheckForIgnoredAbsorptionValues);
#endif

    MCAPI void _setLightHelper(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption,
        uint                 lightType,
        uint                 subChunkIndex
    );

    MCAPI void _setSkyLight(
        ::SubChunkLightIndex coordIndex,
        ::Brightness         oldBrightness,
        ::Brightness         newBrightness,
        ::Brightness         oldAbsorption,
        ::Brightness         newAbsorption
    );

    MCAPI ::SubChunkBrightnessStorage::LightPair getLightPair(::Pos const& coord) const;

    MCAPI ::SubChunkBrightnessStorage::LightPair getLightPairWithPlaceholderCheck(
        ::Pos const&                                  coord,
        ::SubChunkBrightnessStorage::LightPair const& defaultLightPairIfPlaceholderSubChunk
    ) const;

#ifdef LL_PLAT_C
    MCAPI void relightSubChunk(
        ::LevelChunk const&                         levelChunk,
        ::std::vector<::SubChunkLightUpdate> const& alteredBlockList,
        ::std::vector<::BlockPos>&                  brightnessChangedList
    );

    MCAPI void update(::BlockPos const&, uint64);
#endif

    MCAPI ~SubChunkRelighter();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void initializeStatics();

    MCAPI static void shutdownStatics();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
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
        bool              isClientSide,
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
