// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class LegacyStructureSettings {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEGACYSTRUCTURESETTINGS
public:
    class LegacyStructureSettings& operator=(class LegacyStructureSettings const &) = delete;
    LegacyStructureSettings(class LegacyStructureSettings const &) = delete;
#endif

public:
    MCAPI LegacyStructureSettings(enum Mirror, enum Rotation, class Block const *, class BoundingBox const &);
    MCAPI LegacyStructureSettings();
    MCAPI void addSwapAuxValue(int, int);
    MCAPI class BoundingBox const & getBoundingBox();
    MCAPI class Block const * getIgnoreBlock() const;
    MCAPI enum Mirror const & getMirror() const;
    MCAPI class BlockPos const & getRefPos() const;
    MCAPI enum Rotation const & getRotation() const;
    MCAPI class Block const & getSwappedBlock(class BlockPalette const &, class Block const &) const;
    MCAPI bool isIgnoreJigsawBlocks() const;
    MCAPI bool isIgnoreStructureBlocks() const;
    MCAPI bool isPlacingWaterBelowSeaLevel() const;
    MCAPI void placeWaterBelowSeaLevel(bool);
    MCAPI void setBlockRules(std::vector<std::unique_ptr<class StructurePoolBlockRule>> const *);
    MCAPI void setBlockTagRules(std::vector<std::unique_ptr<class StructurePoolBlockTagRule>> const *);
    MCAPI void setBoundingBox(class BoundingBox const &);
    MCAPI void setIgnoreBlock(class Block const *);
    MCAPI void setIntegrity(float);
    MCAPI void setMirror(enum Mirror);
    MCAPI void setProjection(enum Projection);
    MCAPI void setRefPos(class BlockPos const &);
    MCAPI void setRotation(enum Rotation);
    MCAPI void setSeed(unsigned int);
    MCAPI void updateBoundingBoxFromChunkPos();
    MCAPI ~LegacyStructureSettings();
    MCAPI static float const INTEGRITY_MAX;
    MCAPI static float const INTEGRITY_MIN;
    MCAPI static int const MAX_STRUCTURE_SIZE;

protected:

private:

};