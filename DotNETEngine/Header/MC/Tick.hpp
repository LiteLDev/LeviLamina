#pragma once
#include <MC/Tick.hpp>
#include "Types.hpp"

namespace MC
{

public
ref struct Tick : ClassTemplate<Tick, ::Tick>
{

    __ctor(Tick, ::Tick);

    property unsigned long long T
    {
        unsigned long long get()
        {
            return NativePtr->t;
        }
    }
};

} // namespace MC
