#include "../../Header/MC/ItemInstance.hpp"
namespace MC
{
}

#ifdef INCLUDE_MCAPI

//void MC::ItemInstance::Autoclassinit2(unsigned long long _0)
//{
//    ((class ::ItemInstance*)NativePtr)->__autoclassinit2(_0);
//}

MC::ItemInstance ^ MC::ItemInstance::Clone()
{
    auto __ret = ((class ::ItemInstance*)NativePtr)->clone();
    auto ____ret = new class ::ItemInstance(__ret);
    return (____ret == nullptr) ? nullptr : gcnew ::MC::ItemInstance((class ::ItemInstance*)____ret, true);
}

MC::ItemInstance ^ MC::ItemInstance::EMPTY_ITEM::get()
{
    return (&::ItemInstance::EMPTY_ITEM == nullptr) ? nullptr : gcnew ::MC::ItemInstance((class ::ItemInstance*)&::ItemInstance::EMPTY_ITEM);
}
#endif // INCLUDE_MCAPI
