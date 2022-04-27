#pragma once
#include <MC/Container.hpp>
#include "Types.hpp"

namespace MC
{
ref class ItemStack;
ref class Vec3;
}

namespace MC
{
public
ref class Container : ClassTemplate<Container, ::Container>
{
public:
    __ctor(Container, ::Container);

    inline System::String ^ GetTypeName();
    inline bool AddItem_s(ItemStack ^ item);
    inline bool AddItemToFirstEmptySlot_s(ItemStack ^ item);
    inline bool RemoveItem_s(int slot, unsigned int number);
    inline ItemStack ^ GetSlot(int slot);
    List<ItemStack ^> ^ GetAllSlots();
    inline int GetSize();
    inline bool HasContainer(Vec3 ^ pos, int dim);
    inline Container ^ GetContainerAt(Vec3 ^ pos, int dim);

#ifdef INCLUDE_MCAPI

    property int ContainerSize
    {
        int get();
    }

    property int MaxStackSize
    {
        int get();
    }

    property ::System::Collections::Generic::List<MC::ItemStack ^> ^ SlotCopies {
        ::System::Collections::Generic::List<MC::ItemStack ^> ^ get();
    }

        property ::System::Collections::Generic::List<MC::ItemStack ^> ^
        Slots {
            ::System::Collections::Generic::List<MC::ItemStack ^> ^ get();
        }

        property bool HasCustomName
    {
        bool get();
    }

    property bool IsEmpty
    {
        bool get();
    }

    property MC::ContainerType ContainerType
    {
        MC::ContainerType get();
    }

    property MC::ContainerType GameplayContainerType
    {
        MC::ContainerType get();
        void set(MC::ContainerType);
    }

    virtual void Init();

    virtual void RemoveItem(int _0, int _1);

    virtual void RemoveAllItems();

    virtual void UnkVfn22();

    virtual void UnkVfn23();

    virtual void SetContainerChanged(int _0);

    virtual void SetContainerMoved();

    virtual void SetCustomName(::System::String ^ _0);

    virtual void UnkVfn31();

    void InitRuntimeId();

    static MC::ContainerType GetContainerTypeId(::System::String ^ _0);

    static ::System::String ^ GetContainerTypeName(MC::ContainerType _0);

#endif // INCLUDE_MCAPI
};
} // namespace MC
