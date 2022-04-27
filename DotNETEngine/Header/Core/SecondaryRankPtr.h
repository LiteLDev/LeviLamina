#pragma once
namespace LLNET::Core
{
public
value class SecondaryRankPtr
{
private:
    void** ptr;

public:
    SecondaryRankPtr(void** p2)
        : ptr(p2)
    {
    }
    /// <param name="p2">:Secondary Rank Pointer IntPtr </param>
    SecondaryRankPtr(System::IntPtr % p2)
        : ptr((void**)p2.ToPointer())
    {
    }
    inline void** ToSecPointer()
    {
        return ptr;
    }
    inline void* ToPointer()
    {
        return *ptr;
    }
    /// <returns>IntPtr(ptr)   type:void**</returns>
    inline System::IntPtr ToSecIntPtr()
    {
        return System::IntPtr(ptr);
    }
    /// <returns>IntPtr(*ptr)   type:void*</returns>
    inline System::IntPtr ToIntPtr()
    {
        return System::IntPtr(*ptr);
    }
    inline operator void**()
    {
        return ptr;
    }
    inline operator void*()
    {
        return *ptr;
    }
};
}
