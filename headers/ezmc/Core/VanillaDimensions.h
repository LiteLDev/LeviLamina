#pragma once

#include <string>

#include "../Math/Vec3.h"
#include "../dll.h"
#include "AutomaticID.h"

class Dimension;

class DimensionConversionData {
public:
    Vec3 overworld_spawn_point;
    int  nether_scale;
};

struct VanillaDimensions {
    MCAPI static const AutomaticID<Dimension, int> Overworld, Nether, TheEnd, Undefined;
    MCAPI static bool                              convertPointBetweenDimensions(
                                     Vec3 const&, Vec3&, AutomaticID<Dimension, int>, AutomaticID<Dimension, int>, DimensionConversionData const&);
    MCAPI static AutomaticID<Dimension, int> fromString(std::string const&);
    MCAPI static std::string                 toString(class AutomaticID<class Dimension, int> const&);
};