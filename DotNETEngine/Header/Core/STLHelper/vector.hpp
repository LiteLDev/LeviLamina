#pragma once
#include "../../../Main/.NETGlobal.hpp"

namespace LLNET::Core::Std
{
using System::Reflection::DefaultMemberAttribute;
using System::Runtime::InteropServices::FieldOffsetAttribute;
[DefaultMemberAttribute("Item")][StructLayoutAttribute(LayoutKind::Explicit, Size = 24)] public value class vector
{
private:
    [FieldOffsetAttribute(8)] int64_t _Myfirst;
    [FieldOffsetAttribute(16)] int64_t _Mylast;
    [FieldOffsetAttribute(24)] int64_t _Myend;

private:
public:
    // property void* NativePtr
    //{
    // public:
    //     void* get()
    //     {
    //         return _nativePtr;
    //     }

    // protected:
    //     void set(void* value)
    //     {
    //         _nativePtr = value;
    //     }
    // }

    // property bool OwnsNativeInstance
    //{
    // public:
    //     bool get()
    //     {
    //         return _ownsNativeInstance;
    //     }

    // protected:
    //     void set(bool value)
    //     {
    //         _ownsNativeInstance = value;
    //     }
    // }

    // property int Size
    //{
    // public:
    //     int get()
    //     {
    //         return _size;
    //     }

    // protected:
    //     void set(int value)
    //     {
    //         _size = value;
    //     }
    // }

    // property IntPtr AsIntPtr
    //{
    //     IntPtr get()
    //     {
    //         return IntPtr(_nativePtr);
    //     }
    // }

    //// Constructor

    // vector(IntPtr p, bool ownsNativeInstance, int size)
    //{
    //     NativePtr = (void*)p;
    // }
    vector(void* p)
    {
        pin_ptr<void> _p = this;
        memcpy(_p, p, 24);
    }

    String ^ ToString() override
    {
        return String::Format("_Myfirst:0x{0:X} _Mylast:0x{1:X} _Myend:0x{2:X}", _Myfirst, _Mylast, _Myend);
    }

public:
    value class iterator
    {
    public:
        int size;
        void* ptr;

    public:
        IntPtr get()
        {
            return IntPtr(_get());
        }
        void* _get()
        {
            return (void*)*(intptr_t*)(*(intptr_t*)ptr);
        }
        static iterator operator++(iterator iter)
        {
            auto i = iter;
            *(intptr_t*)i.ptr += 8;
            return i;
        }
        static iterator operator--(iterator iter)
        {
            auto i = iter;
            *(intptr_t*)i.ptr += 8;
            return i;
        }
        static iterator operator+(iterator iter, int64_t val)
        {
            auto _Tmp = iter;
            *(intptr_t*)_Tmp.ptr += val * 8;
            return _Tmp;
        }
        static iterator operator-(iterator iter, int64_t val)
        {
            auto _Tmp = iter;
            *(intptr_t*)_Tmp.ptr -= val * 8;
            return _Tmp;
        }
        static bool operator==(iterator a, iterator b)
        {
            return a.size == b.size && (intptr_t)a.ptr == (intptr_t)b.ptr;
        }
        static bool operator!=(iterator a, iterator b)
        {
            return a.size != b.size || (intptr_t)a.ptr != (intptr_t)b.ptr;
        }
    };

    // Member functions
    // iterator begin()
    //{
    //    return iterator{_size, (void*)*(intptr_t*)_nativePtr};
    //}

    // iterator end()
    //{
    //     return iterator{_size, (void*)(*(intptr_t*)_nativePtr + 8)};
    // }

    // size_t size()
    //{
    //     return *(intptr_t*)((int64_t)_nativePtr + 8) - (*(intptr_t*)_nativePtr >> 3);
    // }
    // property IntPtr Item[int64_t]
    //{
    //     IntPtr get(int64_t index)
    //     {
    //         return IntPtr(*(intptr_t*)_nativePtr + 8 * index);
    //     }
    //     // void set(int64_t index, IntPtr p)
    //     //{
    //     // }
    // }
};


} // namespace LLNET::Core::Std
