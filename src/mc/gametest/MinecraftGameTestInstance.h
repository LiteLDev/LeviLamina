#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/gametest/framework/BaseGameTestInstance.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockSource;
class BoundingBox;
class Dimension;
class Vec3;
// clang-format on

class MinecraftGameTestInstance : public ::gametest::BaseGameTestInstance {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 8> mUnkc127d6;
    ::ll::UntypedStorage<1, 1> mUnk4f4f29;
    ::ll::UntypedStorage<8, 8> mUnk5f587b;
    // NOLINTEND

public:
    // prevent constructor by default
    MinecraftGameTestInstance& operator=(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~MinecraftGameTestInstance() /*override*/ = default;

    virtual ::BlockSource& getBlockSource() const;

    virtual void initialize() /*override*/;

    virtual bool hasStructureBlock() const /*override*/;

    virtual void clearStructure() /*override*/;

    virtual void spawnStructure() /*override*/;

    virtual ::std::optional<::AABB> getStructureBounds() const /*override*/;

    virtual ::std::optional<::Vec3> getStructureBlockPivot() const /*override*/;

    virtual ::std::optional<::Vec3> getStructureBlockPosPivot() const /*override*/;

    virtual ::BoundingBox getStructureBoundingBox() const /*override*/;

    virtual ::DimensionType getStructureDimension() const /*override*/;

    virtual int _getLevelTick() const /*override*/;

    virtual bool _isTestReady() /*override*/;
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCNAPI ::BlockSource& $getBlockSource() const;

    MCNAPI void $initialize();

    MCNAPI bool $hasStructureBlock() const;

    MCNAPI void $clearStructure();

    MCNAPI void $spawnStructure();

    MCNAPI ::std::optional<::AABB> $getStructureBounds() const;

    MCNAPI ::std::optional<::Vec3> $getStructureBlockPivot() const;

    MCNAPI ::std::optional<::Vec3> $getStructureBlockPosPivot() const;

    MCNAPI ::BoundingBox $getStructureBoundingBox() const;

    MCNAPI ::DimensionType $getStructureDimension() const;

    MCNAPI int $_getLevelTick() const;

    MCNAPI bool $_isTestReady();


    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};
