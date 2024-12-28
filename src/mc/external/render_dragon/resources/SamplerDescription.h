#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/render_dragon/rendering/AddressMode.h"
#include "mc/external/render_dragon/rendering/ComparisonFunction.h"
#include "mc/external/render_dragon/rendering/FilterMode.h"

namespace dragon {

struct SamplerDescription {
public:
    // member variables
    // NOLINTBEGIN
    ::dragon::rendering::AddressMode        mUnk3b28dc : 2;
    ::dragon::rendering::AddressMode        mUnk254a5d : 2;
    ::dragon::rendering::AddressMode        mUnk946d5c : 2;
    ::dragon::rendering::FilterMode         mUnk393fc9 : 2;
    ::dragon::rendering::FilterMode         mUnka5781e : 2;
    ::dragon::rendering::FilterMode         mUnk7f21f9 : 2;
    ::dragon::rendering::ComparisonFunction mUnkbe3cbe : 4;
    // NOLINTEND

public:
    // prevent constructor by default
    SamplerDescription& operator=(SamplerDescription const&);
    SamplerDescription(SamplerDescription const&);
    SamplerDescription();
};

} // namespace dragon
