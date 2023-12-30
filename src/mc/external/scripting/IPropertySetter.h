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
    // vIndex: 0, symbol: __gen_??1IPropertySetter@Reflection@Scripting@@UEAA@XZ
    virtual ~IPropertySetter() = default;

    // vIndex: 1, symbol: __unk_vfn_1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2, symbol: __unk_vfn_2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3, symbol: __unk_vfn_3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4, symbol: ?isMemberFunction@IPropertySetter@Reflection@Scripting@@UEBA_NXZ
    virtual bool isMemberFunction() const;

    // NOLINTEND
};

}; // namespace Scripting::Reflection
