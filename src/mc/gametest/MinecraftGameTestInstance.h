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
    // vIndex: 0
    virtual ~MinecraftGameTestInstance() /*override*/;

    // vIndex: 14
    virtual ::BlockSource& getBlockSource() const;

    // vIndex: 1
    virtual void initialize() /*override*/;

    // vIndex: 2
    virtual bool hasStructureBlock() const /*override*/;

    // vIndex: 3
    virtual void clearStructure() /*override*/;

    // vIndex: 4
    virtual void spawnStructure() /*override*/;

    // vIndex: 5
    virtual ::std::optional<::AABB> getStructureBounds() const /*override*/;

    // vIndex: 6
    virtual ::std::optional<::Vec3> getStructureBlockPivot() const /*override*/;

    // vIndex: 7
    virtual ::std::optional<::Vec3> getStructureBlockPosPivot() const /*override*/;

    // vIndex: 8
    virtual ::BoundingBox getStructureBoundingBox() const /*override*/;

    // vIndex: 9
    virtual ::DimensionType getStructureDimension() const /*override*/;

    // vIndex: 10
    virtual int _getLevelTick() const /*override*/;

    // vIndex: 11
    virtual bool _isTestReady() /*override*/;
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCAPI ::BlockSource& $getBlockSource() const;

    MCAPI void $initialize();

    MCAPI bool $hasStructureBlock() const;

    MCAPI void $clearStructure();

    MCAPI void $spawnStructure();

    MCAPI ::std::optional<::AABB> $getStructureBounds() const;

    MCAPI ::std::optional<::Vec3> $getStructureBlockPivot() const;

    MCAPI ::std::optional<::Vec3> $getStructureBlockPosPivot() const;

    MCAPI ::BoundingBox $getStructureBoundingBox() const;

    MCAPI ::DimensionType $getStructureDimension() const;

    MCAPI int $_getLevelTick() const;

    MCAPI bool $_isTestReady();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
