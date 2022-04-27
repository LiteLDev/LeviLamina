#include "../../Header/MC/BlockSource.hpp"

#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/BlockInstance.hpp"
#include "../../Header/MC/AABB.hpp"
#include "../../Header/MC/Dimension.hpp"
#include "../../Header/MC/BlockActor.hpp"
#include "../../Header/MC/Vec3.hpp"

namespace MC
{
BlockInstance ^ BlockSource::GetBlockInstance(BlockPos ^ pos)
{
    return gcnew BlockInstance(NativePtr->getBlockInstance(*pos));
}
AutomaticID<Dimension ^, int> ^ BlockSource::GetDimensionId()
{
    return gcnew AutomaticID<Dimension ^, int>(NativePtr->getDimensionId());
}
} // namespace MC

#ifdef INCLUDE_MCAPI

bool MC::BlockSource::HasBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::HasChunksAt(MC::BlockPos ^ _0, int _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasChunksAt(__arg0, _1);
    return __ret;
}

bool MC::BlockSource::HasChunksAt(MC::AABB ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasChunksAt(__arg0);
    return __ret;
}

bool MC::BlockSource::ContainsAnyLiquid(MC::AABB ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->containsAnyLiquid(__arg0);
    return __ret;
}

void MC::BlockSource::UnkVfn19()
{
    ((class ::BlockSource*)NativePtr)->__unk_vfn_19();
}

void MC::BlockSource::UnkVfn20()
{
    ((class ::BlockSource*)NativePtr)->__unk_vfn_20();
}

void MC::BlockSource::UnkVfn22()
{
    ((class ::BlockSource*)NativePtr)->__unk_vfn_22();
}

::System::Collections::Generic::List<MC::AABB ^> ^ MC::BlockSource::FetchAABBs(MC::AABB ^ _0, bool _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto& __ret = ((class ::BlockSource*)NativePtr)->fetchAABBs(__arg0, _1);
    auto _tmp__ret = gcnew ::System::Collections::Generic::List<MC::AABB ^>();
    auto __list0 = __ret;
    for (auto _element : __list0)
    {
        auto ___element = new class ::AABB(_element);
        auto _marshalElement = (___element == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)___element, true);
        _tmp__ret->Add(_marshalElement);
    }
    return (::System::Collections::Generic::List<MC::AABB ^> ^)(_tmp__ret);
}

void MC::BlockSource::UnkVfn26()
{
    ((class ::BlockSource*)NativePtr)->__unk_vfn_26();
}

bool MC::BlockSource::IsSolidBlockingBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->isSolidBlockingBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::AllowsRunes(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->allowsRunes(__arg0);
    return __ret;
}

bool MC::BlockSource::AreChunksFullyLoaded(MC::BlockPos ^ _0, MC::BlockPos ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->areChunksFullyLoaded(__arg0, __arg1);
    return __ret;
}

bool MC::BlockSource::AreChunksFullyLoaded(MC::BlockPos ^ _0, int _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->areChunksFullyLoaded(__arg0, _1);
    return __ret;
}

void MC::BlockSource::BlockEvent(MC::BlockPos ^ _0, int _1, int _2)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    ((class ::BlockSource*)NativePtr)->blockEvent(__arg0, _1, _2);
}

bool MC::BlockSource::CanSeeSky(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->canSeeSky(__arg0);
    return __ret;
}

bool MC::BlockSource::CanSeeSky(int _0, int _1, int _2)
{
    auto __ret = ((class ::BlockSource*)NativePtr)->canSeeSky(_0, _1, _2);
    return __ret;
}

bool MC::BlockSource::CanSeeSkyFromBelowWater(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->canSeeSkyFromBelowWater(__arg0);
    return __ret;
}

void MC::BlockSource::ClearDeletedEntities()
{
    ((class ::BlockSource*)NativePtr)->clearDeletedEntities();
}

bool MC::BlockSource::ContainsAnySolidBlocking(MC::AABB ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->containsAnySolidBlocking(__arg0);
    return __ret;
}

