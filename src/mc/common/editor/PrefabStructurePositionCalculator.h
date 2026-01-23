#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"

// auto generated forward declare list
// clang-format off
class Vec3;
namespace mce { class UUID; }
// clang-format on

namespace Editor::Prefabs {

class PrefabStructurePositionCalculator {
public:
    // PrefabStructurePositionCalculator inner types declare
    // clang-format off
    struct TemplateStructureInfo;
    // clang-format on

    // PrefabStructurePositionCalculator inner types define
    struct TemplateStructureInfo {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<8, 16> mUnk87c12e;
        ::ll::UntypedStorage<4, 12> mUnkbd8f18;
        ::ll::UntypedStorage<1, 1>  mUnkd5a522;
        ::ll::UntypedStorage<1, 1>  mUnk60bdc9;
        ::ll::UntypedStorage<4, 12> mUnk87d4ae;
        ::ll::UntypedStorage<4, 12> mUnk2b33e9;
        ::ll::UntypedStorage<4, 12> mUnk1f8c68;
        ::ll::UntypedStorage<4, 12> mUnkc0f71c;
        ::ll::UntypedStorage<4, 12> mUnk8d5dd7;
        ::ll::UntypedStorage<1, 1>  mUnk8bd83b;
        ::ll::UntypedStorage<1, 1>  mUnk8f5a9d;
        ::ll::UntypedStorage<4, 24> mUnke87c15;
        // NOLINTEND

    public:
        // prevent constructor by default
        TemplateStructureInfo& operator=(TemplateStructureInfo const&);
        TemplateStructureInfo(TemplateStructureInfo const&);
        TemplateStructureInfo();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 12> mUnk135a29;
    ::ll::UntypedStorage<1, 1>  mUnke1d17e;
    ::ll::UntypedStorage<1, 1>  mUnk66dd46;
    ::ll::UntypedStorage<4, 24> mUnk71f5d3;
    ::ll::UntypedStorage<8, 24> mUnkef13db;
    // NOLINTEND

public:
    // prevent constructor by default
    PrefabStructurePositionCalculator& operator=(PrefabStructurePositionCalculator const&);
    PrefabStructurePositionCalculator(PrefabStructurePositionCalculator const&);
    PrefabStructurePositionCalculator();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void calculate();

    MCNAPI void createOrUpdateStructureInfo(
        ::mce::UUID const& id,
        ::Vec3 const&      instanceOffset,
        ::Mirror           instanceMirror,
        ::Rotation         instanceRotation,
        ::Vec3 const&      structureSize,
        ::Vec3 const&      structureOffset,
        ::Vec3 const&      structureNormalizedOrigin
    );

    MCNAPI ~PrefabStructurePositionCalculator();
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCNAPI static ::Editor::Prefabs::PrefabStructurePositionCalculator::TemplateStructureInfo& EMPTY_STRUCTURE_INFO();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Editor::Prefabs
