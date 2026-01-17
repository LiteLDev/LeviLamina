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

    virtual void* Bind(::cohtml::Binder*, void*) const = 0;

    virtual void* BindValue(::cohtml::Binder*, void*) const = 0;

    virtual void* Read(::cohtml::Binder*, void*) const = 0;

    virtual void* ReadValue(::cohtml::Binder*, void*) const = 0;

    virtual ::cohtml::Property* Clone() const = 0;

    virtual bool ToBoolean(void*, bool*) const = 0;

    virtual bool ToNumber(void*, float*) const = 0;

    virtual bool ToString(void*, char*, uint64*) const = 0;

    virtual bool ToColor(void*, ::renoir::Color*) const = 0;

    virtual bool ToTransformMatrix2D(void*, float*) const = 0;

    virtual bool ToArray(::cohtml::Binder*, void*, ::cohtml::ArrayInfo*) const = 0;

    virtual bool ToPair(::cohtml::Binder*, void*, ::cohtml::PairInfo*) const = 0;

    virtual bool ToMap(::cohtml::Binder*, void*, ::cohtml::MapInfo*) const = 0;

    virtual bool ToObject(::cohtml::Binder*, void*, ::cohtml::ObjectInfo*) const = 0;
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
