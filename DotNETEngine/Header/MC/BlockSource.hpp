#pragma once
#include <MC/BlockSource.hpp>
#include "Types.hpp"

namespace MC
{
ref class Dimension;
ref class BlockActor;
ref class Vec3;
ref class BlockInstance;
generic<typename A, typename T> ref class AutomaticID;
} // namespace MC

namespace MC
{
public
ref class BlockSource : ClassTemplate<BlockSource, ::BlockSource>
{
public:
    __ctor(BlockSource, ::BlockSource);

    BlockInstance ^ GetBlockInstance(BlockPos ^ pos);
    AutomaticID<Dimension ^, int> ^ GetDimensionId();

#ifdef INCLUDE_MCAPI

    property short MinHeight
    {
        short get();
    }

    property bool PublicSource
    {
        bool get();
    }

    property short VoidHeight
    {
        short get();
    }

    virtual bool HasBlock(MC::BlockPos ^ _0);

    virtual bool HasChunksAt(MC::BlockPos ^ _0, int _1);

    virtual bool HasChunksAt(MC::AABB ^ _0);

    virtual bool ContainsAnyLiquid(MC::AABB ^ _0);

    virtual void UnkVfn19();

    virtual void UnkVfn20();

    virtual void UnkVfn22();

    virtual ::System::Collections::Generic::List<MC::AABB ^> ^ FetchAABBs(MC::AABB ^ _0, bool _1);

    virtual void UnkVfn26();

    virtual bool IsSolidBlockingBlock(MC::BlockPos ^ _0);

    bool AllowsRunes(MC::BlockPos ^ _0);

    bool AreChunksFullyLoaded(MC::BlockPos ^ _0, MC::BlockPos ^ _1);

    bool AreChunksFullyLoaded(MC::BlockPos ^ _0, int _1);

    void BlockEvent(MC::BlockPos ^ _0, int _1, int _2);

    bool CanSeeSky(MC::BlockPos ^ _0);

    bool CanSeeSky(int _0, int _1, int _2);

    bool CanSeeSkyFromBelowWater(MC::BlockPos ^ _0);

    void ClearDeletedEntities();

    bool ContainsAnySolidBlocking(MC::AABB ^ _0);

    void FetchActorIds(MC::AABB ^ _0, ::System::Collections::Generic::List<MC::ActorUniqueID ^> ^ _1);

    void FetchActorIds(unsigned long long _0, MC::AABB ^ _1, ::System::Collections::Generic::List<MC::ActorUniqueID ^> ^ _2);

    ::System::Collections::Generic::List<MC::BlockActor ^> ^ FetchBlockEntities(MC::AABB ^ _0);

    bool FindNextTopSolidBlockAbove(MC::BlockPos ^ _0);

    bool FindNextTopSolidBlockUnder(MC::BlockPos ^ _0);

    void FireAreaChanged(MC::BlockPos ^ _0, MC::BlockPos ^ _1);

    void FireBrightnessChanged(MC::BlockPos ^ _0);

    short GetAboveTopSolidBlock(MC::BlockPos ^ _0, bool _1, bool _2);

    short GetAboveTopSolidBlock(int _0, int _1, bool _2, bool _3);

    short GetAllocatedHeightAt(MC::BlockPos ^ _0);

    float GetBrightness(MC::BlockPos ^ _0);

    int GetGrassColor(MC::BlockPos ^ _0);

    short GetHeightmap(int _0, int _1);

    short GetHeightmap(MC::BlockPos ^ _0);

    MC::BlockPos ^ GetHeightmapPos(MC::BlockPos ^ _0);

    float GetSeenPercent(MC::Vec3 ^ _0, MC::AABB ^ _1);

    float GetVisualLiquidHeight(MC::Vec3 ^ _0);

    bool HasBorderBlock(MC::BlockPos ^ _0);

    bool HasChunksAt(MC::BlockPos ^ _0, MC::BlockPos ^ _1);

    bool HasTickInCurrentTick(MC::BlockPos ^ _0);

    bool HasTickInPendingTicks(MC::BlockPos ^ _0);

    // bool HasUntickedNeighborChunk(MC::ChunkPos ^ _0, int _1);

    bool IsConsideredSolidBlock(MC::BlockPos ^ _0);

    bool IsEmptyBlock(int _0, int _1, int _2);

    bool IsEmptyBlock(MC::BlockPos ^ _0);

    bool IsEmptyWaterBlock(MC::BlockPos ^ _0);

    bool IsInWall(MC::Vec3 ^ _0);

    bool IsInstaticking(MC::BlockPos ^ _0);

    // bool IsNearUnloadedChunks(MC::ChunkPos ^ _0);

    bool IsSolidBlockingBlock(int _0, int _1, int _2);

    void NeighborChanged(MC::BlockPos ^ _0, MC::BlockPos ^ _1);

    bool RemoveBlock(MC::BlockPos ^ _0);

    bool RemoveBlock(int _0, int _1, int _2);

    void SetBorderBlock(MC::BlockPos ^ _0, bool _1);

    void SpawnResources(MC::BlockPos ^ _0, float _1, int _2);

    void UpdateNeighborsAt(MC::BlockPos ^ _0);

    void UpdateNeighborsAtExceptFromFacing(MC::BlockPos ^ _0, MC::BlockPos ^ _1, int _2);

#endif // INCLUDE_MCAPI
};
} // namespace MC
