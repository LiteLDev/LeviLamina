#include "../../Header/MC/BlockActor.hpp"

#include "../../Header/MC/CompoundTag.hpp"
#include "../../Header/MC/Block.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/AABB.hpp"

enum BlockActorType;

namespace MC
{

inline bool BlockActor::RefreshData()
{
    return NativePtr->refreshData();
}

inline CompoundTag ^ BlockActor::GetNbt()
{
    return gcnew CompoundTag(NativePtr->getNbt().release(), true);
}

inline bool BlockActor::SetNbt(CompoundTag ^ nbt)
{
    return NativePtr->setNbt(nbt->NativePtr);
}

inline unsigned int BlockActor::getBlockEntityType(Block ^ block)
{
    return block->NativePtr->getBlockEntityType();
}

} // namespace MC

#ifdef INCLUDE_MCAPI

void MC::BlockActor::UnkVfn12()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_12();
}

void MC::BlockActor::TriggerEvent(int _0, int _1)
{
    ((class ::BlockActor*)NativePtr)->triggerEvent(_0, _1);
}

void MC::BlockActor::ClearCache()
{
    ((class ::BlockActor*)NativePtr)->clearCache();
}

void MC::BlockActor::UnkVfn16()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_16();
}

void MC::BlockActor::GetDebugText(::System::Collections::Generic::List<::System::String ^> ^ _0, MC::BlockPos ^ _1)
{
    auto _tmp_0 = std::vector<::std::string>();
    for each (::System::String ^ _element in _0)
    {
        auto _marshalElement = clix::marshalString<clix::E_UTF8>(_element);
        _tmp_0.push_back(_marshalElement);
    }
    auto __arg0 = _tmp_0;
    if (ReferenceEquals(_1, nullptr))
        throw gcnew ::System::ArgumentNullException("_1", "Cannot be null because it is a C++ reference (&).");
    auto& __arg1 = *(class ::BlockPos*)_1->NativePtr;
    ((class ::BlockActor*)NativePtr)->getDebugText(__arg0, __arg1);
}

void MC::BlockActor::UnkVfn28()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_28();
}

void MC::BlockActor::UnkVfn29()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_29();
}

void MC::BlockActor::UnkVfn31()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_31();
}

void MC::BlockActor::UnkVfn32()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_32();
}

void MC::BlockActor::UnkVfn33()
{
    ((class ::BlockActor*)NativePtr)->__unk_vfn_33();
}

void MC::BlockActor::MoveTo(MC::BlockPos ^ _0)
{
    if (ReferenceEquals(_0, nullptr))
        throw gcnew ::System::ArgumentNullException("_0", "Cannot be null because it is a C++ reference (&).");
    auto& __arg0 = *(class ::BlockPos*)_0->NativePtr;
    ((class ::BlockActor*)NativePtr)->moveTo(__arg0);
}

void MC::BlockActor::SetChanged()
{
    ((class ::BlockActor*)NativePtr)->setChanged();
}

void MC::BlockActor::SetMovable(bool _0)
{
    ((class ::BlockActor*)NativePtr)->setMovable(_0);
}

bool MC::BlockActor::CustomNameSaved::get()
{
    auto __ret = ((class ::BlockActor*)NativePtr)->isCustomNameSaved();
    return __ret;
}

void MC::BlockActor::CustomNameSaved::set(bool _0)
{
    ((class ::BlockActor*)NativePtr)->setCustomNameSaved(_0);
}

bool MC::BlockActor::HasAlphaLayer::get()
{
    auto __ret = ((class ::BlockActor*)NativePtr)->hasAlphaLayer();
    return __ret;
}

::System::String ^ MC::BlockActor::CustomName::get()
{
    auto& __ret = ((class ::BlockActor*)NativePtr)->getCustomName();
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

void MC::BlockActor::CustomName::set(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    ((class ::BlockActor*)NativePtr)->setCustomName(__arg0);
}

::System::String ^ MC::BlockActor::Name::get()
{
    auto __ret = ((class ::BlockActor*)NativePtr)->getName();
    return clix::marshalString<clix::E_UTF8>(__ret);
}

int MC::BlockActor::RepairCost::get()
{
    auto __ret = ((class ::BlockActor*)NativePtr)->getRepairCost();
    return __ret;
}

float MC::BlockActor::DeletionDelayTimeSeconds::get()
{
    auto __ret = ((class ::BlockActor*)NativePtr)->getDeletionDelayTimeSeconds();
    return __ret;
}

MC::AABB ^ MC::BlockActor::AABB::get()
{
    auto& __ret = ((class ::BlockActor*)NativePtr)->getAABB();
    return (MC::AABB ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::AABB((class ::AABB*)&__ret));
}

MC::BlockPos ^ MC::BlockActor::Position::get()
{
    auto& __ret = ((class ::BlockActor*)NativePtr)->getPosition();
    return (MC::BlockPos ^)((&__ret == nullptr) ? nullptr : gcnew ::MC::BlockPos((class ::BlockPos*)&__ret));
}

bool MC::BlockActor::IgnoreLighting::get()
{
    auto __ret = ((class ::BlockActor*)NativePtr)->ignoreLighting();
    return __ret;
}

void MC::BlockActor::IgnoreLighting::set(bool _0)
{
    ((class ::BlockActor*)NativePtr)->setIgnoreLighting(_0);
}

#endif // INCLUDE_MCAPI
