#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/renderer/scripting/BasePrimitive.h"

// auto generated forward declare list
// clang-format off
class AABB;
class Vec3;
// clang-format on

namespace Scripting::RenderHelper {

class BasePrimitivePosition : public ::Scripting::RenderHelper::BasePrimitive {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk4f4d71;
    // NOLINTEND

public:
    // prevent constructor by default
    BasePrimitivePosition& operator=(BasePrimitivePosition const&);
    BasePrimitivePosition(BasePrimitivePosition const&);
    BasePrimitivePosition();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ::Vec3 const& getPosition() const /*override*/;

    virtual void setPosition(::Vec3 const& position) /*override*/;

    virtual void updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const /*override*/;

    virtual ~BasePrimitivePosition() /*override*/ = default;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Vec3 const& $getPosition() const;

    MCNAPI void $setPosition(::Vec3 const& position);

    MCNAPI void $updateBoundingBox(::Vec3 const& ownerOffset, ::AABB& bounds) const;
#endif


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace Scripting::RenderHelper
