#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/AutomaticID.h"
#include "mc/world/level/dimension/Dimension.h"

// auto generated forward declare list
// clang-format off
namespace mce { class Color; }
// clang-format on

class OverworldDimension : public ::Dimension {

public:
    // prevent constructor by default
    OverworldDimension& operator=(OverworldDimension const&) = delete;
    OverworldDimension(OverworldDimension const&)            = delete;
    OverworldDimension()                                     = delete;

public:
    // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDDIMENSION
    /**
     * @symbol ?_upgradeOldLimboEntity\@OverworldDimension\@\@EEAAXAEAVCompoundTag\@\@W4LimboEntitiesVersion\@\@\@Z
     */
    MCVAPI void _upgradeOldLimboEntity(class CompoundTag&, enum class LimboEntitiesVersion);
    /**
     * @symbol
     * ?_wrapStorageForVersionCompatibility\@OverworldDimension\@\@EEAA?AV?$unique_ptr\@VChunkSource\@\@U?$default_delete\@VChunkSource\@\@\@std\@\@\@std\@\@V23\@W4StorageVersion\@\@\@Z
     */
    MCVAPI std::unique_ptr<class ChunkSource>
           _wrapStorageForVersionCompatibility(std::unique_ptr<class ChunkSource>, enum class StorageVersion);
    /**
     * @symbol
     * ?createGenerator\@OverworldDimension\@\@UEAA?AV?$unique_ptr\@VWorldGenerator\@\@U?$default_delete\@VWorldGenerator\@\@\@std\@\@\@std\@\@XZ
     */
    MCVAPI std::unique_ptr<class WorldGenerator> createGenerator();
    /**
     * @symbol ?fixWallChunk\@OverworldDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@\@Z
     */
    MCVAPI void fixWallChunk(class ChunkSource&, class LevelChunk&);
    /**
     * @symbol ?getBrightnessDependentFogColor\@OverworldDimension\@\@UEBA?AVColor\@mce\@\@AEBV23\@M\@Z
     */
    MCVAPI class mce::Color getBrightnessDependentFogColor(class mce::Color const&, float) const;
    /**
     * @symbol ?getCloudHeight\@OverworldDimension\@\@UEBAFXZ
     */
    MCVAPI short getCloudHeight() const;
    /**
     * @symbol ?hasPrecipitationFog\@OverworldDimension\@\@UEBA_NXZ
     */
    MCVAPI bool hasPrecipitationFog() const;
    /**
     * @symbol ?levelChunkNeedsUpgrade\@OverworldDimension\@\@UEBA_NAEBVLevelChunk\@\@\@Z
     */
    MCVAPI bool levelChunkNeedsUpgrade(class LevelChunk const&) const;
    /**
     * @symbol
     * ?translatePosAcrossDimension\@OverworldDimension\@\@UEBA?AVVec3\@\@AEBV2\@V?$AutomaticID\@VDimension\@\@H\@\@\@Z
     */
    MCVAPI class Vec3 translatePosAcrossDimension(class Vec3 const&, class AutomaticID<class Dimension, int>) const;
    /**
     * @symbol ?upgradeLevelChunk\@OverworldDimension\@\@UEAAXAEAVChunkSource\@\@AEAVLevelChunk\@\@1\@Z
     */
    MCVAPI void upgradeLevelChunk(class ChunkSource&, class LevelChunk&, class LevelChunk&);
#endif
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol
     * ?makeStructureFeatures\@OverworldDimension\@\@CA?AV?$unique_ptr\@VStructureFeatureRegistry\@\@U?$default_delete\@VStructureFeatureRegistry\@\@\@std\@\@\@std\@\@I_NAEBVBaseGameVersion\@\@AEBVExperiments\@\@\@Z
     */
    MCAPI static std::unique_ptr<class StructureFeatureRegistry>
    makeStructureFeatures(unsigned int, bool, class BaseGameVersion const&, class Experiments const&);
    // NOLINTEND
};
