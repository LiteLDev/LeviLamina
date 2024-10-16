#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/AutomaticID.h"
#include "mc/gametest/framework/BaseGameTestInstance.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestInstance; }
// clang-format on

class MinecraftGameTestInstance : public ::gametest::BaseGameTestInstance {
public:
    // prevent constructor by default
    MinecraftGameTestInstance& operator=(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~MinecraftGameTestInstance() = default;

    // vIndex: 1
    virtual void initialize();

    // vIndex: 2
    virtual bool hasStructureBlock() const;

    // vIndex: 3
    virtual void clearStructure();

    // vIndex: 4
    virtual void spawnStructure();

    // vIndex: 5
    virtual std::optional<class AABB> getStructureBounds() const;

    // vIndex: 6
    virtual std::optional<class Vec3> getStructureBlockPivot() const;

    // vIndex: 7
    virtual std::optional<class Vec3> getStructureBlockPosPivot() const;

    // vIndex: 8
    virtual class BoundingBox getStructureBoundingBox() const;

    // vIndex: 9
    virtual DimensionType getStructureDimension() const;

    // vIndex: 10
    virtual int _getLevelTick() const;

    // vIndex: 11
    virtual bool _isTestReady();

    // vIndex: 14
    virtual class BlockSource& getBlockSource() const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI int _getLevelTick$() const;

    MCAPI bool _isTestReady$();

    MCAPI void clearStructure$();

    MCAPI class BlockSource& getBlockSource$() const;

    MCAPI std::optional<class Vec3> getStructureBlockPivot$() const;

    MCAPI std::optional<class Vec3> getStructureBlockPosPivot$() const;

    MCAPI class BoundingBox getStructureBoundingBox$() const;

    MCAPI std::optional<class AABB> getStructureBounds$() const;

    MCAPI DimensionType getStructureDimension$() const;

    MCAPI bool hasStructureBlock$() const;

    MCAPI void initialize$();

    MCAPI void spawnStructure$();

    // NOLINTEND
};
