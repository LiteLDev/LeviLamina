#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::Reflection {

class IPropertySetter {
public:
    // prevent constructor by default
    IPropertySetter& operator=(IPropertySetter const&);
    IPropertySetter(IPropertySetter const&);
    IPropertySetter();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~IPropertySetter() = default;

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4
    virtual bool isMemberFunction() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool isMemberFunction$() const;

    // NOLINTEND
};

}; // namespace Scripting::Reflection
