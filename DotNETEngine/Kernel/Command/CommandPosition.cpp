#include "../../Header/Command/CommandPosition.hpp"
#include "../../Header/Command/CommandOrigin.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/CompoundTag.hpp"
namespace MC
{

CommandPosition ^ CommandPosition::Create(Vec3 ^ vec)
{
    return gcnew CommandPosition(::CommandPosition(vec));
}

CommandPosition ^ CommandPosition::Create()
{
    return gcnew CommandPosition(::CommandPosition());
}

BlockPos ^ MC::CommandPosition::GetBlockPos(CommandOrigin ^ co, Vec3 ^ vec)
{
    return gcnew BlockPos(NativePtr->getBlockPos((::CommandOrigin&)co, (::Vec3&)vec));
}

BlockPos ^ CommandPosition::GetBlockPos(Vec3 ^ vec0, Vec3 ^ vec1)
{
    return gcnew BlockPos(NativePtr->getBlockPos((::Vec3&)vec0, (::Vec3&)vec1));
}
Vec3 ^ CommandPosition::GetPosition(Vec3 ^ vec0, Vec3 ^ vec1)
{
    return gcnew Vec3(NativePtr->getPosition((::Vec3&)vec0, (::Vec3&)vec1));
}
Vec3 ^ CommandPosition::GetPosition(CommandOrigin ^ co, Vec3 ^ vec0)
{
    return gcnew Vec3(NativePtr->getPosition((::CommandOrigin&)co, (::Vec3&)vec0));
}
void CommandPosition::Load(CompoundTag ^ ct)
{
    NativePtr->load(*(ct->NativePtr));
}
CompoundTag ^ CommandPosition::Serialize()
{
    return gcnew CompoundTag(&NativePtr->serialize());
}
} // namespace MC