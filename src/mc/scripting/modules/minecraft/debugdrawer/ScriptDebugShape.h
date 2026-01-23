#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/scripting/modules/minecraft/ScriptRGB.h"
#include "mc/scripting/modules/minecraft/debugdrawer/ScriptDebugShapeType.h"

// auto generated forward declare list
// clang-format off
class Dimension;
struct ShapeDataPayload;
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleDebugUtilities {

class ScriptDebugShape {
public:
    // ScriptDebugShape inner types define
    enum class Flags : uint {
        Remove                = 1,
        New                   = 2,
        UpdateLocation        = 4,
        UpdateScale           = 8,
        UpdateRotation        = 16,
        UpdateTimeleft        = 32,
        UpdateColor           = 64,
        UpdateText            = 128,
        UpdateBoxBound        = 256,
        UpdateLineEndLocation = 512,
        UpdateArrowHeadLength = 1024,
        UpdateArrowHeadRadius = 2048,
        UpdateSegmentCount    = 4096,
        SerializeAll          = 4294967294,
    };

    using FlagsStorage = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleDebugUtilities::ScriptDebugShapeType> mShapeType;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                                                  mDimension;
    ::ll::TypedStorage<4, 4, ::DimensionType>                     mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                             mRotation;
    ::ll::TypedStorage<4, 4, float>                               mScale;
    ::ll::TypedStorage<4, 24, ::ScriptModuleMinecraft::ScriptRGB> mColor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>              mTimeLeftSec;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>              mTimeLeftTotalSec;
    ::ll::
        TypedStorage<8, 24, ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
                                     mVisibleTo;
    ::ll::TypedStorage<8, 8, uint64> mNetworkId;
    ::ll::TypedStorage<4, 4, uint>   mFlags;
    ::ll::TypedStorage<1, 1, bool>   mExistsInWorld;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptDebugShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptDebugShape();

    virtual void populatePacketData(::ShapeDataPayload& packet) const;

    virtual void applyUpdatedData(::ShapeDataPayload const& packet);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptDebugShape(::ScriptModuleDebugUtilities::ScriptDebugShape const&);

    MCAPI explicit ScriptDebugShape(::ScriptModuleDebugUtilities::ScriptDebugShapeType shapeType);

    MCAPI ScriptDebugShape(
        ::ScriptModuleDebugUtilities::ScriptDebugShapeType                              shapeType,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location
    );

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    MCAPI ::ScriptModuleDebugUtilities::ScriptDebugShape&
    operator=(::ScriptModuleDebugUtilities::ScriptDebugShape const&);

    MCAPI void setLocation(::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location);
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptDebugShape const&);

    MCAPI void* $ctor(::ScriptModuleDebugUtilities::ScriptDebugShapeType shapeType);

    MCAPI void* $ctor(
        ::ScriptModuleDebugUtilities::ScriptDebugShapeType                              shapeType,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCFOLD void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $populatePacketData(::ShapeDataPayload& packet) const;

    MCAPI void $applyUpdatedData(::ShapeDataPayload const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleDebugUtilities
