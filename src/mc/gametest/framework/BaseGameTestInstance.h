#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class GameTestSequence; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class BaseGameTestInstance {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GAMETEST_BASEGAMETESTINSTANCE
public:
    BaseGameTestInstance& operator=(BaseGameTestInstance const&) = delete;
    BaseGameTestInstance(BaseGameTestInstance const&)            = delete;
    BaseGameTestInstance()                                       = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?initialize\@BaseGameTestInstance\@gametest\@\@UEAAXXZ
     */
    virtual void initialize();
    /**
     * @vftbl 2
     * @symbol ?hasStructureBlock\@MinecraftGameTestInstance\@\@UEBA_NXZ
     */
    virtual bool hasStructureBlock() const = 0;
    /**
     * @vftbl 3
     * @symbol ?clearStructure\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void clearStructure() = 0;
    /**
     * @vftbl 4
     * @symbol ?spawnStructure\@BaseGameTestInstance\@gametest\@\@UEAAXXZ
     */
    virtual void spawnStructure();
    /**
     * @vftbl 5
     * @symbol ?getStructureBounds\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VAABB\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AABB> getStructureBounds() const = 0;
    /**
     * @vftbl 6
     * @symbol ?getStructureBlockPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPivot() const = 0;
    /**
     * @vftbl 7
     * @symbol ?getStructureBlockPosPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPosPivot() const = 0;
    /**
     * @vftbl 8
     * @symbol ?getStructureBoundingBox\@MinecraftGameTestInstance\@\@UEBA?AVBoundingBox\@\@XZ
     */
    virtual class BoundingBox getStructureBoundingBox() const = 0;
    /**
     * @vftbl 9
     * @symbol ?getStructureDimension\@MinecraftGameTestInstance\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getStructureDimension() const = 0;
    /**
     * @vftbl 10
     * @symbol ?_getLevelTick\@MinecraftGameTestInstance\@\@MEBAHXZ
     */
    virtual int _getLevelTick() const = 0;
    /**
     * @vftbl 11
     * @symbol ?_isTestReady\@MinecraftGameTestInstance\@\@MEAA_NXZ
     */
    virtual bool _isTestReady() = 0;
    /**
     * @vftbl 12
     * @symbol ?_rerun\@BaseGameTestInstance\@gametest\@\@MEAAXXZ
     */
    virtual void _rerun();
    /**
     * @vftbl 13
     * @symbol ?_removeSimulatedPlayers\@BaseGameTestInstance\@gametest\@\@MEAAXXZ
     */
    virtual void _removeSimulatedPlayers();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_BASEGAMETESTINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseGameTestInstance();
#endif
    /**
     * @symbol
     * ??0BaseGameTestInstance\@gametest\@\@QEAA\@AEBVBaseGameTestFunction\@1\@V?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    BaseGameTestInstance(class gametest::BaseGameTestFunction const&, std::unique_ptr<class gametest::IGameTestHelperProvider>);
    /**
     * @symbol
     * ?addListener\@BaseGameTestInstance\@gametest\@\@QEAAXV?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void addListener(class std::shared_ptr<class gametest::IGameTestListener>);
    /**
     * @symbol ?addSimulatedPlayer\@BaseGameTestInstance\@gametest\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void addSimulatedPlayer(class WeakEntityRef);
    /**
     * @symbol ?createSequence\@BaseGameTestInstance\@gametest\@\@QEAAAEAVGameTestSequence\@2\@XZ
     */
    MCAPI class gametest::GameTestSequence& createSequence();
    /**
     * @symbol ?fail\@BaseGameTestInstance\@gametest\@\@QEAAXUGameTestError\@2\@_N\@Z
     */
    MCAPI void fail(struct gametest::GameTestError, bool);
    /**
     * @symbol ?finish\@BaseGameTestInstance\@gametest\@\@QEAAX_N\@Z
     */
    MCAPI void finish(bool);
    /**
     * @symbol ?getError\@BaseGameTestInstance\@gametest\@\@QEBAAEBV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct gametest::GameTestError> const& getError() const;
    /**
     * @symbol ?getRotation\@BaseGameTestInstance\@gametest\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const;
    /**
     * @symbol ?getStructureBlockPos\@BaseGameTestInstance\@gametest\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getStructureBlockPos() const;
    /**
     * @symbol
     * ?getTestName\@BaseGameTestInstance\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTestName() const;
    /**
     * @symbol ?getTick\@BaseGameTestInstance\@gametest\@\@QEBAHXZ
     */
    MCAPI int getTick() const;
    /**
     * @symbol ?hasRetryAttempts\@BaseGameTestInstance\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool hasRetryAttempts() const;
    /**
     * @symbol
     * ?removeListener\@BaseGameTestInstance\@gametest\@\@QEAAXV?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void removeListener(class std::shared_ptr<class gametest::IGameTestListener>);
    /**
     * @symbol ?setMaxRunCount\@BaseGameTestInstance\@gametest\@\@QEAAXH\@Z
     */
    MCAPI void setMaxRunCount(int);
    /**
     * @symbol ?setRotation\@BaseGameTestInstance\@gametest\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation);
    /**
     * @symbol ?setStopOnFailure\@BaseGameTestInstance\@gametest\@\@QEAAX_N\@Z
     */
    MCAPI void setStopOnFailure(bool);
    /**
     * @symbol ?setStructureBlockPos\@BaseGameTestInstance\@gametest\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureBlockPos(class BlockPos const&);
    /**
     * @symbol ?startExecution\@BaseGameTestInstance\@gametest\@\@QEAAXXZ
     */
    MCAPI void startExecution();
    /**
     * @symbol ?succeed\@BaseGameTestInstance\@gametest\@\@QEAAXXZ
     */
    MCAPI void succeed();
    /**
     * @symbol ?tick\@BaseGameTestInstance\@gametest\@\@QEAAXXZ
     */
    MCAPI void tick();
};

}; // namespace gametest