void MC::BlockSource::FetchActorIds(MC::AABB ^ _0, ::System::Collections::Generic::List<MC::ActorUniqueID ^> ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto _tmp_1 = std::vector<::ActorUniqueID>();
    for each (MC::ActorUniqueID ^ _element in _1)
    {
        if (ReferenceEquals(_element, nullptr))
            throw gcnew ::System::ArgumentNullException("_element", "Cannot be null because it is passed by value.");
        auto _marshalElement = *(struct ::ActorUniqueID*)_element->NativePtr;
        _tmp_1.push_back(_marshalElement);
    }
    auto __arg1 = _tmp_1;
    ((class ::BlockSource*)NativePtr)->fetchActorIds(__arg0, __arg1);
}

void MC::BlockSource::FetchActorIds(unsigned long long _0, MC::AABB ^ _1, ::System::Collections::Generic::List<MC::ActorUniqueID ^> ^ _2)
{
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::AABB*)_1->NativePtr;
    auto _tmp_2 = std::vector<::ActorUniqueID>();
    for each (MC::ActorUniqueID ^ _element in _2)
    {
        if (ReferenceEquals(_element, nullptr))
            throw gcnew ::System::ArgumentNullException("_element", "Cannot be null because it is passed by value.");
        auto _marshalElement = *(struct ::ActorUniqueID*)_element->NativePtr;
        _tmp_2.push_back(_marshalElement);
    }
    auto __arg2 = _tmp_2;
    ((class ::BlockSource*)NativePtr)->fetchActorIds(_0, __arg1, __arg2);
}

::System::Collections::Generic::List<MC::BlockActor ^> ^ MC::BlockSource::FetchBlockEntities(MC::AABB ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::AABB*)_0->NativePtr;
    auto& __ret = ((class ::BlockSource*)NativePtr)->fetchBlockEntities(__arg0);
    auto _tmp__ret = gcnew ::System::Collections::Generic::List<MC::BlockActor ^>();
    auto& __list0 = __ret;
    for (auto _element : __list0)
    {
        auto _marshalElement = (_element == nullptr) ? nullptr : gcnew ::MC::BlockActor((class ::BlockActor*)_element);
        _tmp__ret->Add(_marshalElement);
    }
    return (::System::Collections::Generic::List<MC::BlockActor ^> ^)(_tmp__ret);
}

bool MC::BlockSource::FindNextTopSolidBlockAbove(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->findNextTopSolidBlockAbove(__arg0);
    return __ret;
}

bool MC::BlockSource::FindNextTopSolidBlockUnder(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->findNextTopSolidBlockUnder(__arg0);
    return __ret;
}

void MC::BlockSource::FireAreaChanged(MC::BlockPos ^ _0, MC::BlockPos ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    ((class ::BlockSource*)NativePtr)->fireAreaChanged(__arg0, __arg1);
}

void MC::BlockSource::FireBrightnessChanged(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    ((class ::BlockSource*)NativePtr)->fireBrightnessChanged(__arg0);
}

short MC::BlockSource::GetAboveTopSolidBlock(MC::BlockPos ^ _0, bool _1, bool _2)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getAboveTopSolidBlock(__arg0, _1, _2);
    return __ret;
}

short MC::BlockSource::GetAboveTopSolidBlock(int _0, int _1, bool _2, bool _3)
{
    auto __ret = ((class ::BlockSource*)NativePtr)->getAboveTopSolidBlock(_0, _1, _2, _3);
    return __ret;
}

short MC::BlockSource::GetAllocatedHeightAt(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getAllocatedHeightAt(__arg0);
    return __ret;
}

float MC::BlockSource::GetBrightness(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getBrightness(__arg0);
    return __ret;
}

int MC::BlockSource::GetGrassColor(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getGrassColor(__arg0);
    return __ret;
}

short MC::BlockSource::GetHeightmap(int _0, int _1)
{
    auto __ret = ((class ::BlockSource*)NativePtr)->getHeightmap(_0, _1);
    return __ret;
}

short MC::BlockSource::GetHeightmap(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getHeightmap(__arg0);
    return __ret;
}

MC::BlockPos ^ MC::BlockSource::GetHeightmapPos(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getHeightmapPos(__arg0);
    auto ____ret = new class ::BlockPos(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*)____ret, true);
}

float MC::BlockSource::GetSeenPercent(MC::Vec3 ^ _0, MC::AABB ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::AABB*)_1->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getSeenPercent(__arg0, __arg1);
    return __ret;
}

