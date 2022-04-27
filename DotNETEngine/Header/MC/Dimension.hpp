#pragma once
#include <MC/Dimension.hpp>
#include "Types.hpp"

namespace MC
{
ref class Vec3;
}

namespace MC
{
public
ref class Dimension : ClassTemplate<Dimension, ::Dimension>
{
public:
    __ctor(Dimension, ::Dimension);

#ifdef INCLUDE_MCAPI

    property short Height
    {
        short get();
    }

    property short MinHeight
    {
        short get();
    }

    property float MoonBrightness
    {
        float get();
    }

    property int MoonPhase
    {
        int get();
    }

    property bool HasCeiling
    {
        bool get();
    }

    property bool HasSkylight
    {
        bool get();
    }

    property bool IsLeaveGameDone
    {
        bool get();
    }

    property bool IsRedstoneTick
    {
        bool get();
    }

    property bool UltraWarm
    {
        bool get();
        void set(bool);
    }

    void AddWither(MC::ActorUniqueID ^ _0);

    float DistanceToNearestPlayerSqr2D(MC::Vec3 ^ _0);

    void FlushLevelChunkGarbageCollector();

    void FlushRunTimeLighting();

    void ForceSaveVillageManager();

    float GetPopCap(int _0, bool _1);

    float GetSunAngle(float _0);

    float GetTimeOfDay(float _0);

    // bool IsChunkKnown(MC::ChunkPos ^ _0);

    void OnStaticTickingAreaAdded(::System::String ^ _0);

    void RemoveActorByID(MC::ActorUniqueID ^ _0);

    void RemoveWither(MC::ActorUniqueID ^ _0);

    void SetCeiling(bool _0);

    void SetSkylight(bool _0);

    void TryGarbageCollectStructures();

    // void TryLoadLimboEntities(MC::ChunkPos ^ _0);

    void UnregisterEntity(MC::ActorUniqueID ^ _0);

    static property unsigned int LOW_CPU_PACKET_BLOCK_LIMIT
    {
        unsigned int get();
    }

    //static property const float* MOON_BRIGHTNESS_PER_PHASE
    //{
    //    const float* get();
    //}

#endif // INCLUDE_MCAPI
};
} // namespace MC