#pragma once

#include "mc/_HeaderOutputPredefine.h"

class Frustum {
public:
    // Frustum inner types define
    enum class FrustumSide : uchar {
        Right            = 0,
        Left             = 1,
        Bottom           = 2,
        Top              = 3,
        Back             = 4,
        Front            = 5,
        NumFrustumPlanes = 6,
    };

    enum class Plane : uchar {
        PlaneNormalX          = 0,
        PlaneNormalY          = 1,
        PlaneNormalZ          = 2,
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
    Frustum();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI_C Frustum(::Frustum&&);

    MCNAPI_C Frustum(::Frustum const&);

    MCNAPI_C void calculateFrustum(::glm::mat4x4 const& mvp);

    MCNAPI_C bool cubeInFrustum(::glm::vec3 const& min, ::glm::vec3 const& max) const;

    MCNAPI_C ::Frustum& operator=(::Frustum&&);

    MCNAPI_C ::Frustum& operator=(::Frustum const&);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI_C static ::Frustum
    getFrustum(::glm::mat4x4 const& projection, ::glm::mat4x4 const& view, ::glm::mat4x4 const& world);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI_C void* $ctor(::Frustum&&);

    MCNAPI_C void* $ctor(::Frustum const&);
    // NOLINTEND
};
