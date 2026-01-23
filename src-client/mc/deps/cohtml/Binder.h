#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/ValueType.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class IEventHandler; }
namespace cohtml { class Property; }
namespace cohtml { class TypeDescription; }
namespace cohtml { class TypeInfo; }
// clang-format on

namespace cohtml {

class Binder {
public:
    // Binder inner types define
    enum class BindingMode : int {
        Value       = 0,
        Scoped      = 1,
        GetTypeInfo = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkec3415;
    // NOLINTEND

public:
    // prevent constructor by default
    Binder& operator=(Binder const&);
    Binder(Binder const&);
    Binder();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Binder() = 0;

    virtual ::cohtml::TypeDescription RegisterType(char const*, void*);

    virtual ::cohtml::TypeDescription RegisterType(char const*, void const*);

    virtual void AddProperty(void*, ::cohtml::Property const&);

    virtual void AddMethod(char const*, ::cohtml::IEventHandler*);

    virtual void BeginType();

    virtual void ReadType();

    virtual bool ReadType(char const*) = 0;

    virtual ::cohtml::TypeInfo* GetTypeInfo() const;

    virtual void EndType(void*);

    virtual void BeginEvent(char const*, int) = 0;

    virtual void EndEvent() = 0;

    virtual void BeginExposeObject() = 0;

    virtual void SetAsGlobal(char const*, void*) = 0;

    virtual void SetMode(::cohtml::Binder::BindingMode) = 0;

    virtual ::cohtml::Binder::BindingMode GetMode() = 0;

    virtual bool BindObject(::cohtml::TypeInfo*, void*) = 0;

    virtual void TypeName(char const*) = 0;

    virtual void PropertyName(char const*) = 0;

    virtual void BindUndefined() = 0;

    virtual void BindNull() = 0;

    virtual void Bind(bool) = 0;

    virtual void Bind(short) = 0;

    virtual void Bind(ushort) = 0;

    virtual void Bind(int) = 0;

    virtual void Bind(uint) = 0;

    virtual void Bind(int64) = 0;

    virtual void Bind(uint64) = 0;

    virtual void Bind(long) = 0;

    virtual void Bind(ulong) = 0;

    virtual void Bind(char) = 0;

    virtual void Bind(uchar) = 0;

    virtual void Bind(float) = 0;

    virtual void Bind(double) = 0;

    virtual void Bind(char const*) = 0;

    virtual void Bind(wchar_t const*) = 0;

    virtual void Bind(char16_t const*) = 0;

    virtual void Bind(char32_t const*) = 0;

    virtual void BindArray(int const*, uint64) = 0;

    virtual void BindArray(float const*, uint64) = 0;

    virtual bool TryBindArrayByRef(
        void*,
        uint64,
        void (*)(::cohtml::Binder*, void*, uint64),
        void (*)(::cohtml::Binder*, void*, uint64)
    ) = 0;

    virtual bool TryBindArrayByRef(
        void*,
        void (*)(::cohtml::Binder*, void*, uint64),
        void (*)(::cohtml::Binder*, void*, uint64),
        uint64 (*)(void*)
    ) = 0;

    virtual void ArrayBegin(uint64) = 0;

    virtual void ArrayEnd() = 0;

    virtual void MapBegin(uint64) = 0;

    virtual void MapEnd() = 0;

    virtual void OnTypeBegin() = 0;

    virtual void OnTypeEnd() = 0;

    virtual void OnReadTypeBegin() = 0;

    virtual void OnReadTypeEnd() = 0;

    virtual void SkipValue() = 0;

    virtual void ReadNull() = 0;

    virtual void Read(bool&) = 0;

    virtual void Read(short&) = 0;

    virtual void Read(ushort&) = 0;

    virtual void Read(int&) = 0;

    virtual void Read(uint&) = 0;

    virtual void Read(int64&) = 0;

    virtual void Read(uint64&) = 0;

    virtual void Read(long&) = 0;

    virtual void Read(ulong&) = 0;

    virtual void Read(char&) = 0;

    virtual void Read(uchar&) = 0;

    virtual void Read(float&) = 0;

    virtual void Read(double&) = 0;

    virtual void Read(char const*&, uint64&) = 0;

    virtual void Read(wchar_t const*&, uint64&) = 0;

    virtual void Read(char16_t const*&, uint64&) = 0;

    virtual void Read(char32_t const*&, uint64&) = 0;

    virtual bool ReadProperty(char const*) = 0;

    virtual void ReadAsString(char const*&, uint64&) = 0;

    virtual uint64 ReadArrayBegin() = 0;

    virtual void ReadArrayElement(uint64) = 0;

    virtual void ReadArrayEnd() = 0;

    virtual uint64 ReadMapBegin() = 0;

    virtual void ReadKeyValuePair() = 0;

    virtual void ReadMapEnd() = 0;

    virtual ::cohtml::ValueType PeekValueType() = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
