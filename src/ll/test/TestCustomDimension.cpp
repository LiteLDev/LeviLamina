/*
#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
#include "mc/deps/core/common/bedrock/DimensionFactory.h"
#include "mc/deps/core/common/bedrock/DimensionManager.h"
#include "mc/deps/core/mce/Color.h"
#include "mc/deps/json/Value.h"
#include "mc/math/Vec3.h"
#include "mc/world/level/BlockSource.h"
#include "mc/world/level/DimensionConversionData.h"
#include "mc/world/level/Level.h"
#include "mc/world/level/biome/registry/BiomeRegistry.h"
#include "mc/world/level/chunk/LevelChunk.h"
#include "mc/world/level/chunk/VanillaLevelChunkUpgrade.h"
#include "mc/world/level/dimension/Dimension.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/dimension/OverworldDimension.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/structure/StructureFeatureRegistry.h"
#include "mc/world/level/storage/LevelData.h"

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
/*
class ILevel;
class Scheduler;
class Dimension;
class CompoundTag;
class StructureFeatureRegistry;
using namespace ll::memory;

namespace {
ll::Logger logger("TestCustomDimension");

void addDimMap() {
    ll::memory::modify(VanillaDimensions::$DimensionMap(), [&](auto& dimMap) {
        logger.debug("Add new dimension");
        dimMap.mRight.insert(std::make_pair("test dimension", 3));
        dimMap.mLeft.insert(std::make_pair(3, "test dimension"));
    });
    ll::memory::modify(VanillaDimensions::Undefined, [&](auto& dimId) {
        logger.debug("Set VanillaDimensions::Undefined to 4");
        dimId.id = 4;
    });
}
} // namespace

namespace CustomizeDimension {
struct DimensionNameAndID {
    DimensionNameAndID(std::string_view n, AutomaticID<Dimension, int> i) : name(n), id(i){};
    std::string                 name;
    AutomaticID<Dimension, int> id;
};

const DimensionNameAndID TestDimension = DimensionNameAndID("test dimension", 3);
}; // namespace CustomizeDimension

class TestDimension : public Dimension {
public:
    TestDimension(ILevel& ilevel, Scheduler& scheduler)
    : Dimension(
        ilevel,
        CustomizeDimension::TestDimension.id,
        DimensionHeightRange(-64, 320),
        scheduler,
        CustomizeDimension::TestDimension.name
    ) {
        logger.debug("TestDimension::TestDimension");
        mDefaultBrightness.sky   = Brightness::MAX;
        mSeaLevel                = 5;
        mHasWeather              = true;
        mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
        mDimensionBrightnessRamp->buildBrightnessRamp();
    }
    void init() final {
        logger.debug("TestDimension::init");
        setSkylight(false);
        Dimension::init();
    }
    std::unique_ptr<WorldGenerator> createGenerator() final {
        logger.debug("TestDimension::createGenerator");
        auto& level     = getLevel();
        auto& levelData = level.getLevelData();
        level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());
        auto& layer = levelData.getFlatWorldGeneratorOptions();
        return std::make_unique<FlatWorldGenerator>(*this, 123, layer);
    }

    void upgradeLevelChunk(ChunkSource& cs, LevelChunk& lc, LevelChunk& generatedChunk) final {
        logger.debug("TestDimension::upgradeLevelChunk");
        BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
        VanillaLevelChunkUpgrade::_upgradeLevelChunkViaMetaData(lc, generatedChunk, blockSource);
        VanillaLevelChunkUpgrade::_upgradeLevelChunkLegacy(lc, blockSource);
    }

    void fixWallChunk(ChunkSource& cs, LevelChunk& lc) final {
        logger.debug("TestDimension::fixWallChunk");
        BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
        VanillaLevelChunkUpgrade::fixWallChunk(lc, blockSource);
    }

    bool levelChunkNeedsUpgrade(LevelChunk const& lc) const final {
        logger.debug("TestDimension::levelChunkNeedsUpgrade");
        return VanillaLevelChunkUpgrade::levelChunkNeedsUpgrade(lc);
    }
    void _upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) final {
        logger.debug("TestDimension::_upgradeOldLimboEntity");
        auto isTemplate = this->getLevel().getLevelData().isFromWorldTemplate();
        return VanillaLevelChunkUpgrade::upgradeOldLimboEntity(tag, vers, isTemplate);
    }

    Vec3 translatePosAcrossDimension(Vec3 const& pos, DimensionType did) const final {
        logger.debug("TestDimension::translatePosAcrossDimension");
        auto data  = getLevel().getDimensionConversionData();
        auto testd = CustomizeDimension::TestDimension.id;
        auto topos = Vec3();
        VanillaDimensions::convertPointBetweenDimensions(pos, topos, did, testd, data);
        if (topos.x >= 31999872) topos.x = 31999872;
        if (topos.x <= -31999872) topos.x = -31999872;
        if (topos.z >= 31999872) topos.z = 31999872;
        if (topos.z <= -31999872) topos.z = -31999872;
        return topos;
    }

    std::unique_ptr<ChunkSource>
    _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion) override {
        logger.debug("TestDimension::_wrapStorageForVersionCompatibility");
        return cs;
    }

    mce::Color getBrightnessDependentFogColor(mce::Color const& color, float brightness) const override {
        logger.debug("TestDimension::getBrightnessDependentFogColor");
        float temp   = (brightness * 0.94f) + 0.06f;
        float temp2  = (brightness * 0.91f) + 0.09f;
        auto  result = color;
        result.r     = color.r * temp;
        result.g     = color.g * temp;
        result.b     = color.b * temp2;
        return result;
    };

    short getCloudHeight() const override { return 192; };

    bool hasPrecipitationFog() const override { return true; };

    static std::unique_ptr<StructureFeatureRegistry>
    makeStructureFeatures(uint a1, bool a2, BaseGameVersion const& a3, Experiments const& a4) {
        logger.debug("TestDimension::makeStructureFeatures");
        return OverworldDimension::makeStructureFeatures(a1, a2, a3, a4);
    };
};

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsConverHook,
    HookPriority::Normal,
    VanillaDimensions::convertPointBetweenDimensions,
    bool,
    Vec3 const&                    oldPos,
    Vec3&                          toPos,
    DimensionType                  oldDim,
    DimensionType                  toDim,
    DimensionConversionData const& data
) {
    if (oldDim <= 2 && toDim <= 2) return origin(oldPos, toPos, oldDim, toDim, data);
    toPos = oldPos;
    return true;
};

using BedResult_Dim = Bedrock::Result<DimensionType>;
using BedResult_int = Bedrock::Result<int>&;

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHook,
    HookPriority::Normal,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$Result@V?$AutomaticID@VDimension@@H@@Verror_code@std@@@Bedrock@@$$"
    "QEAV?$Result@HVerror_code@std@@@3@@Z",
    BedResult_Dim,
    BedResult_int& dim
) {
    if (dim.value() <= 2) return origin(dim);
    if (dim.value() == CustomizeDimension::TestDimension.id)
        return Bedrock::Result<DimensionType>(CustomizeDimension::TestDimension.id.id);
    return origin(dim);
};

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsFromSerializedIntHookI,
    HookPriority::Normal,
    "?fromSerializedInt@VanillaDimensions@@SA?AV?$AutomaticID@VDimension@@H@@H@Z",
    DimensionType,
    int dim
) {
    if (dim <= 2) return origin(dim);
    if (dim == CustomizeDimension::TestDimension.id) return CustomizeDimension::TestDimension.id;
    return origin(dim);
}

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsToSerializedIntHook,
    HookPriority::Normal,
    VanillaDimensions::toSerializedInt,
    int,
    DimensionType const& dim
) {
    if (dim <= 2) return origin(dim);
    if (dim.id == CustomizeDimension::TestDimension.id) return CustomizeDimension::TestDimension.id;
    return origin(dim);
}

LL_AUTO_STATIC_HOOK(
    VanillaDimensionsToStringHook,
    HookPriority::Normal,
    VanillaDimensions::toString,
    std::string const,
    DimensionType const& dim
) {
    if (dim.id == CustomizeDimension::TestDimension.id) return CustomizeDimension::TestDimension.name;
    return origin(dim);
}

using fact = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;
LL_AUTO_STATIC_HOOK(
    RegistryDimensionSercive,
    HookPriority::Normal,
    VanillaDimensionFactory::registerDimensionTypes,
    void,
    fact& factory
) {
    origin(factory);
    addDimMap();
    logger.debug("VanillaDimensions::Undefined id: {}", VanillaDimensions::Undefined.id);
    logger.debug("Hook::registerFactory");
    factory.registerFactory(
        CustomizeDimension::TestDimension.name,
        [](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
            logger.debug("create test dimension");
            return std::make_shared<TestDimension>(ilevel, scheduler);
        }
    );
}

// registry dimensoin when in ll, must reload Dimension::getWeakRef
LL_AUTO_TYPED_INSTANCE_HOOK(DimensionGetWeakRefHook, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (this->getDimensionId() == 3) return weak_from_this();
    return origin();
};
*/
