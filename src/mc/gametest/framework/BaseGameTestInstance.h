#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"

// auto generated forward declare list
// clang-format off
class AABB;
class BlockPos;
class BoundingBox;
class Dimension;
class Vec3;
class WeakEntityRef;
enum class Rotation;
namespace gametest { class BaseGameTestFunction; }
namespace gametest { class GameTestSequence; }
namespace gametest { class IGameTestHelperProvider; }
namespace gametest { class IGameTestListener; }
namespace gametest { struct GameTestError; }
// clang-format on

namespace gametest {

class BaseGameTestInstance {

public:
    // prevent constructor by default
    BaseGameTestInstance& operator=(BaseGameTestInstance const&) = delete;
    BaseGameTestInstance(BaseGameTestInstance const&)            = delete;
    BaseGameTestInstance()                                       = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initialize\@BaseGameTestInstance\@gametest\@\@UEAAXXZ
     */
    virtual void initialize(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?hasStructureBlock\@MinecraftGameTestInstance\@\@UEBA_NXZ
     */
    virtual bool hasStructureBlock() const = 0; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?clearStructure\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void clearStructure() = 0; // NOLINT
    /**
     * @vftbl 4
     * @symbol ?spawnStructure\@BaseGameTestInstance\@gametest\@\@UEAAXXZ
     */
    virtual void spawnStructure(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getStructureBounds\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VAABB\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AABB> getStructureBounds() const = 0; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getStructureBlockPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPivot() const = 0; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getStructureBlockPosPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPosPivot() const = 0; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getStructureBoundingBox\@MinecraftGameTestInstance\@\@UEBA?AVBoundingBox\@\@XZ
     */
    virtual class BoundingBox getStructureBoundingBox() const = 0; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getStructureDimension\@MinecraftGameTestInstance\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getStructureDimension() const = 0; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_getLevelTick\@MinecraftGameTestInstance\@\@MEBAHXZ
     */
    virtual int _getLevelTick() const = 0; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?_isTestReady\@MinecraftGameTestInstance\@\@MEAA_NXZ
     */
    virtual bool _isTestReady() = 0; // NOLINT
    /**
     * @vftbl 12
     * @symbol ?_rerun\@BaseGameTestInstance\@gametest\@\@MEAAXXZ
     */
    virtual void _rerun(); // NOLINT
    /**
     * @vftbl 13
     * @symbol ?_removeSimulatedPlayers\@BaseGameTestInstance\@gametest\@\@MEAAXXZ
     */
    virtual void _removeSimulatedPlayers(); // NOLINT
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_GAMETEST_BASEGAMETESTINSTANCE
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~BaseGameTestInstance(); // NOLINT
#endif
    /**
     * @symbol
     * ??0BaseGameTestInstance\@gametest\@\@QEAA\@AEBVBaseGameTestFunction\@1\@V?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI
    BaseGameTestInstance(class gametest::BaseGameTestFunction const&, std::unique_ptr<class gametest::IGameTestHelperProvider>); // NOLINT
    /**
     * @symbol
     * ?addListener\@BaseGameTestInstance\@gametest\@\@QEAAXV?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void addListener(class std::shared_ptr<class gametest::IGameTestListener>); // NOLINT
    /**
     * @symbol ?addSimulatedPlayer\@BaseGameTestInstance\@gametest\@\@QEAAXVWeakEntityRef\@\@\@Z
     */
    MCAPI void addSimulatedPlayer(class WeakEntityRef); // NOLINT
    /**
     * @symbol ?createSequence\@BaseGameTestInstance\@gametest\@\@QEAAAEAVGameTestSequence\@2\@XZ
     */
    MCAPI class gametest::GameTestSequence& createSequence(); // NOLINT
    /**
     * @symbol ?fail\@BaseGameTestInstance\@gametest\@\@QEAAXUGameTestError\@2\@_N\@Z
     */
    MCAPI void fail(struct gametest::GameTestError, bool); // NOLINT
    /**
     * @symbol ?finish\@BaseGameTestInstance\@gametest\@\@QEAAX_N\@Z
     */
    MCAPI void finish(bool); // NOLINT
    /**
     * @symbol ?getError\@BaseGameTestInstance\@gametest\@\@QEBAAEBV?$optional\@UGameTestError\@gametest\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct gametest::GameTestError> const& getError() const; // NOLINT
    /**
     * @symbol ?getRotation\@BaseGameTestInstance\@gametest\@\@QEBA?AW4Rotation\@\@XZ
     */
    MCAPI enum class Rotation getRotation() const; // NOLINT
    /**
     * @symbol ?getStructureBlockPos\@BaseGameTestInstance\@gametest\@\@QEBA?AVBlockPos\@\@XZ
     */
    MCAPI class BlockPos getStructureBlockPos() const; // NOLINT
    /**
     * @symbol
     * ?getTestName\@BaseGameTestInstance\@gametest\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getTestName() const; // NOLINT
    /**
     * @symbol ?getTick\@BaseGameTestInstance\@gametest\@\@QEBAHXZ
     */
    MCAPI int getTick() const; // NOLINT
    /**
     * @symbol ?hasRetryAttempts\@BaseGameTestInstance\@gametest\@\@QEBA_NXZ
     */
    MCAPI bool hasRetryAttempts() const; // NOLINT
    /**
     * @symbol
     * ?removeListener\@BaseGameTestInstance\@gametest\@\@QEAAXV?$shared_ptr\@VIGameTestListener\@gametest\@\@\@std\@\@\@Z
     */
    MCAPI void removeListener(class std::shared_ptr<class gametest::IGameTestListener>); // NOLINT
    /**
     * @symbol ?setMaxRunCount\@BaseGameTestInstance\@gametest\@\@QEAAXH\@Z
     */
    MCAPI void setMaxRunCount(int); // NOLINT
    /**
     * @symbol ?setRotation\@BaseGameTestInstance\@gametest\@\@QEAAXW4Rotation\@\@\@Z
     */
    MCAPI void setRotation(enum class Rotation); // NOLINT
    /**
     * @symbol ?setStopOnFailure\@BaseGameTestInstance\@gametest\@\@QEAAX_N\@Z
     */
    MCAPI void setStopOnFailure(bool); // NOLINT
    /**
     * @symbol ?setStructureBlockPos\@BaseGameTestInstance\@gametest\@\@QEAAXAEBVBlockPos\@\@\@Z
     */
    MCAPI void setStructureBlockPos(class BlockPos const&); // NOLINT
    /**
     * @symbol ?startExecution\@BaseGameTestInstance\@gametest\@\@QEAAXXZ
     */
    MCAPI void startExecution(); // NOLINT
    /**
     * @symbol ?succeed\@BaseGameTestInstance\@gametest\@\@QEAAXXZ
     */
    MCAPI void succeed(); // NOLINT
    /**
     * @symbol ?tick\@BaseGameTestInstance\@gametest\@\@QEAAXXZ
     */
    MCAPI void tick(); // NOLINT
};

}; // namespace gametest
