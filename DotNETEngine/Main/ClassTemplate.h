#pragma once

#include "../Main/.NETGlobal.hpp"
#include "../Tools/ClassTemplateHelper.h"

template <typename REFCLASS, typename NATIVECLASS>
public ref class ClassTemplate abstract
{
private:
    bool ownsNativeInstance;
    NATIVECLASS* nativePtr;

public:
    property NATIVECLASS* NativePtr
    {
    public:
        NATIVECLASS* get()
        {
            return nativePtr;
        }

    protected:
        void set(NATIVECLASS * value)
        {
            nativePtr = value;
        }
    }

    property bool OwnsNativeInstance
    {
    public:
        bool get()
        {
            return ownsNativeInstance;
        }

    protected:
        void set(bool value)
        {
            ownsNativeInstance = value;
        }
    }

public:
    ClassTemplate()
        : ownsNativeInstance(false)
        , nativePtr(nullptr)
    {
    }

    !ClassTemplate()
    {
        if (ownsNativeInstance)
            delete nativePtr;
    }

    virtual ~ClassTemplate()
    {
        this->!ClassTemplate();
        System::GC::SuppressFinalize(this);
    }

public:
    ClassTemplate(System::IntPtr p)
        : ownsNativeInstance(false)
        , nativePtr((NATIVECLASS*)(void*)p)
    {
    }

    ClassTemplate(System::IntPtr p, bool ownsNativeInstance)
        : ownsNativeInstance(ownsNativeInstance)
        , nativePtr((NATIVECLASS*)(void*)p)
    {
    }

    ClassTemplate(NATIVECLASS* p, bool ownsNativeInstance)
        : ownsNativeInstance(ownsNativeInstance)
        , nativePtr((NATIVECLASS*)p)
    {
    }

    ClassTemplate(NATIVECLASS* p)
        : ownsNativeInstance(false)
        , nativePtr((NATIVECLASS*)p)
    {
    }

    ClassTemplate(void* p, bool ownsNativeInstance)
        : ownsNativeInstance(ownsNativeInstance)
        , nativePtr((NATIVECLASS*)p)
    {
    }

    ClassTemplate(void* p)
        : ownsNativeInstance(false)
        , nativePtr((NATIVECLASS*)p)
    {
    }

    ClassTemplate(NATIVECLASS& r)
        : ownsNativeInstance(true)
        , nativePtr(new NATIVECLASS((NATIVECLASS&)r))
    {
    }

    ClassTemplate(NATIVECLASS&& m)
        : ownsNativeInstance(true)
        , nativePtr(new NATIVECLASS(m))
    {
    }

    internal :
        operator NATIVECLASS&()
    {
        return *nativePtr;
    }
    operator NATIVECLASS*()
    {
        return nativePtr;
    }

public:
    virtual NATIVECLASS* Release()
    {
        auto ret = nativePtr;
        nativePtr = nullptr;
        ownsNativeInstance = false;
        this->~ClassTemplate();
        return ret;
    }
    virtual void Reset(NATIVECLASS* p)
    {
        if (ownsNativeInstance)
            delete nativePtr;
        nativePtr = p;
        ownsNativeInstance = false;
    }
    virtual void Reset(NATIVECLASS* p, bool ownsNativeInstance)
    {
        if (this->ownsNativeInstance)
            delete nativePtr;
        nativePtr = (NATIVECLASS*)p;
        this->ownsNativeInstance = ownsNativeInstance;
    }
};
