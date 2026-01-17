#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cohtml/Property.h"

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

class AdjustPointer : public ::cohtml::Property {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnka57e00;
    // NOLINTEND

public:
    // prevent constructor by default
    AdjustPointer& operator=(AdjustPointer const&);
    AdjustPointer(AdjustPointer const&);
    AdjustPointer();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual void* Bind(::cohtml::Binder*, void*) const /*override*/;

    virtual void* BindValue(::cohtml::Binder*, void*) const /*override*/;

    virtual void* Read(::cohtml::Binder*, void*) const /*override*/;

    virtual void* ReadValue(::cohtml::Binder*, void*) const /*override*/;

    virtual ::cohtml::AdjustPointer* Clone() const /*override*/;

    virtual bool ToBoolean(void*, bool*) const /*override*/;

    virtual bool ToNumber(void*, float*) const /*override*/;

    virtual bool ToString(void*, char*, uint64*) const /*override*/;

    virtual bool ToColor(void*, ::renoir::Color*) const /*override*/;

    virtual bool ToTransformMatrix2D(void*, float*) const /*override*/;

    virtual bool ToArray(::cohtml::Binder*, void*, ::cohtml::ArrayInfo*) const /*override*/;

    virtual bool ToPair(::cohtml::Binder*, void*, ::cohtml::PairInfo*) const /*override*/;

    virtual bool ToMap(::cohtml::Binder*, void*, ::cohtml::MapInfo*) const /*override*/;

    virtual bool ToObject(::cohtml::Binder*, void*, ::cohtml::ObjectInfo*) const /*override*/;

    virtual ~AdjustPointer() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN

    // NOLINTEND
};

} // namespace cohtml
