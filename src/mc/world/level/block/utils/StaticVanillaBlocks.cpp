#include "mc/world/level/block/utils/StaticVanillaBlocks.h"
#include "ll/api/memory/Hook.h"
#include "mc/world/level/block/registry/BlockTypeRegistry.h"
#include "mc/world/level/block/utils/BedrockBlockNames.h"
#include "mc/world/level/block/utils/VanillaBlockTypeIds.h"

// #define GENERATE_STATIC_VANILLA_BLOCKS

#ifdef GENERATE_STATIC_VANILLA_BLOCKS

#include "ll/api/io/FileUtils.h"
#include "ll/api/utils/StringUtils.h"
#include "ll/core/LeviLamina.h"
#include "ll/core/Version.h"

void gen() {
    auto idFile =
        ll::file_utils::readFile(LL_WORKSPACE_FOLDER R"(src\mc\world\level\block\utils\VanillaBlockTypeIds.h)").value();

    std::vector<std::string_view> blocks;

    for (auto line : ll::string_utils::splitByPattern(idFile, "\n")) {
        if (line.ends_with('\n')) {
            line.remove_suffix(1);
        }
        if (line.ends_with('\r')) {
            line.remove_suffix(1);
        }
        if (!line.starts_with("MCAPI extern class HashedString const ")) {
            continue;
        }
        line.remove_prefix(sizeof("MCAPI extern class HashedString const"));
        if (line.ends_with(';')) {
            line.remove_suffix(1);
        }
        blocks.emplace_back(line);
    }

    std::string path = __FILE__;

    if (!path.starts_with(LL_WORKSPACE_FOLDER)) {
        path = LL_WORKSPACE_FOLDER + path;
    }

    auto file = ll::file_utils::readFile(path);
    if (!file) {
        ll::logger.error("Couldn't open file {}", path);
        return;
    }
    auto& content = *file;

    std::ostringstream oss;

    oss << std::endl;
    oss << std::endl;
    oss << "#define GENERATE_FUNC(FUNC)\\\n";
    for (auto block : blocks) {
        oss << fmt::format("    FUNC({});\\\n", block);
    }
    oss << std::endl;
    ll::string_utils::replaceContent(content, "\n#pragma region StaticVanillaBlocksFn", "#pragma endregion", oss.str());

    if (!ll::file_utils::writeFile(path, content)) {
        ll::logger.error("Couldn't write file {}", path);
    }

    path = path.substr(0, path.size() - 3) + "h";

    file = ll::file_utils::readFile(path);
    if (!file) {
        ll::logger.error("Couldn't open file {}", path);
        return;
    }

    oss.clear();
    oss.str("");

    oss << std::endl;
    oss << std::endl;
    for (auto block : blocks) {
        oss << fmt::format("LLETAPI Block const* m{};\n", block);
    }
    oss << std::endl;
    ll::string_utils::replaceContent(
        content,
        "\n#pragma region StaticVanillaBlocksDeclarations",
        "#pragma endregion",
        oss.str()
    );

    if (!ll::file_utils::writeFile(path, content)) {
        ll::logger.error("Couldn't write file {}", path);
    }
}

LL_AUTO_STATIC_HOOK(GenerateHook, HookPriority::Normal, "main", int, int a, char* c) {
    gen();
    return origin(a, c);
}

#endif // GENERATE_STATIC_VANILLA_BLOCK

#pragma region StaticVanillaBlocksFn

