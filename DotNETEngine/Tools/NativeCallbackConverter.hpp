#include <Utils/Hash.h>
#include "../Main/Global.hpp"
#pragma once

constexpr size_t do_hash()
{
    return 0;
}

using CHash = size_t;

public ref class NativeCallbackHandler
{
};

#define NativeCallbackConvertHelper(class_name, callback_delegate, ret, ...)                                                                      \
                                                                                                                                                    \
    template <CHash, CHash>                                                                                                                         \
    ref class NativeCallbackTemplate;                                                                                                               \
                                                                                                                                                    \
    template <>                                                                                                                                     \
    ref class NativeCallbackTemplate<do_hash(#class_name) ^ do_hash(#ret), do_hash(#callback_delegate) ^ do_hash(#__VA_ARGS__)>                     \
        : public NativeCallbackHandler                                                                                                              \
    {                                                                                                                                               \
    public:                                                                                                                                         \
        typedef ret (*pCallback)(__VA_ARGS__);                                                                                                      \
        delegate ret delCallback(__VA_ARGS__);                                                                                                      \
                                                                                                                                                    \
    public:                                                                                                                                         \
        GCHandle gch;                                                                                                                               \
        callback_delegate ^ delfunc;                                                                                                                \
                                                                                                                                                    \
    public:                                                                                                                                         \
        value class Pair                                                                                                                            \
        {                                                                                                                                           \
        public:                                                                                                                                     \
            pCallback pCallbackFn;                                                                                                                  \
            NativeCallbackTemplate ^ converter;                                                                                                     \
            Pair(pCallback p, NativeCallbackTemplate ^ obj)                                                                                         \
                : pCallbackFn(p)                                                                                                                    \
                , converter(obj)                                                                                                                    \
            {                                                                                                                                       \
            }                                                                                                                                       \
        };                                                                                                                                          \
                                                                                                                                                    \
    protected:                                                                                                                                      \
        NativeCallbackTemplate()                                                                                                                    \
            : delfunc(nullptr)                                                                                                                      \
        {                                                                                                                                           \
        }                                                                                                                                           \
        NativeCallbackTemplate(callback_delegate ^ callback)                                                                                        \
            : delfunc(callback)                                                                                                                     \
        {                                                                                                                                           \
        }                                                                                                                                           \
        ~NativeCallbackTemplate()                                                                                                                   \
        {                                                                                                                                           \
            this->!NativeCallbackTemplate();                                                                                                        \
            GC::SuppressFinalize(this);                                                                                                             \
        }                                                                                                                                           \
        !NativeCallbackTemplate()                                                                                                                   \
        {                                                                                                                                           \
            if (gch.IsAllocated)                                                                                                                    \
                gch.Free();                                                                                                                         \
        }                                                                                                                                           \
                                                                                                                                                    \
    private:                                                                                                                                        \
        ret NATIVECALLBACK NativeCallbackFunc(__VA_ARGS__);                                                                                         \
                                                                                                                                                    \
    public:                                                                                                                                         \
        static Pair Create(callback_delegate ^ callback)                                                                                            \
        {                                                                                                                                           \
            auto instance = gcnew NativeCallbackTemplate(callback);                                                                                 \
            delCallback ^ del = gcnew delCallback(instance, &NativeCallbackFunc);                                                                   \
            instance->gch = GCHandle::Alloc(del);                                                                                                   \
            auto p = static_cast<pCallback>((void*)Marshal::GetFunctionPointerForDelegate(del));                                                    \
            return Pair(p, instance);                                                                                                               \
        }                                                                                                                                           \
    };                                                                                                                                              \
                                                                                                                                                    \
    ref class class_name : public NativeCallbackTemplate<do_hash(#class_name) ^ do_hash(#ret), do_hash(#callback_delegate) ^ do_hash(#__VA_ARGS__)> \
    {                                                                                                                                               \
    };                                                                                                                                              \
                                                                                                                                                    \
    ret NativeCallbackTemplate<do_hash(#class_name) ^ do_hash(#ret), do_hash(#callback_delegate) ^ do_hash(#__VA_ARGS__)>::NativeCallbackFunc(__VA_ARGS__)
