#include "../../Header/Command/CommandPropertyBag.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/Vec3.hpp"
namespace MC
{
inline void CommandPropertyBag::AddToResultList(System::String ^ str0, System::String ^ str1)
{
    NativePtr->addToResultList(marshalString<Encoding::E_UTF8>(str0), marshalString<Encoding::E_UTF8>(str1));
}

inline void CommandPropertyBag::Set(System::String ^ str, BlockPos ^ bp)
{
    NativePtr->set(marshalString<Encoding::E_UTF8>(str), bp);
}

inline void CommandPropertyBag::Set(System::String ^ str, Vec3 ^ bp)
{
    NativePtr->set(marshalString<Encoding::E_UTF8>(str), bp);
}

} // namespace MC