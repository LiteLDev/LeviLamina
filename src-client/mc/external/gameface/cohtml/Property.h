#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace cohtml { class Binder; }
namespace cohtml { struct ArrayInfo; }
namespace cohtml { struct MapInfo; }
namespace cohtml { struct ObjectInfo; }
namespace cohtml { struct PairInfo; }
namespace renoir { struct Color; }
// clang-format on

namespace cohtml {

class Property {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnk919aac;
    ::ll::UntypedStorage<1, 1> mUnk32de4a;
    // NOLINTEND

public:
    // prevent constructor by default
    Property& operator=(Property const&);
    Property(Property const&);
    Property();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~Property() = default;

    virtual void* Bind(::cohtml::Binder* binder, void* object) const = 0;

    virtual void* BindValue(::cohtml::Binder* binder, void* object) const = 0;

    virtual void* Read(::cohtml::Binder* binder, void* object) const = 0;

    virtual void* ReadValue(::cohtml::Binder* binder, void* object) const = 0;

    virtual ::cohtml::Property* Clone() const = 0;

    virtual bool ToBoolean(void* object, bool* boolean) const = 0;

    virtual bool ToNumber(void* object, float* number) const = 0;

    virtual bool ToString(void* object, char* buffer, uint64* length) const = 0;

    virtual bool ToColor(void* object, ::renoir::Color* color) const = 0;

    virtual bool ToTransformMatrix2D(void* object, float* matrix) const = 0;

    virtual bool ToArray(::cohtml::Binder* binder, void* object, ::cohtml::ArrayInfo* arrayInfo) const = 0;

    virtual bool ToPair(::cohtml::Binder* binder, void* object, ::cohtml::PairInfo* pairInfo) const = 0;

    virtual bool ToMap(::cohtml::Binder* binder, void* object, ::cohtml::MapInfo* mapInfo) const = 0;

    virtual bool ToObject(::cohtml::Binder* binder, void* object, ::cohtml::ObjectInfo* objInfo) const = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace cohtml
