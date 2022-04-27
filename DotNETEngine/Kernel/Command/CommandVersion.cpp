#include "../../Header/Command/CommandVersion.hpp"
namespace MC
{
inline CommandVersion ^ CommandVersion::Create()
{
    return gcnew CommandVersion(::CommandVersion());
}
inline bool CommandVersion::IsCompatible(int a0)
{
    return NativePtr->isCompatible(a0);
}

inline bool CommandVersion::Covers(CommandVersion ^ cv)
{
    return NativePtr->covers(cv);
}

} // namespace MC