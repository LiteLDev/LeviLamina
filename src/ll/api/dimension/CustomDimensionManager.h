#pragma once

#include <atomic>
#include <mutex>

#include "mc/world/AutomaticID.h"
#include "mc/world/level/levelgen/GeneratorType.h"

class Dimension;
class ILevel;
class Scheduler;
using DimensionType = AutomaticID<Dimension, int>;

namespace ll::dimension {

class FakeDimensionId;
class CustomDimension;

class CustomDimensionManager {
    friend CustomDimension;
    friend FakeDimensionId;

    std::atomic<int> mNewDimensionId;
    std::mutex       mMapMutex;

    std::unique_ptr<FakeDimensionId> fakeDimensionIdInstance;

    CustomDimensionManager();
    ~CustomDimensionManager();

protected:
    struct DimensionInfo {
        const std::string name;
        DimensionType     id;
        uint              seed;
        GeneratorType     generatorType;
    };
    std::unordered_map<std::string, DimensionInfo> customDimensionMap;     // save all dimension info
    std::unordered_map<std::string, DimensionInfo> registeredDimensionMap; // save registry dimension info

public:
    LLNDAPI static CustomDimensionManager& getInstance();
    /**
     * @brief Add a custom dimension
     * @return success add dimension id
     */
    LLAPI DimensionType addDimension(
        std::string_view dimensionName,
        uint             seed          = 123,
        GeneratorType    generatorType = GeneratorType::Overworld
    );

    // LLAPI DimensionType addDimension(
    //     std::string_view                                                                     dimensionName,
    //     std::function<std::shared_ptr<Dimension>(DimensionType, ILevel&, Scheduler&)> const& factory
    // );
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