float MC::BlockSource::GetVisualLiquidHeight(MC::Vec3 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->getVisualLiquidHeight(__arg0);
    return __ret;
}

bool MC::BlockSource::HasBorderBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is passed by value.");
    auto __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasBorderBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::HasChunksAt(MC::BlockPos ^ _0, MC::BlockPos ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasChunksAt(__arg0, __arg1);
    return __ret;
}

bool MC::BlockSource::HasTickInCurrentTick(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasTickInCurrentTick(__arg0);
    return __ret;
}

bool MC::BlockSource::HasTickInPendingTicks(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->hasTickInPendingTicks(__arg0);
    return __ret;
}

// bool MC::BlockSource::HasUntickedNeighborChunk(MC::ChunkPos ^ _0, int _1)
//{
//     if (ReferenceEquals(_0, nullptr))
//         throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
//     auto& __arg0 = *(class ::ChunkPos*)_0->NativePtr;
//     auto __ret = ((class ::BlockSource*)NativePtr)->hasUntickedNeighborChunk(__arg0, _1);
//     return __ret;
// }

bool MC::BlockSource::IsConsideredSolidBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->isConsideredSolidBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::IsEmptyBlock(int _0, int _1, int _2)
{
    auto __ret = ((class ::BlockSource*)NativePtr)->isEmptyBlock(_0, _1, _2);
    return __ret;
}

bool MC::BlockSource::IsEmptyBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->isEmptyBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::IsEmptyWaterBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->isEmptyWaterBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::IsInWall(MC::Vec3 ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::Vec3*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->isInWall(__arg0);
    return __ret;
}

bool MC::BlockSource::IsInstaticking(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->isInstaticking(__arg0);
    return __ret;
}

// bool MC::BlockSource::IsNearUnloadedChunks(MC::ChunkPos ^ _0)
//{
//     if (ReferenceEquals(_0, nullptr))
//         throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
//     auto& __arg0 = *(class ::ChunkPos*)_0->NativePtr;
//     auto __ret = ((class ::BlockSource*)NativePtr)->isNearUnloadedChunks(__arg0);
//     return __ret;
// }

bool MC::BlockSource::IsSolidBlockingBlock(int _0, int _1, int _2)
{
    auto __ret = ((class ::BlockSource*)NativePtr)->isSolidBlockingBlock(_0, _1, _2);
    return __ret;
}

void MC::BlockSource::NeighborChanged(MC::BlockPos ^ _0, MC::BlockPos ^ _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    ((class ::BlockSource*)NativePtr)->neighborChanged(__arg0, __arg1);
}

bool MC::BlockSource::RemoveBlock(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    auto __ret = ((class ::BlockSource*)NativePtr)->removeBlock(__arg0);
    return __ret;
}

bool MC::BlockSource::RemoveBlock(int _0, int _1, int _2)
{
    auto __ret = ((class ::BlockSource*)NativePtr)->removeBlock(_0, _1, _2);
    return __ret;
}

void MC::BlockSource::SetBorderBlock(MC::BlockPos ^ _0, bool _1)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    ((class ::BlockSource*)NativePtr)->setBorderBlock(__arg0, _1);
}

void MC::BlockSource::SpawnResources(MC::BlockPos ^ _0, float _1, int _2)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    ((class ::BlockSource*)NativePtr)->spawnResources(__arg0, _1, _2);
}

void MC::BlockSource::UpdateNeighborsAt(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    ((class ::BlockSource*)NativePtr)->updateNeighborsAt(__arg0);
}

void MC::BlockSource::UpdateNeighborsAtExceptFromFacing(MC::BlockPos ^ _0, MC::BlockPos ^ _1, int _2)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    ((class ::BlockSource*)NativePtr)->updateNeighborsAtExceptFromFacing(__arg0, __arg1, _2);
}

short MC::BlockSource::MinHeight::get()
{
    auto __ret = ((class ::BlockSource*)NativePtr)->getMinHeight();
    return __ret;
}

bool MC::BlockSource::PublicSource::get()
{
    auto __ret = ((class ::BlockSource*)NativePtr)->getPublicSource();
    return __ret;
}

short MC::BlockSource::VoidHeight::get()
{
    auto __ret = ((class ::BlockSource*)NativePtr)->getVoidHeight();
    return __ret;
}

#endif // INCLUDE_MCAPI
