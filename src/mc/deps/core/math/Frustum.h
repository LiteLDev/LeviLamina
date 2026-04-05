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

#ifdef LL_PLAT_S
public:
    // prevent constructor by default
    Frustum& operator=(Frustum const&);
    Frustum(Frustum const&);
    Frustum();

#else // LL_PLAT_C
public:
    // prevent constructor by default
    Frustum();

#endif
public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI Frustum(::Frustum&&);

    MCNAPI Frustum(::Frustum const&);

    MCNAPI void calculateFrustum(::glm::mat4x4 const& mvp);

    MCNAPI bool cubeInFrustum(::glm::vec3 const& min, ::glm::vec3 const& max) const;

    MCNAPI ::Frustum& operator=(::Frustum&&);

    MCNAPI ::Frustum& operator=(::Frustum const&);
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI static ::Frustum
    getFrustum(::glm::mat4x4 const& projection, ::glm::mat4x4 const& view, ::glm::mat4x4 const& world);
#endif
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void* $ctor(::Frustum&&);

    MCNAPI void* $ctor(::Frustum const&);
#endif
    // NOLINTEND
};
