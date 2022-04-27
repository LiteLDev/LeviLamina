#pragma once
#define __ctor(RefClass, NativeClass)                   \
    RefClass(System::IntPtr p)                          \
        : ClassTemplate(p)                              \
    {                                                   \
    }                                                   \
    RefClass(System::IntPtr p, bool ownsNativeInstance) \
        : ClassTemplate(p, ownsNativeInstance)          \
    {                                                   \
    }                                                   \
    RefClass(NativeClass* p)                            \
        : ClassTemplate(p)                              \
    {                                                   \
    }                                                   \
    RefClass(NativeClass* p, bool ownsNativeInstance)   \
        : ClassTemplate(p, ownsNativeInstance)          \
    {                                                   \
    }                                                   \
    RefClass(void* p)                                   \
        : ClassTemplate(p)                              \
    {                                                   \
    }                                                   \
    RefClass(void* p, bool ownsNativeInstance)          \
        : ClassTemplate(p, ownsNativeInstance)          \
    {                                                   \
    }

#define __ctor_copy(RefClass, NativeClass) \
    RefClass(NativeClass& r)               \
        : ClassTemplate(r)                 \
    {                                      \
    }

#define __ctor_move(RefClass, NativeClass) \
    RefClass(NativeClass&& m)              \
        : ClassTemplate(m)                 \
    {                                      \
    }

#define __ctor_all(RefClass, NativeClass) \
    __ctor(RefClass, NativeClass);        \
    internal:                             \
    __ctor_copy(RefClass, NativeClass);   \
    __ctor_move(RefClass, NativeClass);   \
                                          \
public:


#define __ctor_base(RefClass, NativeClass, BaseClass)               \
    RefClass(System::IntPtr p)                                      \
        : BaseClass(p)                                              \
    {                                                               \
    }                                                               \
    RefClass(System::IntPtr p, bool ownsNativeInstance)             \
        : BaseClass(p, ownsNativeInstance)                          \
    {                                                               \
    }                                                               \
    RefClass(NativeClass* p)                                        \
        : BaseClass(p)                                              \
    {                                                               \
    }                                                               \
    RefClass(NativeClass* p, bool ownsNativeInstance)               \
        : BaseClass(p, ownsNativeInstance)                          \
    {                                                               \
    }                                                               \
    RefClass(void* p)                                               \
        : BaseClass(p)                                              \
    {                                                               \
    }                                                               \
    RefClass(void* p, bool ownsNativeInstance)                      \
        : BaseClass(p, ownsNativeInstance)                          \
    {                                                               \
    }                                                               \
    property NativeClass* NativePtr                                 \
    {                                                               \
    public:                                                         \
        NativeClass* get()                                          \
        {                                                           \
            return static_cast<NativeClass*>(BaseClass::NativePtr); \
        }                                                           \
                                                                    \
    protected:                                                      \
        void set(NativeClass* value)                                \
        {                                                           \
            BaseClass::NativePtr = value;                           \
        }                                                           \
    }


#define __ctor_copy_base(RefClass, NativeClass, BaseClass) \
    RefClass(NativeClass& r)                               \
        : BaseClass(r)                                     \
    {                                                      \
    }

#define __ctor_move_base(RefClass, NativeClass, BaseClass) \
    RefClass(NativeClass&& m)                              \
        : BaseClass(m)                                     \
    {                                                      \
    }

#define __ctor_all_base(RefClass, NativeClass, BaseClass) \
    __ctor_base(RefClass, NativeClass, BaseClass);        \
    internal:                                             \
    __ctor_copy_base(RefClass, NativeClass, BaseClass);   \
    __ctor_move_base(RefClass, NativeClass, BaseClass);   \
                                                          \
public:


#define __ClassTemplateAPIs(RefClass, NativeClass)            \
    NativeClass* Release()                                    \
    {                                                         \
        return ClassTemplate::Release();                      \
    }                                                         \
    void Reset(NATIVECLASS const* p)()                        \
    {                                                         \
        ClassTemplate::Reset(p);                              \
    }                                                         \
    void Reset(NATIVECLASS const* p, bool ownsNativeInstance) \
    {                                                         \
        ClassTemplate::Reset(p, ownsNativeInstance);          \
    }
