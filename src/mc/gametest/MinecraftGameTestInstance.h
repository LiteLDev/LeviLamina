#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestInstance.h"
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class BaseGameTestInstance; }
namespace gametest { class IGameTestHelperProvider; }
// clang-format on

class MinecraftGameTestInstance : public ::gametest::BaseGameTestInstance {
public:
    // prevent constructor by default
    MinecraftGameTestInstance& operator=(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance(MinecraftGameTestInstance const&);
    MinecraftGameTestInstance();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MinecraftGameTestInstance@@UEAA@XZ
    virtual ~MinecraftGameTestInstance() = default;

    // vIndex: 1, symbol: ?initialize@MinecraftGameTestInstance@@UEAAXXZ
    virtual void initialize();

    // vIndex: 2, symbol: ?hasStructureBlock@MinecraftGameTestInstance@@UEBA_NXZ
    virtual bool hasStructureBlock() const;

    // vIndex: 3, symbol: ?clearStructure@MinecraftGameTestInstance@@UEAAXXZ
    virtual void clearStructure();

    // vIndex: 4, symbol: ?spawnStructure@MinecraftGameTestInstance@@UEAAXXZ
    virtual void spawnStructure();

    // vIndex: 5, symbol: ?getStructureBounds@MinecraftGameTestInstance@@UEBA?AV?$optional@VAABB@@@std@@XZ
    virtual std::optional<class AABB> getStructureBounds() const;

    // vIndex: 6, symbol: ?getStructureBlockPivot@MinecraftGameTestInstance@@UEBA?AV?$optional@VVec3@@@std@@XZ
    virtual std::optional<class Vec3> getStructureBlockPivot() const;

    // vIndex: 7, symbol: ?getStructureBlockPosPivot@MinecraftGameTestInstance@@UEBA?AV?$optional@VVec3@@@std@@XZ
    virtual std::optional<class Vec3> getStructureBlockPosPivot() const;

    // vIndex: 8, symbol: ?getStructureBoundingBox@MinecraftGameTestInstance@@UEBA?AVBoundingBox@@XZ
    virtual class BoundingBox getStructureBoundingBox() const;

    // vIndex: 9, symbol: ?getStructureDimension@MinecraftGameTestInstance@@UEBA?AV?$AutomaticID@VDimension@@H@@XZ
    virtual DimensionType getStructureDimension() const;

    // vIndex: 10, symbol: ?_getLevelTick@MinecraftGameTestInstance@@MEBAHXZ
    virtual int _getLevelTick() const;

    // vIndex: 11, symbol: ?_isTestReady@MinecraftGameTestInstance@@MEAA_NXZ
    virtual bool _isTestReady();

    // vIndex: 14, symbol: ?getBlockSource@MinecraftGameTestInstance@@UEBAAEAVBlockSource@@XZ
    virtual class BlockSource& getBlockSource() const;

    // symbol:
    // ??0MinecraftGameTestInstance@@QEAA@AEBVBaseGameTestFunction@gametest@@V?$unique_ptr@VIGameTestHelperProvider@gametest@@U?$default_delete@VIGameTestHelperProvider@gametest@@@std@@@std@@AEAVDimension@@@Z
    MCAPI MinecraftGameTestInstance(
        class gametest::BaseGameTestFunction const&,
        std::unique_ptr<class gametest::IGameTestHelperProvider> helper,
        class Dimension&                                         dimension
    );

    // NOLINTEND
};
