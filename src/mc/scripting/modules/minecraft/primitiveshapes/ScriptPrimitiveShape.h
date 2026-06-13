#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/legacy/ActorUniqueID.h"
#include "mc/network/NetworkIdentifierWithSubId.h"
#include "mc/scripting/modules/minecraft/ScriptRGBA.h"
#include "mc/scripting/modules/minecraft/primitiveshapes/ScriptPrimitiveShapeType.h"
#include "mc/world/level/dimension/DimensionType.h"

// auto generated forward declare list
// clang-format off
struct PrimitiveShapeDataPayload;
namespace ScriptModuleMinecraft { class ScriptActor; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptPlayer; }
namespace ScriptModuleMinecraft { struct ScriptDimensionLocation; }
namespace Scripting { struct ClassBinding; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptPrimitiveShape {
public:
    // ScriptPrimitiveShape inner types define
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
        UpdateAttachedTo      = 8192,
        UpdateRenderDist      = 16384,
        SerializeAll          = 4294967294,
    };

    using FlagsStorage = uint;

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, ::ScriptModuleMinecraft::ScriptPrimitiveShapeType> mShapeType;
    ::ll::TypedStorage<8, 32, ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension>>
                                                                   mDimension;
    ::ll::TypedStorage<4, 4, ::DimensionType>                      mDimensionId;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mLocation;
    ::ll::TypedStorage<4, 12, ::Vec3>                              mRotation;
    ::ll::TypedStorage<4, 4, float>                                mScale;
    ::ll::TypedStorage<8, 24, ::ScriptModuleMinecraft::ScriptRGBA> mColor;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mTimeLeftSec;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mTimeLeftTotalSec;
    ::ll::TypedStorage<4, 8, ::std::optional<float>>               mMaxRenderDistance;
    ::ll::
        TypedStorage<8, 24, ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>>>
                                                                        mVisibleTo;
    ::ll::TypedStorage<8, 16, ::std::set<::NetworkIdentifierWithSubId>> mVisibleToClients;
    ::ll::TypedStorage<8, 16, ::std::set<::NetworkIdentifierWithSubId>> mSentToClients;
    ::ll::TypedStorage<8, 8, uint64>                                    mNetworkId;
    ::ll::TypedStorage<4, 4, uint>                                      mFlags;
    ::ll::TypedStorage<1, 1, bool>                                      mExistsInWorld;
    ::ll::
        TypedStorage<8, 40, ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>>>
                                              mAttachedTo;
    ::ll::TypedStorage<8, 8, ::ActorUniqueID> mAttachedToId;
    ::ll::TypedStorage<1, 1, bool>            mAttachedEntityWasUnloaded;
    ::ll::TypedStorage<1, 1, bool>            mIsDebugShape;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptPrimitiveShape();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ScriptPrimitiveShape();

    virtual void populatePacketData(::PrimitiveShapeDataPayload& packet) const;

    virtual void applyUpdatedData(::PrimitiveShapeDataPayload const& packet);
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCFOLD bool IsDebugShape() const;

    MCAPI ScriptPrimitiveShape(::ScriptModuleMinecraft::ScriptPrimitiveShape const&);

    MCAPI ScriptPrimitiveShape(::ScriptModuleMinecraft::ScriptPrimitiveShapeType shapeType, bool isDebugShape);

    MCAPI ScriptPrimitiveShape(
        ::ScriptModuleMinecraft::ScriptPrimitiveShapeType                               shapeType,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        bool                                                                            isDebugShape
    );

    MCAPI void addToWorld();

    MCFOLD bool existsInWorld() const;

    MCFOLD ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const&
    getAttachedTo() const;

#ifdef LL_PLAT_C
    MCFOLD ::ActorUniqueID getAttachedToId() const;
#endif

    MCFOLD ::ScriptModuleMinecraft::ScriptRGBA const& getColor() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> getDimension() const;

#ifdef LL_PLAT_C
    MCAPI ::DimensionType getDimensionId() const;
#endif

    MCFOLD uint getFlags() const;

    MCAPI ::Vec3 getLocation() const;

    MCFOLD ::std::optional<float> getMaxRenderDistance() const;

    MCFOLD uint64 getNetworkId() const;

    MCFOLD ::Vec3 const& getRotation() const;

    MCFOLD float getScale() const;

    MCFOLD ::std::set<::NetworkIdentifierWithSubId>& getSentToClients();

#ifdef LL_PLAT_C
    MCFOLD ::ScriptModuleMinecraft::ScriptPrimitiveShapeType getShapeType() const;
#endif

    MCAPI ::std::optional<float> getTimeLeftSec() const;

    MCFOLD ::std::optional<float> getTotalTimeLeftSec() const;

    MCFOLD ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> const&
    getVisibleTo() const;

    MCFOLD ::std::set<::NetworkIdentifierWithSubId> const& getVisibleToClients() const;

    MCAPI bool hasDuration() const;

    MCAPI bool isDirty() const;

    MCAPI bool isFlaggedToRemove() const;

    MCAPI bool isNewShape() const;

    MCAPI void markAttachedEntityReloaded();

    MCAPI ::ScriptModuleMinecraft::ScriptPrimitiveShape&
    operator=(::ScriptModuleMinecraft::ScriptPrimitiveShape const&);

    MCAPI void remove();

    MCAPI void setAttachedEntityWasUnloaded(bool unloaded);

    MCAPI void setAttachedTo(
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptActor>> const& attachedTo
    );

    MCAPI void setColor(::ScriptModuleMinecraft::ScriptRGBA const& color);

    MCFOLD void setFlags(uint flags);

    MCAPI void setLocation(::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location);

    MCAPI void setMaxRenderDistance(::std::optional<float> dist);

    MCFOLD void setNetworkId(uint64 networkId);

    MCAPI void setRotation(::Vec3 const& rotation);

    MCAPI void setScale(float scale);

    MCAPI void setTotalTimeLeft(::std::optional<float> timeSec);

    MCAPI void setVisibleTo(
        ::std::vector<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptPlayer>> const& visibleTo
    );

    MCAPI void tickTimeLeft(float dt);

    MCAPI void unDirty();

    MCFOLD bool wasAttachedEntityUnloaded() const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBinding bind();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPrimitiveShape const&);

    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptPrimitiveShapeType shapeType, bool isDebugShape);

    MCAPI void* $ctor(
        ::ScriptModuleMinecraft::ScriptPrimitiveShapeType                               shapeType,
        ::std::variant<::ScriptModuleMinecraft::ScriptDimensionLocation, ::Vec3> const& location,
        bool                                                                            isDebugShape
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI void $populatePacketData(::PrimitiveShapeDataPayload& packet) const;

    MCAPI void $applyUpdatedData(::PrimitiveShapeDataPayload const& packet);


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
