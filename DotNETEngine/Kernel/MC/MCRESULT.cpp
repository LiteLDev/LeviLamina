#include "../../Header/MC/MCRESULT.hpp"
namespace MC
{
array<unsigned char> ^ MCRESULT::Filler::get()
{
    return gcnew array<unsigned char>{
        NativePtr->filler[0],
        NativePtr->filler[1],
        NativePtr->filler[2],
        NativePtr->filler[3]};
}
inline void MCRESULT::Filler::set(array<unsigned char> ^ arg)
{
    NativePtr->filler[0] = arg[0];
    NativePtr->filler[1] = arg[1];
    NativePtr->filler[2] = arg[2];
    NativePtr->filler[3] = arg[3];
}
inline MCRESULT::operator bool()
{
    return bool(NativePtr->filler[0]);
}

inline int MCRESULT::GetFullCode()
{
    return NativePtr->getFullCode();
}

inline bool MCRESULT::IsSuccess()
{
    return NativePtr->isSuccess();
}
} // namespace MC
