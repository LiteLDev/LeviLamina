#pragma once

#include <atomic>
#include <mutex>

#include "mc/nbt/CompoundTag.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"

class Dimension;
class ILevel;
class Scheduler;
using DimensionType = AutomaticID<Dimension, int>;

namespace ll::dimension {

struct DimensionFactoryInfo {
    ILevel&            level;
    Scheduler&         scheduler;
    CompoundTag const& data;
    DimensionType      dimId;
};

class CustomDimensionManager {
    struct Impl;
    std::unique_ptr<Impl> impl;

    CustomDimensionManager();
    ~CustomDimensionManager();

public:
    using DimensionFactoryT = std::shared_ptr<Dimension>(DimensionFactoryInfo const&);

protected:
    LLAPI DimensionType addDimension(
        std::string const&                  dimName,
        std::function<DimensionFactoryT>    factory,
        std::function<CompoundTag()> const& newData
    );

public:
    LLNDAPI static CustomDimensionManager& getInstance();

    template <std::derived_from<Dimension> D, class... Args>
    DimensionType addDimension(std::string const& dimName, Args&&... args) {
        return addDimension(
            dimName,
            [dimName](ll::dimension::DimensionFactoryInfo const& info) -> std::shared_ptr<Dimension> {
                return std::make_shared<D>(dimName, info);
            },
            [&] { return D::generateNewData(std::forward<Args>(args)...); }
        );
    }
};

// Dimension need to test virtual tables

/* Dimension related virtual tables
 *
 *                                    ∕-- IDimension
 * OverworldDimension --∖           ∕-- LevelListener --- BlockSourceListener
 * NetherDimension    --- Dimension --- SavedData
 * TheEndDimension    --∕           ∖-- Bedrock::EnableNonOwnerReferences
 *                                    ∖-- std::enable_shared_from_this<Dimension>
 *
 */

/* WorldGenerator related virtual tables
 *
 *                          FlatWorldGenerator  --∖
 *                          NetherGenerator      --∖
 * OverworldGenerator2d --- OverworldGenerator2d --- WorldGenerator --- ChunkSource ---
 * Bedrock::EnableNonOwnerReferences TheEndGenerator      --∕                ∖-- IPreliminarySurfaceProvider
 *                          VoidGenerator       --∕
 *
 */

/* DimensionBrightnessRamp related virtual tables
 *
 * NetherBrightnessRamp   --∖
 * OverworldBrightnessRamp --- DimensionBrightnessRamp
 *
 */

/* BlockSource related virtual tables
 *
 * BlockSource --- IBlockSource --- IConstBlockSource
 *             ∖-- std::enable_shared_from_this<BlockSource>
 *
 */

/* BiomeSource related virtual tables
 *
 * FixedBiomeSource --- BiomeSource
 *
 */

} // namespace ll::dimension
