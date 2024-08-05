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
    // vIndex: 0
    virtual ~MultiplyValueAmplifier() = default;

    // vIndex: 1
    virtual float getAmount(int amplification, float scale) const;

    // NOLINTEND
};
