#pragma once
#include <MC/CommandPropertyBag.hpp>
#include "../../Header/MC/Types.hpp"

namespace MC
{
ref class Vec3;
}

namespace MC
{
public
ref class CommandPropertyBag : ClassTemplate<CommandPropertyBag, ::CommandPropertyBag>
{
public:
    __ctor(CommandPropertyBag, ::CommandPropertyBag);

    inline void AddToResultList(System::String ^ str0, System::String ^ str1);
    inline void Set(System::String ^ str, BlockPos ^ bp);
    inline void Set(System::String ^ str, Vec3 ^ bp);
};
} // namespace MC
