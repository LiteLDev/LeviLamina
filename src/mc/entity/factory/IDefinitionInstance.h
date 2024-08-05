#pragma once

#include "mc/_HeaderOutputPredefine.h"

class IDefinitionInstance {
public:
    // prevent constructor by default
    IDefinitionInstance& operator=(IDefinitionInstance const&);
    IDefinitionInstance(IDefinitionInstance const&);
    IDefinitionInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual void __unk_vfn_0() = 0;

    // vIndex: 1
    virtual void __unk_vfn_1() = 0;

    // vIndex: 2
    virtual void __unk_vfn_2() = 0;

    // vIndex: 3
    virtual void __unk_vfn_3() = 0;

    // vIndex: 4
    virtual void __unk_vfn_4() = 0;

    // vIndex: 5
    virtual ~IDefinitionInstance();

    // vIndex: 6
    virtual void __unk_vfn_6() = 0;

    // vIndex: 7
    virtual ushort getRuntimeTypeId() const;

    // NOLINTEND
};
