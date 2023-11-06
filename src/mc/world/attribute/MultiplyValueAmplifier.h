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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~MultiplyValueAmplifier();

    // vIndex: 1, symbol: ?getAmount@MultiplyValueAmplifier@@UEBAMHM@Z
    virtual float getAmount(int, float) const;

    // NOLINTEND
};
