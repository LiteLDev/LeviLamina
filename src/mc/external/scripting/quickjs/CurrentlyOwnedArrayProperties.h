#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Scripting::QuickJS {

class CurrentlyOwnedArrayProperties {
public:
    // CurrentlyOwnedArrayProperties inner types declare
    // clang-format off
    struct Prop;
    // clang-format on

    // CurrentlyOwnedArrayProperties inner types define
    struct Prop {
    public:
        // prevent constructor by default
        Prop& operator=(Prop const&);
        Prop(Prop const&);
        Prop();

    public:
        // NOLINTBEGIN
        // symbol: ??1Prop@CurrentlyOwnedArrayProperties@QuickJS@Scripting@@QEAA@XZ
        MCAPI ~Prop();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    CurrentlyOwnedArrayProperties& operator=(CurrentlyOwnedArrayProperties const&);
    CurrentlyOwnedArrayProperties(CurrentlyOwnedArrayProperties const&);
    CurrentlyOwnedArrayProperties();
};

}; // namespace Scripting::QuickJS
