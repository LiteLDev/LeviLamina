/*
#include "ll/api/Logger.h"
#include "ll/api/memory/Hook.h"
#include "mc/common/wrapper/OwnerPtrFactory.h"
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
#include "mc/world/level/dimension/NetherDimension.h"
#include "mc/world/level/dimension/OverworldBrightnessRamp.h"
#include "mc/world/level/dimension/OverworldDimension.h"
#include "mc/world/level/dimension/VanillaDimensionFactory.h"
#include "mc/world/level/dimension/VanillaDimensions.h"
#include "mc/world/level/levelgen/WorldGenerator.h"
#include "mc/world/level/levelgen/flat/FlatWorldGenerator.h"
#include "mc/world/level/levelgen/structure/StructureFeatureRegistry.h"
#include "mc/world/level/storage/LevelData.h"

#if _HAS_CXX23
#include "ll/api/utils/StacktraceUtils.h"
#endif

class ILevel;
class Scheduler;
class Dimension;
class CompoundTag;
class StructureFeatureRegistry;
using namespace ll::memory;

using OwnerT = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;

namespace {

ll::Logger logger("TestRegistryDimension");

void printVfable(void* t) {
    auto lock = ll::Logger::lock();

    void** table = *(void***)t;
#if _HAS_CXX23
    logger.info("{}", ll::utils::stacktrace_utils::toString(*(std::stacktrace_entry*)&table));
#else
    logger.info("{}", (void*)table);
#endif
    for (size_t i = 0; table[i] != nullptr; ++i) {
#if _HAS_CXX23
        logger
            .info("v table[{:02}] : {}", i, ll::utils::stacktrace_utils::toString(*(std::stacktrace_entry*)&table[i]));
#else
        logger.info("v table[{}] : {}", i, table[i]);
#endif
    }
}

} // namespace

class TestDimension : public Dimension {
public:
    TestDimension(ILevel& ilevel, Scheduler& scheduler)
    : Dimension(
        ilevel,
        VanillaDimensions::Overworld,
        DimensionHeightRange(-64, 320),
        scheduler,
        VanillaDimensions::toString(VanillaDimensions::Overworld)
    ) {
        logger.debug("TestDimension::TestDimension");
        mDefaultBrightness.sky   = Brightness::MAX;
        mSeaLevel                = 5;
        mHasWeather              = true;
        mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
        mDimensionBrightnessRamp->buildBrightnessRamp();
    }
    void init() override {
        logger.debug("TestDimension::init");
        setSkylight(false);
        Dimension::init();
    }
    std::unique_ptr<WorldGenerator> createGenerator() override {
        logger.debug("TestDimension::createGenerator");
        auto& level     = getLevel();
        auto& levelData = level.getLevelData();
        level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());
        auto& layer = levelData.getFlatWorldGeneratorOptions();
        return std::make_unique<FlatWorldGenerator>(*this, 123, layer);
    }

    void upgradeLevelChunk(ChunkSource& cs, LevelChunk& lc, LevelChunk& generatedChunk) override {
        logger.debug("TestDimension::upgradeLevelChunk");
        BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
        VanillaLevelChunkUpgrade::_upgradeLevelChunkViaMetaData(lc, generatedChunk, blockSource);
        VanillaLevelChunkUpgrade::_upgradeLevelChunkLegacy(lc, blockSource);
    }

    void fixWallChunk(ChunkSource& cs, LevelChunk& lc) override {
        logger.debug("TestDimension::fixWallChunk");
        BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
        VanillaLevelChunkUpgrade::fixWallChunk(lc, blockSource);
    }

    bool levelChunkNeedsUpgrade(LevelChunk const& lc) const override {
        logger.debug("TestDimension::levelChunkNeedsUpgrade");
        return VanillaLevelChunkUpgrade::levelChunkNeedsUpgrade(lc);
    }
    void _upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) override {
        logger.debug("TestDimension::_upgradeOldLimboEntity");
        auto isTemplate = this->getLevel().getLevelData().isFromWorldTemplate();
        return VanillaLevelChunkUpgrade::upgradeOldLimboEntity(tag, vers, isTemplate);
    }

    Vec3 translatePosAcrossDimension(Vec3 const& pos, DimensionType did) const override {
        logger.debug("TestDimension::translatePosAcrossDimension");
        auto data  = getLevel().getDimensionConversionData();
        auto testd = VanillaDimensions::Overworld;
        auto topos = Vec3();
        VanillaDimensions::convertPointBetweenDimensions(pos, topos, did, testd, data);
        topos.x = std::clamp(topos.x, -32000000.0f, 32000000.0f);
        topos.z = std::clamp(topos.z, -32000000.0f, 32000000.0f);
        return topos;
    }

    std::unique_ptr<ChunkSource>
    _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion) override {
        logger.debug("TestDimension::_wrapStorageForVersionCompatibility");
        return cs;
    }

    mce::Color getBrightnessDependentFogColor(mce::Color const& color, float brightness) const override {
        logger.debug("TestDimension::getBrightnessDependentFogColor");
        float temp = (brightness * 0.94f) + 0.06f;
        // float temp2  = (brightness * 0.91f) + 0.09f;
        auto result = color;
        result.r    = color.r * temp;
        result.g    = color.g * temp;
        result.b    = color.b * temp;
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

// using fact = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;
// LL_AUTO_STATIC_HOOK(TestDimensionSercive,
//                    HookPriority::Normal,
//                    VanillaDimensionFactory::registerDimensionTypes,
//                    void,
//                    fact& factory){
//    origin(factory);
//    if(num) {
//        std::cout<< "Hook::registerFactory"<<std::endl;
//        factory.registerFactory(
//            "test dimension",
//            [](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
//                return std::make_shared<TestDimension>(ilevel, scheduler);
//            }
//        );
//        num = false;
//    }
// }

LL_AUTO_TYPED_INSTANCE_HOOK(
    RegistryDimensionTest,
    HookPriority::Normal,
    OwnerT,
    &OwnerT::registerFactory,
    void,
    const std::string&                                                          worldName,
    std::function<OwnerPtrT<SharePtrRefTraits<Dimension>>(ILevel&, Scheduler&)> faction
) {
    if (worldName == "overworld") {
        faction = [](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
            logger.debug("Overworld create");
            logger.debug("Overworld flat replace!!");
            auto dim  = std::make_shared<TestDimension>(ilevel, scheduler);
            auto refp = dim.get();
            // print IDimension::vftable
            printVfable(refp);

            // print LevelListener::vftable
            printVfable(((char*)refp + 8));

            // print SavedData::vftable
            printVfable(((char*)refp + 16));

            // print Bedrock::EnableNonOwnerReferences::vftable
            printVfable(((char*)refp + 64));
            return dim;
        };
    };
    origin(worldName, faction);
};

// registry dimensoin when in ll, must reload Dimension::getWeakRef
LL_AUTO_TYPED_INSTANCE_HOOK(RegistryDimensionTest1, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (this->getDimensionId() == 0) return weak_from_this();
    return origin();
}

*/