#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace Editor::Prefabs { class VisiblePrefabInstanceStructureRef; }
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class VisiblePrefabInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk74aa47;
    ::ll::UntypedStorage<8, 16> mUnk755cdf;
    ::ll::UntypedStorage<4, 12> mUnk24bd45;
    ::ll::UntypedStorage<1, 1>  mUnka66188;
    ::ll::UntypedStorage<1, 1>  mUnkc7fd93;
    ::ll::UntypedStorage<8, 24> mUnk730d28;
    // NOLINTEND

public:
    // prevent constructor by default
    VisiblePrefabInstance& operator=(VisiblePrefabInstance const&);
    VisiblePrefabInstance(VisiblePrefabInstance const&);
    VisiblePrefabInstance();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI VisiblePrefabInstance(
        ::mce::UUID   instanceId,
        ::mce::UUID   templateId,
        ::Vec3 const& position,
        ::Mirror      mirror,
        ::Rotation    rotation
    );

    MCNAPI void addStructure(
        ::mce::UUID const& prefabStructureId,
        ::mce::UUID const& structureTemplateId,
        ::Vec3 const&      instanceOffset,
        ::Rotation         instanceRotation,
        ::Mirror           instanceMirror,
        ::Vec3 const&      structureSize,
        ::Vec3 const&      structureOffset,
        ::Vec3 const&      structureNormalizedOrigin
    );

#ifdef LL_PLAT_C
    MCNAPI void forEach(::std::function<void(::Editor::Prefabs::VisiblePrefabInstanceStructureRef const&)> func) const;

    MCNAPI ::mce::UUID getInstanceId() const;

    MCNAPI ::Mirror getMirror() const;

    MCNAPI ::Rotation getRotation() const;

    MCNAPI ::mce::UUID getTemplateId() const;

    MCNAPI ::Vec3 getWorldPosition() const;

    MCNAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::Editor::Prefabs::VisiblePrefabInstanceStructureRef>>>
    structureRefcBegin() const;

    MCNAPI ::std::_Vector_const_iterator<
        ::std::_Vector_val<::std::_Simple_types<::Editor::Prefabs::VisiblePrefabInstanceStructureRef>>>
    structureRefcEnd() const;
#endif

    MCNAPI ~VisiblePrefabInstance();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void*
    $ctor(::mce::UUID instanceId, ::mce::UUID templateId, ::Vec3 const& position, ::Mirror mirror, ::Rotation rotation);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
