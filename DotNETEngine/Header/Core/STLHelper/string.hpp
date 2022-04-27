#pragma once
#include "../../../Tools/clix.hpp"
#include "../../../Main/ClassTemplate.h"
#include <memory>

namespace LLNET::Core::Std
{
using namespace clix;
// public
// ref class uniquePtr_std_string
//{
//     std::unique_ptr<std::string>* _this;
//
// public:
//     uniquePtr_std_string(std::unique_ptr<std::string>& uptr)
//         : _this(new std::unique_ptr<std::string>(std::move(uptr)))
//     {
//     }
//     ~uniquePtr_std_string()
//     {
//         delete _this;
//     }
//     property String ^ string {
//         String ^ get() { return marshalString<Encoding::E_UTF8>(**_this); } void set(String ^ val)
//         {
//             **_this = marshalString<Encoding::E_UTF8>(val);
//         }
//     } char % operator[](size_t index)
//     {
//         if (index > (**_this).size())
//             throw gcnew System::IndexOutOfRangeException;
//         return (**_this)[index];
//     }
//     uniquePtr_std_string ^ operator=(String ^ b)
//     {
//         (**_this) = marshalString<Encoding::E_UTF8>(b);
//         return this;
//     }
//     uniquePtr_std_string ^ operator=(uniquePtr_std_string ^ b)
//     {
//         (**_this) = (**b->_this);
//         return this;
//     }
// };

public
ref class string : ClassTemplate<string, std::string>
{
public:
    __ctor_all(string, std::string);

public:
    ref class iterator : ClassTemplate<iterator, std::string::iterator>
    {
    public:
        __ctor_all(iterator, std::string::iterator);

    public:
        char % Dereference()
        {
            return NativePtr->operator*();
        }
        iterator ^ operator+(int val)
        {
            return gcnew iterator(NativePtr->operator+(val));
        }
        iterator ^ operator-(int val)
        {
            return gcnew iterator(NativePtr->operator-(val));
        }
        bool operator>(iterator ^ obj)
        {
            return NativePtr->operator>(*obj->NativePtr);
        }
        bool operator<(iterator ^ obj)
        {
            return NativePtr->operator<(*obj->NativePtr);
        }
        bool operator>=(iterator ^ obj)
        {
            return NativePtr->operator>=(*obj->NativePtr);
        }
        bool operator<=(iterator ^ obj)
        {
            return NativePtr->operator<=(*obj->NativePtr);
        }
        iterator ^ operator++(int val)
        {
            NativePtr->operator++(val);
            return this;
        }
        iterator ^ operator--(int val)
        {
            NativePtr->operator++(val);
            return this;
        }
        iterator ^ operator=(iterator ^ obj)
        {
            *NativePtr = *obj->NativePtr;
            return this;
        }
    };

public:
    string()
    {
        NativePtr = new std::string;
        OwnsNativeInstance = true;
    }
    string(System::String ^ str)
    {
        NativePtr = new std::string(marshalString<Encoding::E_UTF8>(str));
        OwnsNativeInstance = true;
    }
    iterator ^ begin() {
        return gcnew iterator(NativePtr->begin());
    };
    iterator ^ end() {
        return gcnew iterator(NativePtr->end());
    };
    char % operator[](size_t index)
    {
        return NativePtr->operator[](index);
    }
    size_t size()
    {
        return NativePtr->size();
    }
    size_t length()
    {
        return NativePtr->length();
    }
    size_t max_size()
    {
        return NativePtr->max_size();
    }
    void resize(size_t size)
    {
        NativePtr->resize(size);
    }
    size_t capacity()
    {
        return NativePtr->capacity();
    }
    void reserve(size_t size)
    {
        NativePtr->reserve(size);
    }
    void clear()
    {
        NativePtr->clear();
    }
    bool empty()
    {
        return NativePtr->empty();
    }
    void shrink_to_fit()
    {
        NativePtr->shrink_to_fit();
    }
    char % at(size_t size)
    {
        return NativePtr->at(size);
    }
    char % back()
    {
        return NativePtr->back();
    }
    char % front()
    {
        return NativePtr->front();
    }
    string ^ operator+=(string ^ str)
    {
        *NativePtr += *str->NativePtr;
        return this;
    }
    string ^ append(string ^ str) {
        NativePtr->append(*str->NativePtr);
        return this;
    };
    string ^ push_back(char c) {
        NativePtr->push_back(c);
        return this;
    };
    string ^ assign(string ^ obj) {
        NativePtr->assign(*obj->NativePtr);
        return this;
    };
};
} // namespace LLNET::Core::Std
