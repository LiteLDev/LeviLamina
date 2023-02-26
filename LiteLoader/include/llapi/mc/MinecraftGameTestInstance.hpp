/**
 * @file  MinecraftGameTestInstance.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftGameTestInstance.
 *
 */
class MinecraftGameTestInstance {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTGAMETESTINSTANCE
public:
    class MinecraftGameTestInstance& operator=(class MinecraftGameTestInstance const &) = delete;
    MinecraftGameTestInstance(class MinecraftGameTestInstance const &) = delete;
    MinecraftGameTestInstance() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~MinecraftGameTestInstance();
    /**
     * @vftbl  1
     * @symbol  ?initialize\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void initialize();
    /**
     * @vftbl  2
     * @symbol  ?hasStructureBlock\@MinecraftGameTestInstance\@\@UEBA_NXZ
     */
    virtual bool hasStructureBlock() const;
    /**
     * @vftbl  3
     * @symbol  ?clearStructure\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void clearStructure();
    /**
     * @vftbl  4
     * @symbol  ?spawnStructure\@MinecraftGameTestInstance\@\@UEAAXXZ
     */
    virtual void spawnStructure();
    /**
     * @vftbl  5
     * @symbol  ?getStructureBounds\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VAABB\@\@\@std\@\@XZ
     */
    virtual class std::optional<class AABB> getStructureBounds() const;
    /**
     * @vftbl  6
     * @symbol  ?getStructureBlockPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPivot() const;
    /**
     * @vftbl  7
     * @symbol  ?getStructureBlockPosPivot\@MinecraftGameTestInstance\@\@UEBA?AV?$optional\@VVec3\@\@\@std\@\@XZ
     */
    virtual class std::optional<class Vec3> getStructureBlockPosPivot() const;
    /**
     * @vftbl  8
     * @symbol  ?getStructureBoundingBox\@MinecraftGameTestInstance\@\@UEBA?AVBoundingBox\@\@XZ
     */
    virtual class BoundingBox getStructureBoundingBox() const;
    /**
     * @vftbl  9
     * @symbol  ?getStructureDimension\@MinecraftGameTestInstance\@\@UEBA?AV?$AutomaticID\@VDimension\@\@H\@\@XZ
     */
    virtual class AutomaticID<class Dimension, int> getStructureDimension() const;
    /**
     * @vftbl  10
     * @symbol  ?_getLevelTick\@MinecraftGameTestInstance\@\@MEBAHXZ
     */
    virtual int _getLevelTick() const;
    /**
     * @vftbl  11
     * @symbol  ?_isTestReady\@MinecraftGameTestInstance\@\@MEAA_NXZ
     */
    virtual bool _isTestReady();
    /**
     * @vftbl  14
     * @symbol  ?getBlockSource\@MinecraftGameTestInstance\@\@UEBAAEAVBlockSource\@\@XZ
     */
    virtual class BlockSource & getBlockSource() const;
    /**
     * @symbol  ??0MinecraftGameTestInstance\@\@QEAA\@AEBVBaseGameTestFunction\@gametest\@\@V?$unique_ptr\@VIGameTestHelperProvider\@gametest\@\@U?$default_delete\@VIGameTestHelperProvider\@gametest\@\@\@std\@\@\@std\@\@AEAVDimension\@\@\@Z
     */
    MCAPI MinecraftGameTestInstance(class gametest::BaseGameTestFunction const &, std::unique_ptr<class gametest::IGameTestHelperProvider>, class Dimension &);

};