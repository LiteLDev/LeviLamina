#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureFeatureRegistry {

public:
    // prevent constructor by default
    StructureFeatureRegistry& operator=(StructureFeatureRegistry const&) = delete;
    StructureFeatureRegistry(StructureFeatureRegistry const&)            = delete;

public:
    /**
     * @symbol ??0StructureFeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI StructureFeatureRegistry(); // NOLINT
    /**
     * @symbol
     * ?findNearestStructureFeature\@StructureFeatureRegistry\@\@QEAA_NAEAVDimension\@\@AEAVIPreliminarySurfaceProvider\@\@W4StructureFeatureType\@\@AEBVBlockPos\@\@AEAV5\@AEBVBiomeSource\@\@_N\@Z
     */
    MCAPI bool findNearestStructureFeature(
        class Dimension&,
        class IPreliminarySurfaceProvider&,
        enum class StructureFeatureType,
        class BlockPos const&,
        class BlockPos&,
        class BiomeSource const&,
        bool
    ); // NOLINT
    /**
     * @symbol
     * ?findStructureFeatureTypeAt\@StructureFeatureRegistry\@\@QEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&); // NOLINT
    /**
     * @symbol
     * ?getStructureFeatureOfType\@StructureFeatureRegistry\@\@QEBAPEAVStructureFeature\@\@W4StructureFeatureType\@\@\@Z
     */
    MCAPI class StructureFeature* getStructureFeatureOfType(enum class StructureFeatureType) const; // NOLINT
    /**
     * @symbol
     * ?isStructureFeatureTypeAt\@StructureFeatureRegistry\@\@QEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCAPI bool isStructureFeatureTypeAt(class BlockPos const&, enum class StructureFeatureType) const; // NOLINT
    /**
     * @symbol ??1StructureFeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI ~StructureFeatureRegistry(); // NOLINT
};