#define GENERATE_FUNC(FUNC)                                                                                            \
    FUNC(AcaciaButton);                                                                                                \
    FUNC(AcaciaDoor);                                                                                                  \
    FUNC(AcaciaFence);                                                                                                 \
    FUNC(AcaciaFenceGate);                                                                                             \
    FUNC(AcaciaHangingSign);                                                                                           \
    FUNC(AcaciaLog);                                                                                                   \
    FUNC(AcaciaPlanks);                                                                                                \
    FUNC(AcaciaPressurePlate);                                                                                         \
    FUNC(AcaciaStairs);                                                                                                \
    FUNC(AcaciaStandingSign);                                                                                          \
    FUNC(AcaciaTrapdoor);                                                                                              \
    FUNC(AcaciaWallSign);                                                                                              \
    FUNC(ActivatorRail);                                                                                               \
    FUNC(Allow);                                                                                                       \
    FUNC(AmethystBlock);                                                                                               \
    FUNC(AmethystCluster);                                                                                             \
    FUNC(AncientDebris);                                                                                               \
    FUNC(Andesite);                                                                                                    \
    FUNC(AndesiteStairs);                                                                                              \
    FUNC(Anvil);                                                                                                       \
    FUNC(Azalea);                                                                                                      \
    FUNC(AzaleaLeaves);                                                                                                \
    FUNC(AzaleaLeavesFlowered);                                                                                        \
    FUNC(Bamboo);                                                                                                      \
    FUNC(BambooBlock);                                                                                                 \
    FUNC(BambooButton);                                                                                                \
    FUNC(BambooDoor);                                                                                                  \
    FUNC(BambooDoubleSlab);                                                                                            \
    FUNC(BambooFence);                                                                                                 \
    FUNC(BambooFenceGate);                                                                                             \
    FUNC(BambooHangingSign);                                                                                           \
    FUNC(BambooMosaic);                                                                                                \
    FUNC(BambooMosaicDoubleSlab);                                                                                      \
    FUNC(BambooMosaicSlab);                                                                                            \
    FUNC(BambooMosaicStairs);                                                                                          \
    FUNC(BambooPlanks);                                                                                                \
    FUNC(BambooPressurePlate);                                                                                         \
    FUNC(BambooSapling);                                                                                               \
    FUNC(BambooSlab);                                                                                                  \
    FUNC(BambooStairs);                                                                                                \
    FUNC(BambooStandingSign);                                                                                          \
    FUNC(BambooTrapdoor);                                                                                              \
    FUNC(BambooWallSign);                                                                                              \
    FUNC(Barrel);                                                                                                      \
    FUNC(Barrier);                                                                                                     \
    FUNC(Basalt);                                                                                                      \
    FUNC(Beacon);                                                                                                      \
    FUNC(Bed);                                                                                                         \
    FUNC(Bedrock);                                                                                                     \
    FUNC(BeeNest);                                                                                                     \
    FUNC(Beehive);                                                                                                     \
    FUNC(Beetroot);                                                                                                    \
    FUNC(Bell);                                                                                                        \
    FUNC(BigDripleaf);                                                                                                 \
    FUNC(BirchButton);                                                                                                 \
    FUNC(BirchDoor);                                                                                                   \
    FUNC(BirchFence);                                                                                                  \
    FUNC(BirchFenceGate);                                                                                              \
    FUNC(BirchHangingSign);                                                                                            \
    FUNC(BirchLog);                                                                                                    \
    FUNC(BirchPlanks);                                                                                                 \
    FUNC(BirchPressurePlate);                                                                                          \
    FUNC(BirchStairs);                                                                                                 \
    FUNC(BirchStandingSign);                                                                                           \
    FUNC(BirchTrapdoor);                                                                                               \
    FUNC(BirchWallSign);                                                                                               \
    FUNC(BlackCandle);                                                                                                 \
    FUNC(BlackCandleCake);                                                                                             \
    FUNC(BlackCarpet);                                                                                                 \
    FUNC(BlackConcrete);                                                                                               \
    FUNC(BlackConcretePowder);                                                                                         \
    FUNC(BlackGlazedTerracotta);                                                                                       \
    FUNC(BlackShulkerBox);                                                                                             \
    FUNC(BlackStainedGlass);                                                                                           \
    FUNC(BlackStainedGlassPane);                                                                                       \
    FUNC(BlackTerracotta);                                                                                             \
    FUNC(BlackWool);                                                                                                   \
    FUNC(Blackstone);                                                                                                  \
    FUNC(BlackstoneDoubleSlab);                                                                                        \
    FUNC(BlackstoneSlab);                                                                                              \
    FUNC(BlackstoneStairs);                                                                                            \
    FUNC(BlackstoneWall);                                                                                              \
    FUNC(BlastFurnace);                                                                                                \
    FUNC(BlueCandle);                                                                                                  \
    FUNC(BlueCandleCake);                                                                                              \
    FUNC(BlueCarpet);                                                                                                  \
    FUNC(BlueConcrete);                                                                                                \
    FUNC(BlueConcretePowder);                                                                                          \
    FUNC(BlueGlazedTerracotta);                                                                                        \
    FUNC(BlueIce);                                                                                                     \
    FUNC(BlueShulkerBox);                                                                                              \
    FUNC(BlueStainedGlass);                                                                                            \
    FUNC(BlueStainedGlassPane);                                                                                        \
    FUNC(BlueTerracotta);                                                                                              \
    FUNC(BlueWool);                                                                                                    \
    FUNC(BoneBlock);                                                                                                   \
    FUNC(Bookshelf);                                                                                                   \
    FUNC(BorderBlock);                                                                                                 \
    FUNC(BrainCoral);                                                                                                  \
    FUNC(BrewingStand);                                                                                                \
    FUNC(BrickBlock);                                                                                                  \
    FUNC(BrickStairs);                                                                                                 \
    FUNC(BrownCandle);                                                                                                 \
    FUNC(BrownCandleCake);                                                                                             \
    FUNC(BrownCarpet);                                                                                                 \
    FUNC(BrownConcrete);                                                                                               \
    FUNC(BrownConcretePowder);                                                                                         \
    FUNC(BrownGlazedTerracotta);                                                                                       \
    FUNC(BrownMushroom);                                                                                               \
    FUNC(BrownMushroomBlock);                                                                                          \
    FUNC(BrownShulkerBox);                                                                                             \
    FUNC(BrownStainedGlass);                                                                                           \
    FUNC(BrownStainedGlassPane);                                                                                       \
    FUNC(BrownTerracotta);                                                                                             \
    FUNC(BrownWool);                                                                                                   \
    FUNC(BubbleColumn);                                                                                                \
    FUNC(BubbleCoral);                                                                                                 \
    FUNC(BuddingAmethyst);                                                                                             \
    FUNC(Cactus);                                                                                                      \
    FUNC(Cake);                                                                                                        \
    FUNC(Calcite);                                                                                                     \
    FUNC(CalibratedSculkSensor);                                                                                       \
    FUNC(Camera);                                                                                                      \
    FUNC(CampFire);                                                                                                    \
    FUNC(Candle);                                                                                                      \
    FUNC(CandleCake);                                                                                                  \
    FUNC(Carrots);                                                                                                     \
    FUNC(CartographyTable);                                                                                            \
    FUNC(CarvedPumpkin);                                                                                               \
    FUNC(Cauldron);                                                                                                    \
    FUNC(CaveVines);                                                                                                   \
    FUNC(CaveVinesBodyWithBerries);                                                                                    \
    FUNC(CaveVinesHeadWithBerries);                                                                                    \
    FUNC(Chain);                                                                                                       \
    FUNC(ChainCommandBlock);                                                                                           \
    FUNC(Chalkboard);                                                                                                  \
    FUNC(ChemicalHeat);                                                                                                \
    FUNC(ChemistryTable);                                                                                              \
    FUNC(CherryButton);                                                                                                \
    FUNC(CherryDoor);                                                                                                  \
    FUNC(CherryDoubleSlab);                                                                                            \
    FUNC(CherryFence);                                                                                                 \
    FUNC(CherryFenceGate);                                                                                             \
    FUNC(CherryHangingSign);                                                                                           \
    FUNC(CherryLeaves);                                                                                                \
    FUNC(CherryLog);                                                                                                   \
    FUNC(CherryPlanks);                                                                                                \
    FUNC(CherryPressurePlate);                                                                                         \
    FUNC(CherrySapling);                                                                                               \
    FUNC(CherrySlab);                                                                                                  \
    FUNC(CherryStairs);                                                                                                \
    FUNC(CherryStandingSign);                                                                                          \
    FUNC(CherryTrapdoor);                                                                                              \
    FUNC(CherryWallSign);                                                                                              \
    FUNC(CherryWood);                                                                                                  \
    FUNC(Chest);                                                                                                       \
    FUNC(ChiseledBookshelf);                                                                                           \
    FUNC(ChiseledCopper);                                                                                              \
    FUNC(ChiseledDeepslate);                                                                                           \
    FUNC(ChiseledNetherBricks);                                                                                        \
    FUNC(ChiseledPolishedBlackstone);                                                                                  \
    FUNC(ChiseledTuff);                                                                                                \
    FUNC(ChiseledTuffBricks);                                                                                          \
    FUNC(ChorusFlower);                                                                                                \
    FUNC(ChorusPlant);                                                                                                 \
    FUNC(Clay);                                                                                                        \
    FUNC(ClientRequestPlaceholderBlock);                                                                               \
    FUNC(CoalBlock);                                                                                                   \
    FUNC(CoalOre);                                                                                                     \
    FUNC(CobbledDeepslate);                                                                                            \
    FUNC(CobbledDeepslateDoubleSlab);                                                                                  \
    FUNC(CobbledDeepslateSlab);                                                                                        \
    FUNC(CobbledDeepslateStairs);                                                                                      \
    FUNC(CobbledDeepslateWall);                                                                                        \
    FUNC(Cobblestone);                                                                                                 \
    FUNC(CobblestoneWall);                                                                                             \
    FUNC(Cocoa);                                                                                                       \
    FUNC(ColoredTorchBp);                                                                                              \
    FUNC(ColoredTorchRg);                                                                                              \
    FUNC(CommandBlock);                                                                                                \
    FUNC(Composter);                                                                                                   \
    FUNC(Conduit);                                                                                                     \
    FUNC(CopperBlock);                                                                                                 \
    FUNC(CopperBulb);                                                                                                  \
    FUNC(CopperDoor);                                                                                                  \
    FUNC(CopperGrate);                                                                                                 \
    FUNC(CopperOre);                                                                                                   \
    FUNC(CopperTrapdoor);                                                                                              \
    FUNC(CoralBlock);                                                                                                  \
    FUNC(CoralFan);                                                                                                    \
    FUNC(CoralFanDead);                                                                                                \
    FUNC(CoralFanHang);                                                                                                \
    FUNC(CoralFanHang2);                                                                                               \
    FUNC(CoralFanHang3);                                                                                               \
    FUNC(CrackedDeepslateBricks);                                                                                      \
    FUNC(CrackedDeepslateTiles);                                                                                       \
    FUNC(CrackedNetherBricks);                                                                                         \
    FUNC(CrackedPolishedBlackstoneBricks);                                                                             \
    FUNC(Crafter);                                                                                                     \
    FUNC(CraftingTable);                                                                                               \
    FUNC(CrimsonButton);                                                                                               \
    FUNC(CrimsonDoor);                                                                                                 \
    FUNC(CrimsonDoubleSlab);                                                                                           \
    FUNC(CrimsonFence);                                                                                                \
    FUNC(CrimsonFenceGate);                                                                                            \
    FUNC(CrimsonFungus);                                                                                               \
    FUNC(CrimsonHangingSign);                                                                                          \
    FUNC(CrimsonHyphae);                                                                                               \
    FUNC(CrimsonNylium);                                                                                               \
    FUNC(CrimsonPlanks);                                                                                               \
    FUNC(CrimsonPressurePlate);                                                                                        \
    FUNC(CrimsonRoots);                                                                                                \
    FUNC(CrimsonSlab);                                                                                                 \
    FUNC(CrimsonStairs);                                                                                               \
    FUNC(CrimsonStandingSign);                                                                                         \
    FUNC(CrimsonStem);                                                                                                 \
    FUNC(CrimsonTrapdoor);                                                                                             \
    FUNC(CrimsonWallSign);                                                                                             \
    FUNC(CryingObsidian);                                                                                              \
    FUNC(CutCopper);                                                                                                   \
    FUNC(CutCopperSlab);                                                                                               \
    FUNC(CutCopperStairs);                                                                                             \
    FUNC(CyanCandle);                                                                                                  \
    FUNC(CyanCandleCake);                                                                                              \
    FUNC(CyanCarpet);                                                                                                  \
    FUNC(CyanConcrete);                                                                                                \
    FUNC(CyanConcretePowder);                                                                                          \
    FUNC(CyanGlazedTerracotta);                                                                                        \
    FUNC(CyanShulkerBox);                                                                                              \
    FUNC(CyanStainedGlass);                                                                                            \
    FUNC(CyanStainedGlassPane);                                                                                        \
    FUNC(CyanTerracotta);                                                                                              \
    FUNC(CyanWool);                                                                                                    \
    FUNC(DarkOakButton);                                                                                               \
    FUNC(DarkOakDoor);                                                                                                 \
    FUNC(DarkOakFence);                                                                                                \
    FUNC(DarkOakFenceGate);                                                                                            \
    FUNC(DarkOakLog);                                                                                                  \
    FUNC(DarkOakPlanks);                                                                                               \
    FUNC(DarkOakPressurePlate);                                                                                        \
    FUNC(DarkOakStairs);                                                                                               \
    FUNC(DarkOakTrapdoor);                                                                                             \
    FUNC(DarkPrismarineStairs);                                                                                        \
    FUNC(DarkoakHangingSign);                                                                                          \
    FUNC(DarkoakStandingSign);                                                                                         \
    FUNC(DarkoakWallSign);                                                                                             \
    FUNC(DaylightDetector);                                                                                            \
    FUNC(DaylightDetectorInverted);                                                                                    \
    FUNC(DeadBrainCoral);                                                                                              \
    FUNC(DeadBubbleCoral);                                                                                             \
    FUNC(DeadFireCoral);                                                                                               \
    FUNC(DeadHornCoral);                                                                                               \
    FUNC(DeadTubeCoral);                                                                                               \
    FUNC(Deadbush);                                                                                                    \
    FUNC(DecoratedPot);                                                                                                \
    FUNC(Deepslate);                                                                                                   \
    FUNC(DeepslateBrickDoubleSlab);                                                                                    \
    FUNC(DeepslateBrickSlab);                                                                                          \
    FUNC(DeepslateBrickStairs);                                                                                        \
    FUNC(DeepslateBrickWall);                                                                                          \
    FUNC(DeepslateBricks);                                                                                             \
    FUNC(DeepslateCoalOre);                                                                                            \
    FUNC(DeepslateCopperOre);                                                                                          \
    FUNC(DeepslateDiamondOre);                                                                                         \
    FUNC(DeepslateEmeraldOre);                                                                                         \
    FUNC(DeepslateGoldOre);                                                                                            \
    FUNC(DeepslateIronOre);                                                                                            \
    FUNC(DeepslateLapisOre);                                                                                           \
    FUNC(DeepslateRedstoneOre);                                                                                        \
    FUNC(DeepslateTileDoubleSlab);                                                                                     \
    FUNC(DeepslateTileSlab);                                                                                           \
    FUNC(DeepslateTileStairs);                                                                                         \
    FUNC(DeepslateTileWall);                                                                                           \
    FUNC(DeepslateTiles);                                                                                              \
    FUNC(Deny);                                                                                                        \
    FUNC(DetectorRail);                                                                                                \
    FUNC(DiamondBlock);                                                                                                \
    FUNC(DiamondOre);                                                                                                  \
    FUNC(Diorite);                                                                                                     \
    FUNC(DioriteStairs);                                                                                               \
    FUNC(Dirt);                                                                                                        \
    FUNC(DirtWithRoots);                                                                                               \
    FUNC(Dispenser);                                                                                                   \
    FUNC(DoubleCutCopperSlab);                                                                                         \
    FUNC(DoublePlant);                                                                                                 \
    FUNC(DoubleStoneSlab);                                                                                             \
    FUNC(DoubleStoneSlab2);                                                                                            \
    FUNC(DoubleStoneSlab3);                                                                                            \
    FUNC(DoubleStoneSlab4);                                                                                            \
    FUNC(DoubleWoodenSlab);                                                                                            \
    FUNC(DragonEgg);                                                                                                   \
    FUNC(DriedKelpBlock);                                                                                              \
    FUNC(Dripstone);                                                                                                   \
    FUNC(Dropper);                                                                                                     \
    FUNC(EmeraldBlock);                                                                                                \
    FUNC(EmeraldOre);                                                                                                  \
    FUNC(EnchantingTable);                                                                                             \
    FUNC(EndBrickStairs);                                                                                              \
    FUNC(EndBricks);                                                                                                   \
    FUNC(EndGateway);                                                                                                  \
    FUNC(EndPortal);                                                                                                   \
    FUNC(EndPortalFrame);                                                                                              \
    FUNC(EndRod);                                                                                                      \
    FUNC(EndStone);                                                                                                    \
    FUNC(EnderChest);                                                                                                  \
    FUNC(ExposedChiseledCopper);                                                                                       \
    FUNC(ExposedCopper);                                                                                               \
    FUNC(ExposedCopperBulb);                                                                                           \
    FUNC(ExposedCopperDoor);                                                                                           \
    FUNC(ExposedCopperGrate);                                                                                          \
    FUNC(ExposedCopperTrapdoor);                                                                                       \
    FUNC(ExposedCutCopper);                                                                                            \
    FUNC(ExposedCutCopperSlab);                                                                                        \
    FUNC(ExposedCutCopperStairs);                                                                                      \
    FUNC(ExposedDoubleCutCopperSlab);                                                                                  \
    FUNC(FarmlandBlock);                                                                                               \
    FUNC(FenceGate);                                                                                                   \
    FUNC(Fire);                                                                                                        \
    FUNC(FireCoral);                                                                                                   \
    FUNC(FletchingTable);                                                                                              \
    FUNC(FlowerPot);                                                                                                   \
    FUNC(FloweringAzalea);                                                                                             \
    FUNC(FlowingLava);                                                                                                 \
    FUNC(FlowingWater);                                                                                                \
    FUNC(FrogSpawn);                                                                                                   \
    FUNC(FrostedIce);                                                                                                  \
    FUNC(Furnace);                                                                                                     \
    FUNC(GildedBlackstone);                                                                                            \
    FUNC(Glass);                                                                                                       \
    FUNC(GlassPane);                                                                                                   \
    FUNC(GlowItemFrame);                                                                                               \
    FUNC(GlowLichen);                                                                                                  \
    FUNC(GlowingObsidian);                                                                                             \
    FUNC(Glowstone);                                                                                                   \
    FUNC(GoldBlock);                                                                                                   \
    FUNC(GoldOre);                                                                                                     \
    FUNC(GoldenRail);                                                                                                  \
    FUNC(Granite);                                                                                                     \
    FUNC(GraniteStairs);                                                                                               \
    FUNC(Grass);                                                                                                       \
    FUNC(GrassPath);                                                                                                   \
    FUNC(Gravel);                                                                                                      \
    FUNC(GrayCandle);                                                                                                  \
    FUNC(GrayCandleCake);                                                                                              \
    FUNC(GrayCarpet);                                                                                                  \
    FUNC(GrayConcrete);                                                                                                \
    FUNC(GrayConcretePowder);                                                                                          \
    FUNC(GrayGlazedTerracotta);                                                                                        \
    FUNC(GrayShulkerBox);                                                                                              \
    FUNC(GrayStainedGlass);                                                                                            \
    FUNC(GrayStainedGlassPane);                                                                                        \
    FUNC(GrayTerracotta);                                                                                              \
    FUNC(GrayWool);                                                                                                    \
    FUNC(GreenCandle);                                                                                                 \
    FUNC(GreenCandleCake);                                                                                             \
    FUNC(GreenCarpet);                                                                                                 \
    FUNC(GreenConcrete);                                                                                               \
    FUNC(GreenConcretePowder);                                                                                         \
    FUNC(GreenGlazedTerracotta);                                                                                       \
    FUNC(GreenShulkerBox);                                                                                             \
    FUNC(GreenStainedGlass);                                                                                           \
    FUNC(GreenStainedGlassPane);                                                                                       \
    FUNC(GreenTerracotta);                                                                                             \
    FUNC(GreenWool);                                                                                                   \
    FUNC(Grindstone);                                                                                                  \
    FUNC(HangingRoots);                                                                                                \
    FUNC(HardGlass);                                                                                                   \
    FUNC(HardGlassPane);                                                                                               \
    FUNC(HardStainedGlass);                                                                                            \
    FUNC(HardStainedGlassPane);                                                                                        \
    FUNC(HardenedClay);                                                                                                \
    FUNC(HayBlock);                                                                                                    \
    FUNC(HeavyWeightedPressurePlate);                                                                                  \
    FUNC(HoneyBlock);                                                                                                  \
    FUNC(HoneycombBlock);                                                                                              \
    FUNC(Hopper);                                                                                                      \
    FUNC(HornCoral);                                                                                                   \
    FUNC(Ice);                                                                                                         \
    FUNC(InfestedDeepslate);                                                                                           \
    FUNC(InfoUpdate);                                                                                                  \
    FUNC(InfoUpdate2);                                                                                                 \
    FUNC(InvisibleBedrock);                                                                                            \
    FUNC(IronBars);                                                                                                    \
    FUNC(IronBlock);                                                                                                   \
    FUNC(IronDoor);                                                                                                    \
    FUNC(IronOre);                                                                                                     \
    FUNC(IronTrapdoor);                                                                                                \
    FUNC(ItemFrame);                                                                                                   \
    FUNC(Jigsaw);                                                                                                      \
    FUNC(Jukebox);                                                                                                     \
    FUNC(JungleButton);                                                                                                \
    FUNC(JungleDoor);                                                                                                  \
    FUNC(JungleFence);                                                                                                 \
    FUNC(JungleFenceGate);                                                                                             \
    FUNC(JungleHangingSign);                                                                                           \
    FUNC(JungleLog);                                                                                                   \
    FUNC(JunglePlanks);                                                                                                \
    FUNC(JunglePressurePlate);                                                                                         \
    FUNC(JungleStairs);                                                                                                \
    FUNC(JungleStandingSign);                                                                                          \
    FUNC(JungleTrapdoor);                                                                                              \
    FUNC(JungleWallSign);                                                                                              \
    FUNC(Kelp);                                                                                                        \
    FUNC(Ladder);                                                                                                      \
    FUNC(Lantern);                                                                                                     \
    FUNC(LapisBlock);                                                                                                  \
    FUNC(LapisOre);                                                                                                    \
    FUNC(LargeAmethystBud);                                                                                            \
    FUNC(Lava);                                                                                                        \
    FUNC(Leaves);                                                                                                      \
    FUNC(Leaves2);                                                                                                     \
    FUNC(Lectern);                                                                                                     \
    FUNC(Lever);                                                                                                       \
    FUNC(LightBlock);                                                                                                  \
    FUNC(LightBlueCandle);                                                                                             \
    FUNC(LightBlueCandleCake);                                                                                         \
    FUNC(LightBlueCarpet);                                                                                             \
    FUNC(LightBlueConcrete);                                                                                           \
    FUNC(LightBlueConcretePowder);                                                                                     \
    FUNC(LightBlueGlazedTerracotta);                                                                                   \
    FUNC(LightBlueShulkerBox);                                                                                         \
    FUNC(LightBlueStainedGlass);                                                                                       \
    FUNC(LightBlueStainedGlassPane);                                                                                   \
    FUNC(LightBlueTerracotta);                                                                                         \
    FUNC(LightBlueWool);                                                                                               \
    FUNC(LightGrayCandle);                                                                                             \
    FUNC(LightGrayCandleCake);                                                                                         \
    FUNC(LightGrayCarpet);                                                                                             \
    FUNC(LightGrayConcrete);                                                                                           \
    FUNC(LightGrayConcretePowder);                                                                                     \
    FUNC(LightGrayShulkerBox);                                                                                         \
    FUNC(LightGrayStainedGlass);                                                                                       \
    FUNC(LightGrayStainedGlassPane);                                                                                   \
    FUNC(LightGrayTerracotta);                                                                                         \
    FUNC(LightGrayWool);                                                                                               \
    FUNC(LightWeightedPressurePlate);                                                                                  \
    FUNC(LightningRod);                                                                                                \
    FUNC(LimeCandle);                                                                                                  \
    FUNC(LimeCandleCake);                                                                                              \
    FUNC(LimeCarpet);                                                                                                  \
    FUNC(LimeConcrete);                                                                                                \
    FUNC(LimeConcretePowder);                                                                                          \
    FUNC(LimeGlazedTerracotta);                                                                                        \
    FUNC(LimeShulkerBox);                                                                                              \
    FUNC(LimeStainedGlass);                                                                                            \
    FUNC(LimeStainedGlassPane);                                                                                        \
    FUNC(LimeTerracotta);                                                                                              \
    FUNC(LimeWool);                                                                                                    \
    FUNC(LitBlastFurnace);                                                                                             \
    FUNC(LitDeepslateRedstoneOre);                                                                                     \
    FUNC(LitFurnace);                                                                                                  \
    FUNC(LitPumpkin);                                                                                                  \
    FUNC(LitRedstoneLamp);                                                                                             \
    FUNC(LitRedstoneOre);                                                                                              \
    FUNC(LitSmoker);                                                                                                   \
    FUNC(Lodestone);                                                                                                   \
    FUNC(Loom);                                                                                                        \
    FUNC(MagentaCandle);                                                                                               \
    FUNC(MagentaCandleCake);                                                                                           \
    FUNC(MagentaCarpet);                                                                                               \
    FUNC(MagentaConcrete);                                                                                             \
    FUNC(MagentaConcretePowder);                                                                                       \
    FUNC(MagentaGlazedTerracotta);                                                                                     \
    FUNC(MagentaShulkerBox);                                                                                           \
    FUNC(MagentaStainedGlass);                                                                                         \
    FUNC(MagentaStainedGlassPane);                                                                                     \
    FUNC(MagentaTerracotta);                                                                                           \
    FUNC(MagentaWool);                                                                                                 \
    FUNC(Magma);                                                                                                       \
    FUNC(MangroveButton);                                                                                              \
    FUNC(MangroveDoor);                                                                                                \
    FUNC(MangroveDoubleSlab);                                                                                          \
    FUNC(MangroveFence);                                                                                               \
    FUNC(MangroveFenceGate);                                                                                           \
    FUNC(MangroveHangingSign);                                                                                         \
    FUNC(MangroveLeaves);                                                                                              \
    FUNC(MangroveLog);                                                                                                 \
    FUNC(MangrovePlanks);                                                                                              \
    FUNC(MangrovePressurePlate);                                                                                       \
    FUNC(MangrovePropagule);                                                                                           \
    FUNC(MangroveRoots);                                                                                               \
    FUNC(MangroveSlab);                                                                                                \
    FUNC(MangroveStairs);                                                                                              \
    FUNC(MangroveStandingSign);                                                                                        \
    FUNC(MangroveTrapdoor);                                                                                            \
    FUNC(MangroveWallSign);                                                                                            \
    FUNC(MangroveWood);                                                                                                \
    FUNC(MediumAmethystBud);                                                                                           \
    FUNC(MelonBlock);                                                                                                  \
    FUNC(MelonStem);                                                                                                   \
    FUNC(MobSpawner);                                                                                                  \
    FUNC(MonsterEgg);                                                                                                  \
    FUNC(MossBlock);                                                                                                   \
    FUNC(MossCarpet);                                                                                                  \
    FUNC(MossyCobblestone);                                                                                            \
    FUNC(MossyCobblestoneStairs);                                                                                      \
    FUNC(MossyStoneBrickStairs);                                                                                       \
    FUNC(MovingBlock);                                                                                                 \
    FUNC(Mud);                                                                                                         \
    FUNC(MudBrickDoubleSlab);                                                                                          \
    FUNC(MudBrickSlab);                                                                                                \
    FUNC(MudBrickStairs);                                                                                              \
    FUNC(MudBrickWall);                                                                                                \
    FUNC(MudBricks);                                                                                                   \
    FUNC(MuddyMangroveRoots);                                                                                          \
    FUNC(Mycelium);                                                                                                    \
    FUNC(MysteriousFrame);                                                                                             \
    FUNC(MysteriousFrameSlot);                                                                                         \
    FUNC(NetherBrickBlockName);                                                                                        \
    FUNC(NetherBrickFence);                                                                                            \
    FUNC(NetherBrickStairs);                                                                                           \
    FUNC(NetherGoldOre);                                                                                               \
    FUNC(NetherSprouts);                                                                                               \
    FUNC(NetherWart);                                                                                                  \
    FUNC(NetherWartBlock);                                                                                             \
    FUNC(NetheriteBlock);                                                                                              \
    FUNC(Netherrack);                                                                                                  \
    FUNC(Netherreactor);                                                                                               \
    FUNC(NormalStoneStairs);                                                                                           \
    FUNC(Noteblock);                                                                                                   \
    FUNC(OakFence);                                                                                                    \
    FUNC(OakHangingSign);                                                                                              \
    FUNC(OakLog);                                                                                                      \
    FUNC(OakPlanks);                                                                                                   \
    FUNC(OakStairs);                                                                                                   \
    FUNC(Observer);                                                                                                    \
    FUNC(Obsidian);                                                                                                    \
    FUNC(OchreFroglight);                                                                                              \
    FUNC(OrangeCandle);                                                                                                \
    FUNC(OrangeCandleCake);                                                                                            \
    FUNC(OrangeCarpet);                                                                                                \
    FUNC(OrangeConcrete);                                                                                              \
    FUNC(OrangeConcretePowder);                                                                                        \
    FUNC(OrangeGlazedTerracotta);                                                                                      \
    FUNC(OrangeShulkerBox);                                                                                            \
    FUNC(OrangeStainedGlass);                                                                                          \
    FUNC(OrangeStainedGlassPane);                                                                                      \
    FUNC(OrangeTerracotta);                                                                                            \
    FUNC(OrangeWool);                                                                                                  \
    FUNC(OxidizedChiseledCopper);                                                                                      \
    FUNC(OxidizedCopper);                                                                                              \
    FUNC(OxidizedCopperBulb);                                                                                          \
    FUNC(OxidizedCopperDoor);                                                                                          \
    FUNC(OxidizedCopperGrate);                                                                                         \
    FUNC(OxidizedCopperTrapdoor);                                                                                      \
    FUNC(OxidizedCutCopper);                                                                                           \
    FUNC(OxidizedCutCopperSlab);                                                                                       \
    FUNC(OxidizedCutCopperStairs);                                                                                     \
    FUNC(OxidizedDoubleCutCopperSlab);                                                                                 \
    FUNC(PackedIce);                                                                                                   \
    FUNC(PackedMud);                                                                                                   \
    FUNC(PearlescentFroglight);                                                                                        \
    FUNC(PinkCandle);                                                                                                  \
    FUNC(PinkCandleCake);                                                                                              \
    FUNC(PinkCarpet);                                                                                                  \
    FUNC(PinkConcrete);                                                                                                \
    FUNC(PinkConcretePowder);                                                                                          \
    FUNC(PinkGlazedTerracotta);                                                                                        \
    FUNC(PinkPetals);                                                                                                  \
    FUNC(PinkShulkerBox);                                                                                              \
    FUNC(PinkStainedGlass);                                                                                            \
    FUNC(PinkStainedGlassPane);                                                                                        \
    FUNC(PinkTerracotta);                                                                                              \
    FUNC(PinkWool);                                                                                                    \
    FUNC(Piston);                                                                                                      \
    FUNC(PistonArmCollision);                                                                                          \
    FUNC(PitcherCrop);                                                                                                 \
    FUNC(PitcherPlant);                                                                                                \
    FUNC(Podzol);                                                                                                      \
    FUNC(PointedDripstone);                                                                                            \
    FUNC(PolishedAndesite);                                                                                            \
    FUNC(PolishedAndesiteStairs);                                                                                      \
    FUNC(PolishedBasalt);                                                                                              \
    FUNC(PolishedBlackstone);                                                                                          \
    FUNC(PolishedBlackstoneBrickDoubleSlab);                                                                           \
    FUNC(PolishedBlackstoneBrickSlab);                                                                                 \
    FUNC(PolishedBlackstoneBrickStairs);                                                                               \
    FUNC(PolishedBlackstoneBrickWall);                                                                                 \
    FUNC(PolishedBlackstoneBricks);                                                                                    \
    FUNC(PolishedBlackstoneButton);                                                                                    \
    FUNC(PolishedBlackstoneDoubleSlab);                                                                                \
    FUNC(PolishedBlackstonePressurePlate);                                                                             \
    FUNC(PolishedBlackstoneSlab);                                                                                      \
    FUNC(PolishedBlackstoneStairs);                                                                                    \
    FUNC(PolishedBlackstoneWall);                                                                                      \
    FUNC(PolishedDeepslate);                                                                                           \
    FUNC(PolishedDeepslateDoubleSlab);                                                                                 \
    FUNC(PolishedDeepslateSlab);                                                                                       \
    FUNC(PolishedDeepslateStairs);                                                                                     \
    FUNC(PolishedDeepslateWall);                                                                                       \
    FUNC(PolishedDiorite);                                                                                             \
    FUNC(PolishedDioriteStairs);                                                                                       \
    FUNC(PolishedGranite);                                                                                             \
    FUNC(PolishedGraniteStairs);                                                                                       \
    FUNC(PolishedTuff);                                                                                                \
    FUNC(PolishedTuffDoubleSlab);                                                                                      \
    FUNC(PolishedTuffSlab);                                                                                            \
    FUNC(PolishedTuffStairs);                                                                                          \
    FUNC(PolishedTuffWall);                                                                                            \
    FUNC(Portal);                                                                                                      \
    FUNC(Potatoes);                                                                                                    \
    FUNC(PowderSnow);                                                                                                  \
    FUNC(PoweredComparator);                                                                                           \
    FUNC(PoweredRepeater);                                                                                             \
    FUNC(Prismarine);                                                                                                  \
    FUNC(PrismarineBricksStairs);                                                                                      \
    FUNC(PrismarineStairs);                                                                                            \
    FUNC(Pumpkin);                                                                                                     \
    FUNC(PumpkinStem);                                                                                                 \
    FUNC(PurpleCandle);                                                                                                \
    FUNC(PurpleCandleCake);                                                                                            \
    FUNC(PurpleCarpet);                                                                                                \
    FUNC(PurpleConcrete);                                                                                              \
    FUNC(PurpleConcretePowder);                                                                                        \
    FUNC(PurpleGlazedTerracotta);                                                                                      \
    FUNC(PurpleShulkerBox);                                                                                            \
    FUNC(PurpleStainedGlass);                                                                                          \
    FUNC(PurpleStainedGlassPane);                                                                                      \
    FUNC(PurpleTerracotta);                                                                                            \
    FUNC(PurpleWool);                                                                                                  \
    FUNC(PurpurBlock);                                                                                                 \
    FUNC(PurpurStairs);                                                                                                \
    FUNC(QuartzBlock);                                                                                                 \
    FUNC(QuartzBricks);                                                                                                \
    FUNC(QuartzOre);                                                                                                   \
    FUNC(QuartzStairs);                                                                                                \
    FUNC(Rail);                                                                                                        \
    FUNC(RawCopperBlock);                                                                                              \
    FUNC(RawGoldBlock);                                                                                                \
    FUNC(RawIronBlock);                                                                                                \
    FUNC(RedCandle);                                                                                                   \
    FUNC(RedCandleCake);                                                                                               \
    FUNC(RedCarpet);                                                                                                   \
    FUNC(RedConcrete);                                                                                                 \
    FUNC(RedConcretePowder);                                                                                           \
    FUNC(RedFlower);                                                                                                   \
    FUNC(RedGlazedTerracotta);                                                                                         \
    FUNC(RedMushroom);                                                                                                 \
    FUNC(RedMushroomBlock);                                                                                            \
    FUNC(RedNetherBrick);                                                                                              \
    FUNC(RedNetherBrickStairs);                                                                                        \
    FUNC(RedSandstone);                                                                                                \
    FUNC(RedSandstoneStairs);                                                                                          \
    FUNC(RedShulkerBox);                                                                                               \
    FUNC(RedStainedGlass);                                                                                             \
    FUNC(RedStainedGlassPane);                                                                                         \
    FUNC(RedTerracotta);                                                                                               \
    FUNC(RedWool);                                                                                                     \
    FUNC(RedstoneBlock);                                                                                               \
    FUNC(RedstoneLamp);                                                                                                \
    FUNC(RedstoneOre);                                                                                                 \
    FUNC(RedstoneTorch);                                                                                               \
    FUNC(RedstoneWire);                                                                                                \
    FUNC(Reeds);                                                                                                       \
    FUNC(ReinforcedDeepslate);                                                                                         \
    FUNC(RepeatingCommandBlock);                                                                                       \
    FUNC(Reserved6);                                                                                                   \
    FUNC(RespawnAnchor);                                                                                               \
    FUNC(Sand);                                                                                                        \
    FUNC(Sandstone);                                                                                                   \
    FUNC(SandstoneStairs);                                                                                             \
    FUNC(Sapling);                                                                                                     \
    FUNC(Scaffolding);                                                                                                 \
    FUNC(Sculk);                                                                                                       \
    FUNC(SculkCatalyst);                                                                                               \
    FUNC(SculkSensor);                                                                                                 \
    FUNC(SculkShrieker);                                                                                               \
    FUNC(SculkVein);                                                                                                   \
    FUNC(SeaLantern);                                                                                                  \
    FUNC(SeaPickle);                                                                                                   \
    FUNC(Seagrass);                                                                                                    \
    FUNC(Shroomlight);                                                                                                 \
    FUNC(SilverGlazedTerracotta);                                                                                      \
    FUNC(Skull);                                                                                                       \
    FUNC(SlimeBlock);                                                                                                  \
    FUNC(SmallAmethystBud);                                                                                            \
    FUNC(SmallDripleaf);                                                                                               \
    FUNC(SmithingTable);                                                                                               \
    FUNC(Smoker);                                                                                                      \
    FUNC(SmoothBasalt);                                                                                                \
    FUNC(SmoothQuartzStairs);                                                                                          \
    FUNC(SmoothRedSandstoneStairs);                                                                                    \
    FUNC(SmoothSandstoneStairs);                                                                                       \
    FUNC(SmoothStone);                                                                                                 \
    FUNC(SnifferEgg);                                                                                                  \
    FUNC(Snow);                                                                                                        \
    FUNC(SnowLayer);                                                                                                   \
    FUNC(SoulCampfire);                                                                                                \
    FUNC(SoulFire);                                                                                                    \
    FUNC(SoulLantern);                                                                                                 \
    FUNC(SoulSand);                                                                                                    \
    FUNC(SoulSoil);                                                                                                    \
    FUNC(SoulTorch);                                                                                                   \
    FUNC(Sponge);                                                                                                      \
    FUNC(SporeBlossom);                                                                                                \
    FUNC(SpruceButton);                                                                                                \
    FUNC(SpruceDoor);                                                                                                  \
    FUNC(SpruceFence);                                                                                                 \
    FUNC(SpruceFenceGate);                                                                                             \
    FUNC(SpruceHangingSign);                                                                                           \
    FUNC(SpruceLog);                                                                                                   \
    FUNC(SprucePlanks);                                                                                                \
    FUNC(SprucePressurePlate);                                                                                         \
    FUNC(SpruceStairs);                                                                                                \
    FUNC(SpruceStandingSign);                                                                                          \
    FUNC(SpruceTrapdoor);                                                                                              \
    FUNC(SpruceWallSign);                                                                                              \
    FUNC(StandingBanner);                                                                                              \
    FUNC(StandingSign);                                                                                                \
    FUNC(StickyPiston);                                                                                                \
    FUNC(StickyPistonArmCollision);                                                                                    \
    FUNC(Stone);                                                                                                       \
    FUNC(StoneBrickStairs);                                                                                            \
    FUNC(StoneBricks);                                                                                                 \
    FUNC(StoneButton);                                                                                                 \
    FUNC(StonePressurePlate);                                                                                          \
    FUNC(StoneSlab);                                                                                                   \
    FUNC(StoneSlab2);                                                                                                  \
    FUNC(StoneSlab3);                                                                                                  \
    FUNC(StoneSlab4);                                                                                                  \
    FUNC(StoneStairs);                                                                                                 \
    FUNC(Stonecutter);                                                                                                 \
    FUNC(StonecutterBlock);                                                                                            \
    FUNC(StrippedAcaciaLog);                                                                                           \
    FUNC(StrippedBambooBlock);                                                                                         \
    FUNC(StrippedBirchLog);                                                                                            \
    FUNC(StrippedCherryLog);                                                                                           \
    FUNC(StrippedCherryWood);                                                                                          \
    FUNC(StrippedCrimsonHyphae);                                                                                       \
    FUNC(StrippedCrimsonStem);                                                                                         \
    FUNC(StrippedDarkOakLog);                                                                                          \
    FUNC(StrippedJungleLog);                                                                                           \
    FUNC(StrippedMangroveLog);                                                                                         \
    FUNC(StrippedMangroveWood);                                                                                        \
    FUNC(StrippedOakLog);                                                                                              \
    FUNC(StrippedSpruceLog);                                                                                           \
    FUNC(StrippedWarpedHyphae);                                                                                        \
    FUNC(StrippedWarpedStem);                                                                                          \
    FUNC(StructureBlock);                                                                                              \
    FUNC(StructureVoid);                                                                                               \
    FUNC(SuspiciousGravel);                                                                                            \
    FUNC(SuspiciousSand);                                                                                              \
    FUNC(SweetBerryBush);                                                                                              \
    FUNC(TallGrass);                                                                                                   \
    FUNC(Target);                                                                                                      \
    FUNC(TintedGlass);                                                                                                 \
    FUNC(Tnt);                                                                                                         \
    FUNC(Torch);                                                                                                       \
    FUNC(Torchflower);                                                                                                 \
    FUNC(TorchflowerCrop);                                                                                             \
    FUNC(Trapdoor);                                                                                                    \
    FUNC(TrappedChest);                                                                                                \
    FUNC(TripWire);                                                                                                    \
    FUNC(TripWireHook);                                                                                                \
    FUNC(TubeCoral);                                                                                                   \
    FUNC(Tuff);                                                                                                        \
    FUNC(TuffBrickDoubleSlab);                                                                                         \
    FUNC(TuffBrickSlab);                                                                                               \
    FUNC(TuffBrickStairs);                                                                                             \
    FUNC(TuffBrickWall);                                                                                               \
    FUNC(TuffBricks);                                                                                                  \
    FUNC(TuffDoubleSlab);                                                                                              \
    FUNC(TuffSlab);                                                                                                    \
    FUNC(TuffStairs);                                                                                                  \
    FUNC(TuffWall);                                                                                                    \
    FUNC(TurtleEgg);                                                                                                   \
    FUNC(TwistingVines);                                                                                               \
    FUNC(UnderwaterTorch);                                                                                             \
    FUNC(UndyedShulkerBox);                                                                                            \
    FUNC(UnlitRedstoneTorch);                                                                                          \
    FUNC(UnpoweredComparator);                                                                                         \
    FUNC(UnpoweredRepeater);                                                                                           \
    FUNC(VerdantFroglight);                                                                                            \
    FUNC(Vine);                                                                                                        \
    FUNC(WallBanner);                                                                                                  \
    FUNC(WallSign);                                                                                                    \
    FUNC(WarpedButton);                                                                                                \
    FUNC(WarpedDoor);                                                                                                  \
    FUNC(WarpedDoubleSlab);                                                                                            \
    FUNC(WarpedFence);                                                                                                 \
    FUNC(WarpedFenceGate);                                                                                             \
    FUNC(WarpedFungus);                                                                                                \
    FUNC(WarpedHangingSign);                                                                                           \
    FUNC(WarpedHyphae);                                                                                                \
    FUNC(WarpedNylium);                                                                                                \
    FUNC(WarpedPlanks);                                                                                                \
    FUNC(WarpedPressurePlate);                                                                                         \
    FUNC(WarpedRoots);                                                                                                 \
    FUNC(WarpedSlab);                                                                                                  \
    FUNC(WarpedStairs);                                                                                                \
    FUNC(WarpedStandingSign);                                                                                          \
    FUNC(WarpedStem);                                                                                                  \
    FUNC(WarpedTrapdoor);                                                                                              \
    FUNC(WarpedWallSign);                                                                                              \
    FUNC(WarpedWartBlock);                                                                                             \
    FUNC(Water);                                                                                                       \
    FUNC(WaterLily);                                                                                                   \
    FUNC(WaxedChiseledCopper);                                                                                         \
    FUNC(WaxedCopper);                                                                                                 \
    FUNC(WaxedCopperBulb);                                                                                             \
    FUNC(WaxedCopperDoor);                                                                                             \
    FUNC(WaxedCopperGrate);                                                                                            \
    FUNC(WaxedCopperTrapdoor);                                                                                         \
    FUNC(WaxedCutCopper);                                                                                              \
    FUNC(WaxedCutCopperSlab);                                                                                          \
    FUNC(WaxedCutCopperStairs);                                                                                        \
    FUNC(WaxedDoubleCutCopperSlab);                                                                                    \
    FUNC(WaxedExposedChiseledCopper);                                                                                  \
    FUNC(WaxedExposedCopper);                                                                                          \
    FUNC(WaxedExposedCopperBulb);                                                                                      \
    FUNC(WaxedExposedCopperDoor);                                                                                      \
    FUNC(WaxedExposedCopperGrate);                                                                                     \
    FUNC(WaxedExposedCopperTrapdoor);                                                                                  \
    FUNC(WaxedExposedCutCopper);                                                                                       \
    FUNC(WaxedExposedCutCopperSlab);                                                                                   \
    FUNC(WaxedExposedCutCopperStairs);                                                                                 \
    FUNC(WaxedExposedDoubleCutCopperSlab);                                                                             \
    FUNC(WaxedOxidizedChiseledCopper);                                                                                 \
    FUNC(WaxedOxidizedCopper);                                                                                         \
    FUNC(WaxedOxidizedCopperBulb);                                                                                     \
    FUNC(WaxedOxidizedCopperDoor);                                                                                     \
    FUNC(WaxedOxidizedCopperGrate);                                                                                    \
    FUNC(WaxedOxidizedCopperTrapdoor);                                                                                 \
    FUNC(WaxedOxidizedCutCopper);                                                                                      \
    FUNC(WaxedOxidizedCutCopperSlab);                                                                                  \
    FUNC(WaxedOxidizedCutCopperStairs);                                                                                \
    FUNC(WaxedOxidizedDoubleCutCopperSlab);                                                                            \
    FUNC(WaxedWeatheredChiseledCopper);                                                                                \
    FUNC(WaxedWeatheredCopper);                                                                                        \
    FUNC(WaxedWeatheredCopperBulb);                                                                                    \
    FUNC(WaxedWeatheredCopperDoor);                                                                                    \
    FUNC(WaxedWeatheredCopperGrate);                                                                                   \
    FUNC(WaxedWeatheredCopperTrapdoor);                                                                                \
    FUNC(WaxedWeatheredCutCopper);                                                                                     \
    FUNC(WaxedWeatheredCutCopperSlab);                                                                                 \
    FUNC(WaxedWeatheredCutCopperStairs);                                                                               \
    FUNC(WaxedWeatheredDoubleCutCopperSlab);                                                                           \
    FUNC(WeatheredChiseledCopper);                                                                                     \
    FUNC(WeatheredCopper);                                                                                             \
    FUNC(WeatheredCopperBulb);                                                                                         \
    FUNC(WeatheredCopperDoor);                                                                                         \
    FUNC(WeatheredCopperGrate);                                                                                        \
    FUNC(WeatheredCopperTrapdoor);                                                                                     \
    FUNC(WeatheredCutCopper);                                                                                          \
    FUNC(WeatheredCutCopperSlab);                                                                                      \
    FUNC(WeatheredCutCopperStairs);                                                                                    \
    FUNC(WeatheredDoubleCutCopperSlab);                                                                                \
    FUNC(Web);                                                                                                         \
    FUNC(WeepingVines);                                                                                                \
    FUNC(Wheat);                                                                                                       \
    FUNC(WhiteCandle);                                                                                                 \
    FUNC(WhiteCandleCake);                                                                                             \
    FUNC(WhiteCarpet);                                                                                                 \
    FUNC(WhiteConcrete);                                                                                               \
    FUNC(WhiteConcretePowder);                                                                                         \
    FUNC(WhiteGlazedTerracotta);                                                                                       \
    FUNC(WhiteShulkerBox);                                                                                             \
    FUNC(WhiteStainedGlass);                                                                                           \
    FUNC(WhiteStainedGlassPane);                                                                                       \
    FUNC(WhiteTerracotta);                                                                                             \
    FUNC(WhiteWool);                                                                                                   \
    FUNC(WitherRose);                                                                                                  \
    FUNC(Wood);                                                                                                        \
    FUNC(WoodenButton);                                                                                                \
    FUNC(WoodenDoor);                                                                                                  \
    FUNC(WoodenPressurePlate);                                                                                         \
    FUNC(WoodenSlab);                                                                                                  \
    FUNC(YellowCandle);                                                                                                \
    FUNC(YellowCandleCake);                                                                                            \
    FUNC(YellowCarpet);                                                                                                \
    FUNC(YellowConcrete);                                                                                              \
    FUNC(YellowConcretePowder);                                                                                        \
    FUNC(YellowFlower);                                                                                                \
    FUNC(YellowGlazedTerracotta);                                                                                      \
    FUNC(YellowShulkerBox);                                                                                            \
    FUNC(YellowStainedGlass);                                                                                          \
    FUNC(YellowStainedGlassPane);                                                                                      \
    FUNC(YellowTerracotta);                                                                                            \
    FUNC(YellowWool);

