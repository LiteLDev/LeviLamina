#include "../../Header/MC/Attribute.hpp"
namespace MC
{
}

#ifdef INCLUDE_MCAPI

unsigned int MC::Attribute::IDValue::get()
{
    auto __ret = ((class ::Attribute*)NativePtr)->getIDValue();
    return __ret;
}

bool MC::Attribute::IsClientSyncable::get()
{
    auto __ret = ((class ::Attribute*)NativePtr)->isClientSyncable();
    return __ret;
}

#endif // INCLUDE_MCAPI
