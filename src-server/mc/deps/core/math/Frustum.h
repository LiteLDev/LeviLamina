#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Frustum {
public:
    // Frustum inner types define
    enum class FrustumSide : uchar {
        Right = 0,
        Left = 1,
        Bottom = 2,
        Top = 3,
        Back = 4,
        Front = 5,
        NumFrustumPlanes = 6,
    };
    
    enum class Plane : uchar {
        PlaneNormalX = 0,
        PlaneNormalY = 1,
        PlaneNormalZ = 2,
        PlaneToOriginDistance = 3,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 96> mUnk8b8fad;
    ::ll::UntypedStorage<4, 48> mUnk7522ba;
    ::ll::UntypedStorage<4, 48> mUnkae1f35;
    // NOLINTEND

public:
    // prevent constructor by default
    Frustum& operator=(Frustum const&);
    Frustum(Frustum const&);
    Frustum();

};
