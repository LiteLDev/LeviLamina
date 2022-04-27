#include "../../Header/MC/Container.hpp"

#include "../../Header/MC/ItemStack.hpp"
#include "../../Header/MC/Vec3.hpp"

namespace MC
{

inline System::String ^ Container::GetTypeName()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getTypeName());
}

inline bool Container::AddItem_s(ItemStack ^ item)
{
    return NativePtr->addItem_s(item->NativePtr);
}

inline bool Container::AddItemToFirstEmptySlot_s(ItemStack ^ item)
{
    return NativePtr->addItemToFirstEmptySlot_s(item->NativePtr);
}

inline bool Container::RemoveItem_s(int slot, unsigned int number)
{
    return NativePtr->removeItem_s(slot, number);
}

inline ItemStack ^ Container::GetSlot(int slot)
{
    return gcnew ItemStack(NativePtr->getSlot(slot));
}

List<ItemStack ^> ^ Container::GetAllSlots()
{
    std::vector<const ::ItemStack*>& vector = NativePtr->getAllSlots();
    int len = int(vector.size());
    List<ItemStack ^> ^ list = gcnew List<ItemStack ^>(len);
    for (int i = 0; i < len; ++i)
    {
        list[i] = gcnew ItemStack((::ItemStack*)vector[i]);
    }
    return list;
}

inline int Container::GetSize()
{
    return NativePtr->getSize();
}

inline bool Container::HasContainer(Vec3 ^ pos, int dim)
{
    return NativePtr->hasContainer(pos, dim);
}

inline Container ^ Container::GetContainerAt(Vec3 ^ pos, int dim)
{
    return gcnew Container(NativePtr->getContainerAt(pos, dim));
}
} // namespace MC


#ifdef INCLUDE_MCAPI
void MC::Container::Init()
{
    ((class ::Container*)NativePtr)->init();
}

void MC::Container::RemoveItem(int _0, int _1)
{
    ((class ::Container*)NativePtr)->removeItem(_0, _1);
}

void MC::Container::RemoveAllItems()
{
    ((class ::Container*)NativePtr)->removeAllItems();
}

void MC::Container::UnkVfn22()
{
    ((class ::Container*)NativePtr)->__unk_vfn_22();
}

void MC::Container::UnkVfn23()
{
    ((class ::Container*)NativePtr)->__unk_vfn_23();
}

void MC::Container::SetContainerChanged(int _0)
{
    ((class ::Container*)NativePtr)->setContainerChanged(_0);
}

void MC::Container::SetContainerMoved()
{
    ((class ::Container*)NativePtr)->setContainerMoved();
}

void MC::Container::SetCustomName(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    ((class ::Container*)NativePtr)->setCustomName(__arg0);
}

void MC::Container::UnkVfn31()
{
    ((class ::Container*)NativePtr)->__unk_vfn_31();
}

void MC::Container::InitRuntimeId()
{
    ((class ::Container*)NativePtr)->initRuntimeId();
}

MC::ContainerType MC::Container::GetContainerTypeId(::System::String ^ _0)
{
    auto __arg0 = clix::marshalString<clix::E_UTF8>(_0);
    auto __ret = ::Container::getContainerTypeId(__arg0);
    return (MC::ContainerType)__ret;
}

::System::String ^ MC::Container::GetContainerTypeName(MC::ContainerType _0)
{
    auto __arg0 = (::ContainerType)_0;
    auto& __ret = ::Container::getContainerTypeName(__arg0);
    return (::System::String ^)(clix::marshalString<clix::E_UTF8>(__ret));
}

int MC::Container::ContainerSize::get()
{
    auto __ret = ((class ::Container*)NativePtr)->getContainerSize();
    return __ret;
}

int MC::Container::MaxStackSize::get()
{
    auto __ret = ((class ::Container*)NativePtr)->getMaxStackSize();
    return __ret;
}

::System::Collections::Generic::List<MC::ItemStack ^> ^ MC::Container::SlotCopies::get()
{
    auto __ret = ((class ::Container*)NativePtr)->getSlotCopies();
    auto _tmp__ret = gcnew ::System::Collections::Generic::List<MC::ItemStack ^>();
    for (auto& _element : __ret)
    {
        auto ___element = new class ::ItemStack(_element);
        auto _marshalElement = (___element == nullptr) ? nullptr : gcnew ::MC::ItemStack((class ::ItemStack*)___element, true);
        _tmp__ret->Add(_marshalElement);
    }
    return _tmp__ret;
}

::System::Collections::Generic::List<MC::ItemStack ^> ^ MC::Container::Slots::get()
{
    auto __ret = ((class ::Container*)NativePtr)->getSlots();
    auto _tmp__ret = gcnew ::System::Collections::Generic::List<MC::ItemStack ^>();
    auto __list0 = __ret;
    for (auto _element : __list0)
    {
        auto _marshalElement = (_element == nullptr) ? nullptr : gcnew ::MC::ItemStack((class ::ItemStack*)_element);
        _tmp__ret->Add(_marshalElement);
    }
    return _tmp__ret;
}

bool MC::Container::HasCustomName::get()
{
    auto __ret = ((class ::Container*)NativePtr)->hasCustomName();
    return __ret;
}

bool MC::Container::IsEmpty::get()
{
    auto __ret = ((class ::Container*)NativePtr)->isEmpty();
    return __ret;
}

MC::ContainerType MC::Container::ContainerType::get()
{
    auto __ret = ((class ::Container*)NativePtr)->getContainerType();
    return (MC::ContainerType)__ret;
}

MC::ContainerType MC::Container::GameplayContainerType::get()
{
    auto __ret = ((class ::Container*)NativePtr)->getGameplayContainerType();
    return (MC::ContainerType)__ret;
}

void MC::Container::GameplayContainerType::set(MC::ContainerType _0)
{
    auto __arg0 = (::ContainerType)_0;
    ((class ::Container*)NativePtr)->setGameplayContainerType(__arg0);
}

#endif // INCLUDE_MCAPI
