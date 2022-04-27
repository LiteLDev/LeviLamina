#pragma once
#include <MC/ItemInstance.hpp>
#include "Types.hpp"

namespace MC
{
public
ref class ItemInstance : ClassTemplate<ItemInstance, ::ItemInstance>
{
public:
    __ctor_all(ItemInstance, ::ItemInstance);

#ifdef INCLUDE_MCAPI

    //void Autoclassinit2(unsigned long long _0);

    MC::ItemInstance ^ Clone();

    static property MC::ItemInstance ^ EMPTY_ITEM {
        MC::ItemInstance ^ get();
    }
#endif // INCLUDE_MCAPI
};
} // namespace MC
