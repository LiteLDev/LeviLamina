#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StructureFeatureRegistry {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREFEATUREREGISTRY
public:
    StructureFeatureRegistry& operator=(StructureFeatureRegistry const&) = delete;
    StructureFeatureRegistry(StructureFeatureRegistry const&)            = delete;
#endif

public:
    /**
     * @symbol ??0StructureFeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI StructureFeatureRegistry();
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
    );
    /**
     * @symbol
     * ?findStructureFeatureTypeAt\@StructureFeatureRegistry\@\@QEAA?AW4StructureFeatureType\@\@AEBVBlockPos\@\@\@Z
     */
    MCAPI enum class StructureFeatureType findStructureFeatureTypeAt(class BlockPos const&);
    /**
     * @symbol
     * ?getStructureFeatureOfType\@StructureFeatureRegistry\@\@QEBAPEAVStructureFeature\@\@W4StructureFeatureType\@\@\@Z
     */
    MCAPI class StructureFeature* getStructureFeatureOfType(enum class StructureFeatureType) const;
    /**
     * @symbol
     * ?isStructureFeatureTypeAt\@StructureFeatureRegistry\@\@QEBA_NAEBVBlockPos\@\@W4StructureFeatureType\@\@\@Z
     */
    MCAPI bool isStructureFeatureTypeAt(class BlockPos const&, enum class StructureFeatureType) const;
    /**
     * @symbol ??1StructureFeatureRegistry\@\@QEAA\@XZ
     */
    MCAPI ~StructureFeatureRegistry();
};