#pragma endregion

namespace StaticVanillaBlocks {

std::array<Block const*, 119> mElements{};

Block const* mAir;

Block const* mUnknown;

#define BUILD_DEF(x) Block const* m##x // NOLINT

GENERATE_FUNC(BUILD_DEF) // NOLINT

#define INIT_BLOCK(x) m##x = &BlockTypeRegistry::getDefaultBlockState(VanillaBlockTypeIds::x) // NOLINT

LL_AUTO_STATIC_HOOK(StaticVanillaBlockAssign, HookPriority::Normal, BedrockBlocks::assignBlocks, void) {
    origin();

    for (int i = 0; i < 119; ++i) {
        INIT_BLOCK(Elements[i]);
    }
    mAir     = BedrockBlocks::mAir;
    mUnknown = &BlockTypeRegistry::getDefaultBlockState(BedrockBlockNames::Unknown);

    GENERATE_FUNC(INIT_BLOCK) // NOLINT
}

#define RELEASE_BLOCK(x) m##x = nullptr // NOLINT

LL_AUTO_STATIC_HOOK(StaticVanillaBlockUnassign, HookPriority::Normal, BedrockBlocks::unassignBlocks, void) {

    for (int i = 0; i < 119; ++i) {
        RELEASE_BLOCK(Elements[i]);
    }
    mAir     = nullptr;
    mUnknown = nullptr;

    GENERATE_FUNC(RELEASE_BLOCK) // NOLINT

    origin();
}

}; // namespace StaticVanillaBlocks
