#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/scripting/PrimitiveType.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
namespace Scripting::RenderHelper { struct Vertex; }
// clang-format on

namespace Scripting::RenderHelper {

class BasePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnke17c59;
    ::ll::UntypedStorage<1, 1> mUnkf5bc55;
    ::ll::UntypedStorage<4, 4> mUnkd49fdf;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePrimitive& operator=(BasePrimitive const&);
    BasePrimitive(BasePrimitive const&);
    BasePrimitive();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Scripting::RenderHelper::PrimitiveType getType() const = 0;

    virtual ::Vec3 const& getPosition() const = 0;

    virtual void setPosition(::Vec3 const&);

    virtual void updateBoundingBox(::Vec3 const&, ::AABB&) const;

    virtual ~BasePrimitive() = default;

    virtual void _rebuild() = 0;

    virtual void _getVertices(::std::vector<::Scripting::RenderHelper::Vertex>&) = 0;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI void $setPosition(::Vec3 const&);
#endif


    // NOLINTEND
};

} // namespace Scripting::RenderHelper
