#pragma once

#include <MC/ItemStack.hpp>
#include <MC/ItemInstance.hpp>
#include "ItemStackBase.hpp"
#include "ItemInstance.hpp"
#include "Types.hpp"
#include "CompoundTag.hpp"

namespace MC
{
ref class ItemStackBase;
ref class ItemInstance;
}

namespace MC
{
public
ref class ItemStack : ItemStackBase
{
public:
    __ctor_base(ItemStack, ::ItemStack, ItemStackBase);

    inline static ItemStack ^ Create();
    inline static ItemStack ^ Create(String ^ type, int count);
    inline static ItemStack ^ Create(CompoundTag ^ tag);
    inline static ItemStack ^ FromItemInstance(ItemInstance ^ ins);

    inline ItemStack ^ Clone_s();
    inline bool setItem(ItemStack ^ newItem);
    bool setLore(array<String ^> ^ lores);
    inline CompoundTag ^ getNbt();
    inline bool setNbt(CompoundTag ^ nbt);

    property String ^ TypeName { String ^ get(); };

    property int Aux
    {
        int get();
    }
    property int Count
    {
        int get();
    }

#ifdef INCLUDE_MCAPI

    // property MC::ItemStackNetIdVariant ^ ItemStackNetIdVariant {
    //     MC::ItemStackNetIdVariant ^ get();
    // }

    property int MaxUseDuration
    {
        int get();
    }

    property MC::ItemStack ^ StrippedNetworkItem {
        MC::ItemStack ^ get();
    }

        property bool HasItemStackNetId
    {
        bool get();
    }

    virtual void SetNull() override;

    virtual ::System::String ^ ToString() override;

    virtual ::System::String ^ ToDebugString() override;

    // void Autoclassinit2(unsigned long long _0);

    void AssignNetIdVariant(MC::ItemStack ^ _0);

    MC::ItemStack ^ Clone();

    bool MatchesAndNetIdVariantMatches(MC::ItemStack ^ _0);

    bool MatchesNetIdVariant(MC::ItemStack ^ _0);

    bool SameItemAndAuxAndBlockData(MC::ItemStack ^ _0);

    void ServerInitNetId();

    void UseAsFuel();

    static property MC::ItemStack ^ EMPTY_ITEM {
        MC::ItemStack ^ get();
    }
#endif // INCLUDE_MCAPI
};
} // namespace MC
