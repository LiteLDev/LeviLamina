#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/gametest/framework/BaseGameTestInstance.h"
#include "mc/world/AutomaticID.h"

class MinecraftGameTestInstance : public ::gametest::BaseGameTestInstance {

public:
    // prevent constructor by default
    MinecraftGameTestInstance& operator=(MinecraftGameTestInstance const&) = delete;
    MinecraftGameTestInstance(MinecraftGameTestInstance const&)            = delete;
    MinecraftGameTestInstance()                                            = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?initialize\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void initialize(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?hasStructureBlock\@MinecraftGameTestInstance\@\@UEBA_NXZ
     */
    virtual bool hasStructureBlock() const; // NOLINT
    /**
     * @vftbl 3
     * @symbol ?clearStructure\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void clearStructure(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?spawnStructure\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void spawnStructure(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?getStructureBounds\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VAABB\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AABB> getStructureBounds() const; // NOLINT
    /**
     * @vftbl 6
     * @symbol ?getStructureBlockPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPivot() const; // NOLINT
    /**
     * @vftbl 7
     * @symbol ?getStructureBlockPosPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPosPivot() const; // NOLINT
    /**
     * @vftbl 8
     * @symbol ?getStructureBoundingBox\@MinecraftGameTestInstance\@\@UEBA?AVBoundingBox\@\@XZ
     */
    virtual class BoundingBox getStructureBoundingBox() const; // NOLINT
    /**
     * @vftbl 9
     * @symbol ?getStructureDimension\@MinecraftGameTestInstance\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getStructureDimension() const; // NOLINT
    /**
     * @vftbl 10
     * @symbol ?_getLevelTick\@MinecraftGameTestInstance\@\@MEBAHXZ
     */
    virtual int _getLevelTick() const; // NOLINT
    /**
     * @vftbl 11
     * @symbol ?_isTestReady\@MinecraftGameTestInstance\@\@MEAA_NXZ
     */
    virtual bool _isTestReady(); // NOLINT
    /**
     * @vftbl 14
     * @symbol ?getBlockSource\@MinecraftGameTestInstance\@\@UEBAAEAVBlockSource\@\@XZ
     */
    virtual class BlockSource& getBlockSource() const; // NOLINT
};
