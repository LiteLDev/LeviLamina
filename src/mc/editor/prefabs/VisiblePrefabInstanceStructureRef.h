#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace cereal { struct ReflectionCtx; }
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class VisiblePrefabInstanceStructureRef {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnke18ffe;
    ::ll::UntypedStorage<8, 16> mUnkd3caae;
    ::ll::UntypedStorage<4, 12> mUnk432fa7;
    ::ll::UntypedStorage<1, 1>  mUnk206b41;
    ::ll::UntypedStorage<1, 1>  mUnkabf785;
    ::ll::UntypedStorage<4, 12> mUnk3723eb;
    ::ll::UntypedStorage<4, 12> mUnk12eb68;
    ::ll::UntypedStorage<4, 12> mUnk40e664;
    // NOLINTEND

public:
    // prevent constructor by default
    VisiblePrefabInstanceStructureRef& operator=(VisiblePrefabInstanceStructureRef const&);
    VisiblePrefabInstanceStructureRef(VisiblePrefabInstanceStructureRef const&);
    VisiblePrefabInstanceStructureRef();

public:
    // member functions
    // NOLINTBEGIN
#ifdef LL_PLAT_C
    MCNAPI ::Mirror getInstanceMirror() const;

    MCNAPI ::Vec3 const& getInstanceOffset() const;

    MCNAPI ::Rotation getInstanceRotation() const;

    MCNAPI ::mce::UUID const& getPrefabStructureId() const;

    MCNAPI ::Vec3 const& getStructureNormalizedOrigin() const;

    MCNAPI ::Vec3 const& getStructureOffset() const;

    MCNAPI ::Vec3 const& getStructureSize() const;

    MCNAPI ::mce::UUID const& getStructureTemplateId() const;
#endif
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND
};

} // namespace Editor::Prefabs
