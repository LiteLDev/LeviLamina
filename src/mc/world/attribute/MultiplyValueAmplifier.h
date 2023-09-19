#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/attribute/Amplifier.h"

class MultiplyValueAmplifier : public ::Amplifier {
public:
    // prevent constructor by default
    MultiplyValueAmplifier& operator=(MultiplyValueAmplifier const&);
    MultiplyValueAmplifier(MultiplyValueAmplifier const&);
    MultiplyValueAmplifier();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?getAmount@MultiplyValueAmplifier@@UEBAMHM@Z
    virtual float getAmount(int, float) const;

    // symbol: ??0MultiplyValueAmplifier@@QEAA@M@Z
    MCAPI explicit MultiplyValueAmplifier(float);

    // NOLINTEND
};
