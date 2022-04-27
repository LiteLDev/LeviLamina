#include "../../Header/MC/Dimension.hpp"
#include "../../Header/MC/Vec3.hpp"
namespace MC
{
}

#ifdef INCLUDE_MCAPI

void MC::Dimension::AddWither(MC::ActorUniqueID ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(struct ::ActorUniqueID*)_0->NativePtr;
    ((class ::Dimension*)NativePtr)->addWither(__arg0);
}

float MC::Dimension::DistanceToNearestPlayerSqr2D(MC::Vec3 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is passed by value.");
    auto __arg0 = *(class ::Vec3*)_0->NativePtr;
    auto __ret = ((class ::Dimension*)NativePtr)->distanceToNearestPlayerSqr2D(__arg0);
    return __ret;
}

void MC::Dimension::FlushLevelChunkGarbageCollector()
{
    ((class ::Dimension*)NativePtr)->flushLevelChunkGarbageCollector();
}

void MC::Dimension::FlushRunTimeLighting()
{
    ((class ::Dimension*)NativePtr)->flushRunTimeLighting();
}

void MC::Dimension::ForceSaveVillageManager()
{
    ((class ::Dimension*)NativePtr)->forceSaveVillageManager();
}

float MC::Dimension::GetPopCap(int _0, bool _1)
{
    auto __ret = ((class ::Dimension*)NativePtr)->getPopCap(_0, _1);
    return __ret;
}

float MC::Dimension::GetSunAngle(float _0)
{
    auto __ret = ((class ::Dimension*)NativePtr)->getSunAngle(_0);
    return __ret;
}

float MC::Dimension::GetTimeOfDay(float _0)
{
    auto __ret = ((class ::Dimension*)NativePtr)->getTimeOfDay(_0);
    return __ret;
}

//bool MC::Dimension::IsChunkKnown(MC::ChunkPos ^ _0)
//{
//    if (ReferenceEquals(_0, nullptr))
//        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
//    auto& __arg0 = *(class ::ChunkPos*)_0->NativePtr;
//    auto __ret = ((class ::Dimension*)NativePtr)->isChunkKnown(__arg0);
//    return __ret;
//}

void MC::Dimension::OnStaticTickingAreaAdded(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    ((class ::Dimension*)NativePtr)->onStaticTickingAreaAdded(__arg0);
}

void MC::Dimension::RemoveActorByID(MC::ActorUniqueID ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(struct ::ActorUniqueID*)_0->NativePtr;
    ((class ::Dimension*)NativePtr)->removeActorByID(__arg0);
}

void MC::Dimension::RemoveWither(MC::ActorUniqueID ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(struct ::ActorUniqueID*)_0->NativePtr;
    ((class ::Dimension*)NativePtr)->removeWither(__arg0);
}

void MC::Dimension::SetCeiling(bool _0)
{
    ((class ::Dimension*)NativePtr)->setCeiling(_0);
}

void MC::Dimension::SetSkylight(bool _0)
{
    ((class ::Dimension*)NativePtr)->setSkylight(_0);
}

void MC::Dimension::TryGarbageCollectStructures()
{
    ((class ::Dimension*)NativePtr)->tryGarbageCollectStructures();
}

//void MC::Dimension::TryLoadLimboEntities(MC::ChunkPos ^ _0)
//{
//    if (ReferenceEquals(_0, nullptr))
//        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
//    auto& __arg0 = *(class ::ChunkPos*)_0->NativePtr;
//    ((class ::Dimension*)NativePtr)->tryLoadLimboEntities(__arg0);
//}

void MC::Dimension::UnregisterEntity(MC::ActorUniqueID ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(struct ::ActorUniqueID*)_0->NativePtr;
    ((class ::Dimension*)NativePtr)->unregisterEntity(__arg0);
}

short MC::Dimension::Height::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->getHeight();
    return __ret;
}

short MC::Dimension::MinHeight::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->getMinHeight();
    return __ret;
}

float MC::Dimension::MoonBrightness::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->getMoonBrightness();
    return __ret;
}

int MC::Dimension::MoonPhase::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->getMoonPhase();
    return __ret;
}

bool MC::Dimension::HasCeiling::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->hasCeiling();
    return __ret;
}

bool MC::Dimension::HasSkylight::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->hasSkylight();
    return __ret;
}

bool MC::Dimension::IsLeaveGameDone::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->isLeaveGameDone();
    return __ret;
}

bool MC::Dimension::IsRedstoneTick::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->isRedstoneTick();
    return __ret;
}

bool MC::Dimension::UltraWarm::get()
{
    auto __ret = ((class ::Dimension*)NativePtr)->isUltraWarm();
    return __ret;
}

void MC::Dimension::UltraWarm::set(bool _0)
{
    ((class ::Dimension*)NativePtr)->setUltraWarm(_0);
}

unsigned int MC::Dimension::LOW_CPU_PACKET_BLOCK_LIMIT::get()
{
    return ::Dimension::LOW_CPU_PACKET_BLOCK_LIMIT;
}

//const float* MC::Dimension::MOON_BRIGHTNESS_PER_PHASE::get()
//{
//    return ::Dimension::MOON_BRIGHTNESS_PER_PHASE;
//}

#endif // INCLUDE_MCAPI
