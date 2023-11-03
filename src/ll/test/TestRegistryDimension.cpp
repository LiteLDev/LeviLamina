#ifdef LL_DEBUG

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

class ILevel;
class Scheduler;
class Dimension;
class CompoundTag;
class StructureFeatureRegistry;
using namespace ll::memory;

using OwnerT = OwnerPtrFactory<Dimension, ILevel&, Scheduler&>;

namespace {
typedef void (*V_PTR)(); // typedef一下函数指针，相当于把返回值为void型的
// 函数指针定义成 V_PTR.

// 打印虚函数表
void PrintPFTable(V_PTR* table) {
    // 因为虚表最后一个为nllptr，我们可以利用这个打印虚表。
    for (size_t i = 0; table[i] != nullptr; ++i) { printf("table[%d] : %p->\n", i, table[i]); }
}

} // namespace

class TestDimension : public Dimension {
public:
    TestDimension(ILevel& ilevel, Scheduler& scheduler)
    : Dimension(ilevel, VanillaDimensions::TestDimension, DimensionHeightRange(-64, 320), scheduler, "TestDimension") {
        std::cout << "TestDimension::TestDimension" << std::endl;
        mDefaultBrightness.sky   = Brightness::MAX;
        mSeaLevel                = 5;
        mHasWeather              = true;
        mDimensionBrightnessRamp = std::make_unique<OverworldBrightnessRamp>();
        mDimensionBrightnessRamp->buildBrightnessRamp();
    }
    void init() final {
        std::cout << "TestDimension::init" << std::endl;
        setSkylight(false);
        Dimension::init();
    }
    std::unique_ptr<WorldGenerator> createGenerator() final {
        std::cout << "TestDimension::createGenerator" << std::endl;
        auto& level     = getLevel();
        auto& levelData = level.getLevelData();
        level.getBiomeRegistry().lookupByName(levelData.getBiomeOverride());
        auto& layer = levelData.getFlatWorldGeneratorOptions();
        return std::make_unique<FlatWorldGenerator>(*this, 123, layer);
    }

    void upgradeLevelChunk(ChunkSource& cs, LevelChunk& lc, LevelChunk& generatedChunk) final {
        std::cout << "TestDimension::upgradeLevelChunk" << std::endl;
        BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
        VanillaLevelChunkUpgrade::_upgradeLevelChunkViaMetaData(lc, generatedChunk, blockSource);
        VanillaLevelChunkUpgrade::_upgradeLevelChunkLegacy(lc, blockSource);
    }

    void fixWallChunk(ChunkSource& cs, LevelChunk& lc) final {
        std::cout << "TestDimension::fixWallChunk" << std::endl;
        BlockSource blockSource = BlockSource(getLevel(), *this, cs, false, true, false);
        VanillaLevelChunkUpgrade::fixWallChunk(lc, blockSource);
    }

    bool levelChunkNeedsUpgrade(LevelChunk const& lc) const final {
        std::cout << "TestDimension::levelChunkNeedsUpgrade" << std::endl;
        return VanillaLevelChunkUpgrade::levelChunkNeedsUpgrade(lc);
    }
    void _upgradeOldLimboEntity(CompoundTag& tag, ::LimboEntitiesVersion vers) final {
        std::cout << "TestDimension::_upgradeOldLimboEntity" << std::endl;
        auto isTemplate = this->getLevel().getLevelData().isFromWorldTemplate();
        return VanillaLevelChunkUpgrade::upgradeOldLimboEntity(tag, vers, isTemplate);
    }

    Vec3 translatePosAcrossDimension(Vec3 const& pos, DimensionType did) const final {
        std::cout << "TestDimension::translatePosAcrossDimension" << std::endl;
        auto data  = getLevel().getDimensionConversionData();
        auto testd = VanillaDimensions::TestDimension;
        auto topos = Vec3();
        VanillaDimensions::convertPointBetweenDimensions(pos, topos, did, testd, data);
        if (topos.x >= 31999872) topos.x = 31999872;
        if (topos.x <= -31999872) topos.x = -31999872;
        if (topos.z >= 31999872) topos.z = 31999872;
        if (topos.z <= -31999872) topos.z = -31999872;
        return topos;
    }

    std::unique_ptr<ChunkSource>
    _wrapStorageForVersionCompatibility(std::unique_ptr<ChunkSource> cs, ::StorageVersion ver) final {
        std::cout << "TestDimension::_wrapStorageForVersionCompatibility" << std::endl;
        return cs;
    }

    mce::Color getBrightnessDependentFogColor(mce::Color const& color, float brightness) const {
        float temp   = (brightness * 0.94) + 0.059999999;
        float temp2  = (brightness * 0.91000003) + 0.090000004;
        auto  result = color;
        result.r     = color.r * temp;
        result.g     = color.g * temp;
        result.b     = color.b * temp;
        return result;
    };

    short getCloudHeight() const { return 192; };

    bool hasPrecipitationFog() const { return true; };

    std::unique_ptr<StructureFeatureRegistry>
    makeStructureFeatures(uint a1, bool a2, BaseGameVersion const& a3, Experiments const& a4) {
        return OverworldDimension::makeStructureFeatures(a1, a2, a3, a4);
    };
};
namespace {
bool num = true;
}
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
    if (worldName == "nether") {
        faction = [](ILevel& ilevel, Scheduler& scheduler) -> OwnerPtrT<SharePtrRefTraits<Dimension>> {
            std::cout << "[TEST] Create Nether Dimension" << std::endl;
            auto dim = std::make_shared<NetherDimension>(ilevel, scheduler);
            // auto refp = dim.get();
            // print IDimension::vftable
            // PrintPFTable((V_PTR*)*(__int64*)refp);

            // print LevelListener::vftable
            // PrintPFTable((V_PTR*)*(__int64*)((char*)refp+8));

            // print SavedData::vftable
            // PrintPFTable((V_PTR*)*(__int64*)((char*)refp+16));

            // print Bedrock::EnableNonOwnerReferences::vftable
            // PrintPFTable((V_PTR*)*(__int64*)((char*)refp+64));
            return dim;
        };
    };
    origin(worldName, faction);
};

// registry dimensoin when in ll, must reload Dimension::getWeakRef
LL_AUTO_TYPED_INSTANCE_HOOK(RegistryDimensionTest1, HookPriority::Normal, Dimension, &Dimension::getWeakRef, WeakRefT<SharePtrRefTraits<Dimension>>) {
    if (this->getDimensionId() == 1) return weak_from_this();
    return origin();
}


#endif // LL_DEBUG