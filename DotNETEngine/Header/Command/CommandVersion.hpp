#pragma once
#include <MC/CommandVersion.hpp>
#include "../../Header/MC/Types.hpp"

namespace MC
{
public
ref class CommandVersion : ClassTemplate<CommandVersion, ::CommandVersion>
{
    __ctor_all(CommandVersion, ::CommandVersion);

    inline static CommandVersion ^ Create();
    inline bool IsCompatible(int a0);
    inline bool Covers(CommandVersion ^ cv);

    static property int CurrentVersion
    {
        static int get()
        {
            return ::CommandVersion::CurrentVersion;
        }
    }

    property int Min
    {
        int get()
        {
            return NativePtr->Min;
        }
        void set(int value)
        {
            NativePtr->Min = value;
        }
    }
    property int Max
    {
        int get()
        {
            return NativePtr->Max;
        }
        void set(int value)
        {
            NativePtr->Max = value;
        }
    }
};
} // namespace MC