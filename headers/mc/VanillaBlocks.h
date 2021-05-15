#pragma once
#include <Loader\Loader.h>
class Block;
#ifndef GetServerSymbol
#    define GetServerSymbol(x) dlsym(x)
#endif
namespace VanillaBlocks {
inline Block &AcaciaFenceGate() {
    return **(Block **)GetServerSymbol("?mAcaciaFenceGate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &AcaciaSign() {
    return **(Block **)GetServerSymbol("?mAcaciaSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &AcaciaStairs() {
    return **(Block **)GetServerSymbol("?mAcaciaStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &AcaciaWallSign() {
    return **(Block **)GetServerSymbol("?mAcaciaWallSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ActivatorRail() {
    return **(Block **)GetServerSymbol("?mActivatorRail@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &AndesiteStairs() {
    return **(Block **)GetServerSymbol("?mAndesiteStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Anvil() {
    return **(Block **)GetServerSymbol("?mAnvil@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BambooBlock() {
    return **(Block **)GetServerSymbol("?mBambooBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BambooSapling() {
    return **(Block **)GetServerSymbol("?mBambooSapling@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Barrel() {
    return **(Block **)GetServerSymbol("?mBarrel@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Beacon() {
    return **(Block **)GetServerSymbol("?mBeacon@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Bed() {
    return **(Block **)GetServerSymbol("?mBed@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Bedrock() {
    return **(Block **)GetServerSymbol("?mBedrock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BeeNest() {
    return **(Block **)GetServerSymbol("?mBeeNest@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Beehive() {
    return **(Block **)GetServerSymbol("?mBeehive@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BeetrootCrop() {
    return **(Block **)GetServerSymbol("?mBeetrootCrop@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BellBlock() {
    return **(Block **)GetServerSymbol("?mBellBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BirchFenceGate() {
    return **(Block **)GetServerSymbol("?mBirchFenceGate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BirchSign() {
    return **(Block **)GetServerSymbol("?mBirchSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BirchStairs() {
    return **(Block **)GetServerSymbol("?mBirchStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BirchWallSign() {
    return **(Block **)GetServerSymbol("?mBirchWallSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BlastFurnace() {
    return **(Block **)GetServerSymbol("?mBlastFurnace@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BlueIce() {
    return **(Block **)GetServerSymbol("?mBlueIce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BoneBlock() {
    return **(Block **)GetServerSymbol("?mBoneBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Bookshelf() {
    return **(Block **)GetServerSymbol("?mBookshelf@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BrewingStand() {
    return **(Block **)GetServerSymbol("?mBrewingStand@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Brick() {
    return **(Block **)GetServerSymbol("?mBrick@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BrickStairs() {
    return **(Block **)GetServerSymbol("?mBrickStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BrownMushroom() {
    return **(Block **)GetServerSymbol("?mBrownMushroom@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BrownMushroomBlock() {
    return **(Block **)GetServerSymbol("?mBrownMushroomBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &BubbleColumn() {
    return **(Block **)GetServerSymbol("?mBubbleColumn@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ButtonAcacia() {
    return **(Block **)GetServerSymbol("?mButtonAcacia@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ButtonBirch() {
    return **(Block **)GetServerSymbol("?mButtonBirch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ButtonDarkOak() {
    return **(Block **)GetServerSymbol("?mButtonDarkOak@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ButtonJungle() {
    return **(Block **)GetServerSymbol("?mButtonJungle@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ButtonSpruce() {
    return **(Block **)GetServerSymbol("?mButtonSpruce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Cactus() {
    return **(Block **)GetServerSymbol("?mCactus@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Cake() {
    return **(Block **)GetServerSymbol("?mCake@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CameraBlock() {
    return **(Block **)GetServerSymbol("?mCameraBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CampfireBlock() {
    return **(Block **)GetServerSymbol("?mCampfireBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CarrotCrop() {
    return **(Block **)GetServerSymbol("?mCarrotCrop@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CartographyTableBlock() {
    return **(Block **)GetServerSymbol("?mCartographyTableBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CarvedPumpkin() {
    return **(Block **)GetServerSymbol("?mCarvedPumpkin@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Cauldron() {
    return **(Block **)GetServerSymbol("?mCauldron@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Chalkboard() {
    return **(Block **)GetServerSymbol("?mChalkboard@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ChemistryTable() {
    return **(Block **)GetServerSymbol("?mChemistryTable@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Chest() {
    return **(Block **)GetServerSymbol("?mChest@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ChorusFlowerBlock() {
    return **(Block **)GetServerSymbol("?mChorusFlowerBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ChorusPlantBlock() {
    return **(Block **)GetServerSymbol("?mChorusPlantBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Clay() {
    return **(Block **)GetServerSymbol("?mClay@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoalBlock() {
    return **(Block **)GetServerSymbol("?mCoalBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoalOre() {
    return **(Block **)GetServerSymbol("?mCoalOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Cobblestone() {
    return **(Block **)GetServerSymbol("?mCobblestone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CobblestoneStairs() {
    return **(Block **)GetServerSymbol("?mCobblestoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Cocoa() {
    return **(Block **)GetServerSymbol("?mCocoa@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ColoredTorchBP() {
    return **(Block **)GetServerSymbol("?mColoredTorchBP@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ColoredTorchRG() {
    return **(Block **)GetServerSymbol("?mColoredTorchRG@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ComposterBlock() {
    return **(Block **)GetServerSymbol("?mComposterBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Concrete() {
    return **(Block **)GetServerSymbol("?mConcrete@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ConcretePowder() {
    return **(Block **)GetServerSymbol("?mConcretePowder@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ConduitBlock() {
    return **(Block **)GetServerSymbol("?mConduitBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Coral() {
    return **(Block **)GetServerSymbol("?mCoral@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoralBlock() {
    return **(Block **)GetServerSymbol("?mCoralBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoralFan() {
    return **(Block **)GetServerSymbol("?mCoralFan@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoralFanDead() {
    return **(Block **)GetServerSymbol("?mCoralFanDead@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoralFanHang2() {
    return **(Block **)GetServerSymbol("?mCoralFanHang2@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoralFanHang3() {
    return **(Block **)GetServerSymbol("?mCoralFanHang3@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &CoralFanHang() {
    return **(Block **)GetServerSymbol("?mCoralFanHang@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DarkOakFenceGate() {
    return **(Block **)GetServerSymbol("?mDarkOakFenceGate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DarkOakSign() {
    return **(Block **)GetServerSymbol("?mDarkOakSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DarkOakStairs() {
    return **(Block **)GetServerSymbol("?mDarkOakStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DarkOakWallSign() {
    return **(Block **)GetServerSymbol("?mDarkOakWallSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DarkPrismarineStairs() {
    return **(Block **)GetServerSymbol("?mDarkPrismarineStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DaylightDetector() {
    return **(Block **)GetServerSymbol("?mDaylightDetector@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DaylightDetectorInverted() {
    return **(Block **)GetServerSymbol("?mDaylightDetectorInverted@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DeadBush() {
    return **(Block **)GetServerSymbol("?mDeadBush@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DetectorRail() {
    return **(Block **)GetServerSymbol("?mDetectorRail@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DiamondBlock() {
    return **(Block **)GetServerSymbol("?mDiamondBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DiamondOre() {
    return **(Block **)GetServerSymbol("?mDiamondOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DioriteStairs() {
    return **(Block **)GetServerSymbol("?mDioriteStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Dirt() {
    return **(Block **)GetServerSymbol("?mDirt@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Dispenser() {
    return **(Block **)GetServerSymbol("?mDispenser@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DoublePlant() {
    return **(Block **)GetServerSymbol("?mDoublePlant@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DoubleStoneSlab2() {
    return **(Block **)GetServerSymbol("?mDoubleStoneSlab2@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DoubleStoneSlab3() {
    return **(Block **)GetServerSymbol("?mDoubleStoneSlab3@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DoubleStoneSlab4() {
    return **(Block **)GetServerSymbol("?mDoubleStoneSlab4@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DoubleStoneSlab() {
    return **(Block **)GetServerSymbol("?mDoubleStoneSlab@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DoubleWoodenSlab() {
    return **(Block **)GetServerSymbol("?mDoubleWoodenSlab@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DragonEgg() {
    return **(Block **)GetServerSymbol("?mDragonEgg@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &DriedKelpBlock() {
    return **(Block **)GetServerSymbol("?mDriedKelpBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Dropper() {
    return **(Block **)GetServerSymbol("?mDropper@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element0() {
    return **(Block **)GetServerSymbol("?mElement0@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element100() {
    return **(Block **)GetServerSymbol("?mElement100@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element101() {
    return **(Block **)GetServerSymbol("?mElement101@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element102() {
    return **(Block **)GetServerSymbol("?mElement102@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element103() {
    return **(Block **)GetServerSymbol("?mElement103@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element104() {
    return **(Block **)GetServerSymbol("?mElement104@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element105() {
    return **(Block **)GetServerSymbol("?mElement105@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element106() {
    return **(Block **)GetServerSymbol("?mElement106@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element107() {
    return **(Block **)GetServerSymbol("?mElement107@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element108() {
    return **(Block **)GetServerSymbol("?mElement108@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element109() {
    return **(Block **)GetServerSymbol("?mElement109@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element10() {
    return **(Block **)GetServerSymbol("?mElement10@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element110() {
    return **(Block **)GetServerSymbol("?mElement110@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element111() {
    return **(Block **)GetServerSymbol("?mElement111@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element112() {
    return **(Block **)GetServerSymbol("?mElement112@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element113() {
    return **(Block **)GetServerSymbol("?mElement113@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element114() {
    return **(Block **)GetServerSymbol("?mElement114@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element115() {
    return **(Block **)GetServerSymbol("?mElement115@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element116() {
    return **(Block **)GetServerSymbol("?mElement116@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element117() {
    return **(Block **)GetServerSymbol("?mElement117@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element118() {
    return **(Block **)GetServerSymbol("?mElement118@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element11() {
    return **(Block **)GetServerSymbol("?mElement11@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element12() {
    return **(Block **)GetServerSymbol("?mElement12@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element13() {
    return **(Block **)GetServerSymbol("?mElement13@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element14() {
    return **(Block **)GetServerSymbol("?mElement14@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element15() {
    return **(Block **)GetServerSymbol("?mElement15@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element16() {
    return **(Block **)GetServerSymbol("?mElement16@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element17() {
    return **(Block **)GetServerSymbol("?mElement17@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element18() {
    return **(Block **)GetServerSymbol("?mElement18@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element19() {
    return **(Block **)GetServerSymbol("?mElement19@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element1() {
    return **(Block **)GetServerSymbol("?mElement1@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element20() {
    return **(Block **)GetServerSymbol("?mElement20@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element21() {
    return **(Block **)GetServerSymbol("?mElement21@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element22() {
    return **(Block **)GetServerSymbol("?mElement22@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element23() {
    return **(Block **)GetServerSymbol("?mElement23@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element24() {
    return **(Block **)GetServerSymbol("?mElement24@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element25() {
    return **(Block **)GetServerSymbol("?mElement25@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element26() {
    return **(Block **)GetServerSymbol("?mElement26@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element27() {
    return **(Block **)GetServerSymbol("?mElement27@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element28() {
    return **(Block **)GetServerSymbol("?mElement28@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element29() {
    return **(Block **)GetServerSymbol("?mElement29@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element2() {
    return **(Block **)GetServerSymbol("?mElement2@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element30() {
    return **(Block **)GetServerSymbol("?mElement30@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element31() {
    return **(Block **)GetServerSymbol("?mElement31@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element32() {
    return **(Block **)GetServerSymbol("?mElement32@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element33() {
    return **(Block **)GetServerSymbol("?mElement33@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element34() {
    return **(Block **)GetServerSymbol("?mElement34@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element35() {
    return **(Block **)GetServerSymbol("?mElement35@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element36() {
    return **(Block **)GetServerSymbol("?mElement36@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element37() {
    return **(Block **)GetServerSymbol("?mElement37@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element38() {
    return **(Block **)GetServerSymbol("?mElement38@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element39() {
    return **(Block **)GetServerSymbol("?mElement39@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element3() {
    return **(Block **)GetServerSymbol("?mElement3@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element40() {
    return **(Block **)GetServerSymbol("?mElement40@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element41() {
    return **(Block **)GetServerSymbol("?mElement41@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element42() {
    return **(Block **)GetServerSymbol("?mElement42@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element43() {
    return **(Block **)GetServerSymbol("?mElement43@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element44() {
    return **(Block **)GetServerSymbol("?mElement44@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element45() {
    return **(Block **)GetServerSymbol("?mElement45@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element46() {
    return **(Block **)GetServerSymbol("?mElement46@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element47() {
    return **(Block **)GetServerSymbol("?mElement47@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element48() {
    return **(Block **)GetServerSymbol("?mElement48@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element49() {
    return **(Block **)GetServerSymbol("?mElement49@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element4() {
    return **(Block **)GetServerSymbol("?mElement4@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element50() {
    return **(Block **)GetServerSymbol("?mElement50@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element51() {
    return **(Block **)GetServerSymbol("?mElement51@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element52() {
    return **(Block **)GetServerSymbol("?mElement52@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element53() {
    return **(Block **)GetServerSymbol("?mElement53@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element54() {
    return **(Block **)GetServerSymbol("?mElement54@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element55() {
    return **(Block **)GetServerSymbol("?mElement55@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element56() {
    return **(Block **)GetServerSymbol("?mElement56@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element57() {
    return **(Block **)GetServerSymbol("?mElement57@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element58() {
    return **(Block **)GetServerSymbol("?mElement58@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element59() {
    return **(Block **)GetServerSymbol("?mElement59@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element5() {
    return **(Block **)GetServerSymbol("?mElement5@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element60() {
    return **(Block **)GetServerSymbol("?mElement60@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element61() {
    return **(Block **)GetServerSymbol("?mElement61@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element62() {
    return **(Block **)GetServerSymbol("?mElement62@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element63() {
    return **(Block **)GetServerSymbol("?mElement63@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element64() {
    return **(Block **)GetServerSymbol("?mElement64@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element65() {
    return **(Block **)GetServerSymbol("?mElement65@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element66() {
    return **(Block **)GetServerSymbol("?mElement66@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element67() {
    return **(Block **)GetServerSymbol("?mElement67@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element68() {
    return **(Block **)GetServerSymbol("?mElement68@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element69() {
    return **(Block **)GetServerSymbol("?mElement69@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element6() {
    return **(Block **)GetServerSymbol("?mElement6@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element70() {
    return **(Block **)GetServerSymbol("?mElement70@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element71() {
    return **(Block **)GetServerSymbol("?mElement71@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element72() {
    return **(Block **)GetServerSymbol("?mElement72@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element73() {
    return **(Block **)GetServerSymbol("?mElement73@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element74() {
    return **(Block **)GetServerSymbol("?mElement74@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element75() {
    return **(Block **)GetServerSymbol("?mElement75@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element76() {
    return **(Block **)GetServerSymbol("?mElement76@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element77() {
    return **(Block **)GetServerSymbol("?mElement77@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element78() {
    return **(Block **)GetServerSymbol("?mElement78@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element79() {
    return **(Block **)GetServerSymbol("?mElement79@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element7() {
    return **(Block **)GetServerSymbol("?mElement7@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element80() {
    return **(Block **)GetServerSymbol("?mElement80@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element81() {
    return **(Block **)GetServerSymbol("?mElement81@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element82() {
    return **(Block **)GetServerSymbol("?mElement82@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element83() {
    return **(Block **)GetServerSymbol("?mElement83@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element84() {
    return **(Block **)GetServerSymbol("?mElement84@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element85() {
    return **(Block **)GetServerSymbol("?mElement85@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element86() {
    return **(Block **)GetServerSymbol("?mElement86@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element87() {
    return **(Block **)GetServerSymbol("?mElement87@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element88() {
    return **(Block **)GetServerSymbol("?mElement88@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element89() {
    return **(Block **)GetServerSymbol("?mElement89@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element8() {
    return **(Block **)GetServerSymbol("?mElement8@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element90() {
    return **(Block **)GetServerSymbol("?mElement90@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element91() {
    return **(Block **)GetServerSymbol("?mElement91@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element92() {
    return **(Block **)GetServerSymbol("?mElement92@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element93() {
    return **(Block **)GetServerSymbol("?mElement93@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element94() {
    return **(Block **)GetServerSymbol("?mElement94@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element95() {
    return **(Block **)GetServerSymbol("?mElement95@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element96() {
    return **(Block **)GetServerSymbol("?mElement96@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element97() {
    return **(Block **)GetServerSymbol("?mElement97@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element98() {
    return **(Block **)GetServerSymbol("?mElement98@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element99() {
    return **(Block **)GetServerSymbol("?mElement99@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Element9() {
    return **(Block **)GetServerSymbol("?mElement9@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EmeraldBlock() {
    return **(Block **)GetServerSymbol("?mEmeraldBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EmeraldOre() {
    return **(Block **)GetServerSymbol("?mEmeraldOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EnchantingTable() {
    return **(Block **)GetServerSymbol("?mEnchantingTable@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndBrick() {
    return **(Block **)GetServerSymbol("?mEndBrick@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndBrickStairs() {
    return **(Block **)GetServerSymbol("?mEndBrickStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndGateway() {
    return **(Block **)GetServerSymbol("?mEndGateway@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndPortal() {
    return **(Block **)GetServerSymbol("?mEndPortal@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndPortalFrame() {
    return **(Block **)GetServerSymbol("?mEndPortalFrame@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndRod() {
    return **(Block **)GetServerSymbol("?mEndRod@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EndStone() {
    return **(Block **)GetServerSymbol("?mEndStone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &EnderChest() {
    return **(Block **)GetServerSymbol("?mEnderChest@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Farmland() {
    return **(Block **)GetServerSymbol("?mFarmland@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Fence() {
    return **(Block **)GetServerSymbol("?mFence@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &FenceGateOak() {
    return **(Block **)GetServerSymbol("?mFenceGateOak@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Fire() {
    return **(Block **)GetServerSymbol("?mFire@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &FletchingTable() {
    return **(Block **)GetServerSymbol("?mFletchingTable@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &FlowerPot() {
    return **(Block **)GetServerSymbol("?mFlowerPot@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &FlowingLava() {
    return **(Block **)GetServerSymbol("?mFlowingLava@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &FlowingWater() {
    return **(Block **)GetServerSymbol("?mFlowingWater@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &FrostedIce() {
    return **(Block **)GetServerSymbol("?mFrostedIce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Furnace() {
    return **(Block **)GetServerSymbol("?mFurnace@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Glass() {
    return **(Block **)GetServerSymbol("?mGlass@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlassPane() {
    return **(Block **)GetServerSymbol("?mGlassPane@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaBlack() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaBlack@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaBlue() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaBlue@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaBrown() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaBrown@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaCyan() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaCyan@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaGray() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaGray@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaGreen() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaGreen@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaLightBlue() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaLightBlue@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaLime() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaLime@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaMagenta() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaMagenta@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaOrange() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaOrange@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaPink() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaPink@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaPurple() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaPurple@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaRed() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaRed@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaSilver() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaSilver@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaWhite() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaWhite@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlazedTerracottaYellow() {
    return **(Block **)GetServerSymbol("?mGlazedTerracottaYellow@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GlowStone() {
    return **(Block **)GetServerSymbol("?mGlowStone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GoldBlock() {
    return **(Block **)GetServerSymbol("?mGoldBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GoldOre() {
    return **(Block **)GetServerSymbol("?mGoldOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GoldenRail() {
    return **(Block **)GetServerSymbol("?mGoldenRail@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &GraniteStairs() {
    return **(Block **)GetServerSymbol("?mGraniteStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Grass() {
    return **(Block **)GetServerSymbol("?mGrass@VanillaBlocks@@3PEAVBlock@@EA");
}
inline Block &GrassPathBlock() {
    return **(Block **)GetServerSymbol("?mGrassPathBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Gravel() {
    return **(Block **)GetServerSymbol("?mGravel@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Grindstone() {
    return **(Block **)GetServerSymbol("?mGrindstone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HardGlass() {
    return **(Block **)GetServerSymbol("?mHardGlass@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HardStainedGlass() {
    return **(Block **)GetServerSymbol("?mHardStainedGlass@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HardStainedGlassPane() {
    return **(Block **)GetServerSymbol("?mHardStainedGlassPane@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HardenedClay() {
    return **(Block **)GetServerSymbol("?mHardenedClay@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HayBlock() {
    return **(Block **)GetServerSymbol("?mHayBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HeavyWeightedPressurePlate() {
    return **(Block **)GetServerSymbol(
        "?mHeavyWeightedPressurePlate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HoneyBlock() {
    return **(Block **)GetServerSymbol("?mHoneyBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &HoneycombBlock() {
    return **(Block **)GetServerSymbol("?mHoneycombBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Hopper() {
    return **(Block **)GetServerSymbol("?mHopper@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Ice() {
    return **(Block **)GetServerSymbol("?mIce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &InfoUpdateGame1() {
    return **(Block **)GetServerSymbol("?mInfoUpdateGame1@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &InvisibleBedrock() {
    return **(Block **)GetServerSymbol("?mInvisibleBedrock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &IronBlock() {
    return **(Block **)GetServerSymbol("?mIronBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &IronDoor() {
    return **(Block **)GetServerSymbol("?mIronDoor@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &IronFence() {
    return **(Block **)GetServerSymbol("?mIronFence@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &IronOre() {
    return **(Block **)GetServerSymbol("?mIronOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &IronTrapdoor() {
    return **(Block **)GetServerSymbol("?mIronTrapdoor@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ItemFrame() {
    return **(Block **)GetServerSymbol("?mItemFrame@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &JigsawBlock() {
    return **(Block **)GetServerSymbol("?mJigsawBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Jukebox() {
    return **(Block **)GetServerSymbol("?mJukebox@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &JungleFenceGate() {
    return **(Block **)GetServerSymbol("?mJungleFenceGate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &JungleSign() {
    return **(Block **)GetServerSymbol("?mJungleSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &JungleStairs() {
    return **(Block **)GetServerSymbol("?mJungleStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &JungleWallSign() {
    return **(Block **)GetServerSymbol("?mJungleWallSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Kelp() {
    return **(Block **)GetServerSymbol("?mKelp@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Ladder() {
    return **(Block **)GetServerSymbol("?mLadder@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Lantern() {
    return **(Block **)GetServerSymbol("?mLantern@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LapisBlock() {
    return **(Block **)GetServerSymbol("?mLapisBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LapisOre() {
    return **(Block **)GetServerSymbol("?mLapisOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LavaCauldron() {
    return **(Block **)GetServerSymbol("?mLavaCauldron@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Leaves2() {
    return **(Block **)GetServerSymbol("?mLeaves2@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Leaves() {
    return **(Block **)GetServerSymbol("?mLeaves@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LecternBlock() {
    return **(Block **)GetServerSymbol("?mLecternBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Lever() {
    return **(Block **)GetServerSymbol("?mLever@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LightBlock() {
    return **(Block **)GetServerSymbol("?mLightBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LightWeightedPressurePlate() {
    return **(Block **)GetServerSymbol(
        "?mLightWeightedPressurePlate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitBlastFurnace() {
    return **(Block **)GetServerSymbol("?mLitBlastFurnace@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitFurnace() {
    return **(Block **)GetServerSymbol("?mLitFurnace@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitPumpkin() {
    return **(Block **)GetServerSymbol("?mLitPumpkin@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitRedStoneLamp() {
    return **(Block **)GetServerSymbol("?mLitRedStoneLamp@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitRedStoneOre() {
    return **(Block **)GetServerSymbol("?mLitRedStoneOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitRedStoneTorch() {
    return **(Block **)GetServerSymbol("?mLitRedStoneTorch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LitSmokerBlock() {
    return **(Block **)GetServerSymbol("?mLitSmokerBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Log2() {
    return **(Block **)GetServerSymbol("?mLog2@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Log() {
    return **(Block **)GetServerSymbol("?mLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &LoomBlock() {
    return **(Block **)GetServerSymbol("?mLoomBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MagmaBlock() {
    return **(Block **)GetServerSymbol("?mMagmaBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Melon() {
    return **(Block **)GetServerSymbol("?mMelon@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MobSpawner() {
    return **(Block **)GetServerSymbol("?mMobSpawner@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MonsterStoneEgg() {
    return **(Block **)GetServerSymbol("?mMonsterStoneEgg@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MossyCobblestone() {
    return **(Block **)GetServerSymbol("?mMossyCobblestone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MossyCobblestoneStairs() {
    return **(Block **)GetServerSymbol("?mMossyCobblestoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MossyStoneBrickStairs() {
    return **(Block **)GetServerSymbol("?mMossyStoneBrickStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &MovingBlock() {
    return **(Block **)GetServerSymbol("?mMovingBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Mycelium() {
    return **(Block **)GetServerSymbol("?mMycelium@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &NetherBrick() {
    return **(Block **)GetServerSymbol("?mNetherBrick@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &NetherBrickStairs() {
    return **(Block **)GetServerSymbol("?mNetherBrickStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &NetherFence() {
    return **(Block **)GetServerSymbol("?mNetherFence@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &NetherWart() {
    return **(Block **)GetServerSymbol("?mNetherWart@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &NetherWartBlock() {
    return **(Block **)GetServerSymbol("?mNetherWartBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Netherrack() {
    return **(Block **)GetServerSymbol("?mNetherrack@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Note() {
    return **(Block **)GetServerSymbol("?mNote@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &OakStairs() {
    return **(Block **)GetServerSymbol("?mOakStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Observer() {
    return **(Block **)GetServerSymbol("?mObserver@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Obsidian() {
    return **(Block **)GetServerSymbol("?mObsidian@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PackedIce() {
    return **(Block **)GetServerSymbol("?mPackedIce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Piston() {
    return **(Block **)GetServerSymbol("?mPiston@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PistonArm() {
    return **(Block **)GetServerSymbol("?mPistonArm@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Podzol() {
    return **(Block **)GetServerSymbol("?mPodzol@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PolishedAndesiteStairs() {
    return **(Block **)GetServerSymbol("?mPolishedAndesiteStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PolishedDioriteStairs() {
    return **(Block **)GetServerSymbol("?mPolishedDioriteStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PolishedGraniteStairs() {
    return **(Block **)GetServerSymbol("?mPolishedGraniteStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Portal() {
    return **(Block **)GetServerSymbol("?mPortal@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PotatoCrop() {
    return **(Block **)GetServerSymbol("?mPotatoCrop@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PoweredComparator() {
    return **(Block **)GetServerSymbol("?mPoweredComparator@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PoweredRepeater() {
    return **(Block **)GetServerSymbol("?mPoweredRepeater@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PressurePlateAcacia() {
    return **(Block **)GetServerSymbol("?mPressurePlateAcacia@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PressurePlateBirch() {
    return **(Block **)GetServerSymbol("?mPressurePlateBirch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PressurePlateDarkOak() {
    return **(Block **)GetServerSymbol("?mPressurePlateDarkOak@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PressurePlateJungle() {
    return **(Block **)GetServerSymbol("?mPressurePlateJungle@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PressurePlateSpruce() {
    return **(Block **)GetServerSymbol("?mPressurePlateSpruce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Prismarine() {
    return **(Block **)GetServerSymbol("?mPrismarine@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PrismarineBricksStairs() {
    return **(Block **)GetServerSymbol("?mPrismarineBricksStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PrismarineStairs() {
    return **(Block **)GetServerSymbol("?mPrismarineStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Pumpkin() {
    return **(Block **)GetServerSymbol("?mPumpkin@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PurpurBlock() {
    return **(Block **)GetServerSymbol("?mPurpurBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &PurpurStairs() {
    return **(Block **)GetServerSymbol("?mPurpurStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &QuartzBlock() {
    return **(Block **)GetServerSymbol("?mQuartzBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &QuartzOre() {
    return **(Block **)GetServerSymbol("?mQuartzOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &QuartzStairs() {
    return **(Block **)GetServerSymbol("?mQuartzStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Rail() {
    return **(Block **)GetServerSymbol("?mRail@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedFlower() {
    return **(Block **)GetServerSymbol("?mRedFlower@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedMushroom() {
    return **(Block **)GetServerSymbol("?mRedMushroom@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedMushroomBlock() {
    return **(Block **)GetServerSymbol("?mRedMushroomBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedNetherBrick() {
    return **(Block **)GetServerSymbol("?mRedNetherBrick@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedNetherBrickStairs() {
    return **(Block **)GetServerSymbol("?mRedNetherBrickStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedSandstone() {
    return **(Block **)GetServerSymbol("?mRedSandstone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedSandstoneStairs() {
    return **(Block **)GetServerSymbol("?mRedSandstoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedStoneDust() {
    return **(Block **)GetServerSymbol("?mRedStoneDust@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedStoneOre() {
    return **(Block **)GetServerSymbol("?mRedStoneOre@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RedstoneBlock() {
    return **(Block **)GetServerSymbol("?mRedstoneBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Reeds() {
    return **(Block **)GetServerSymbol("?mReeds@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &RepeatingCommandBlock() {
    return **(Block **)GetServerSymbol("?mRepeatingCommandBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Sand() {
    return **(Block **)GetServerSymbol("?mSand@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SandStone() {
    return **(Block **)GetServerSymbol("?mSandStone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SandstoneStairs() {
    return **(Block **)GetServerSymbol("?mSandstoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Sapling() {
    return **(Block **)GetServerSymbol("?mSapling@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ScaffoldingBlock() {
    return **(Block **)GetServerSymbol("?mScaffoldingBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SeaGrass() {
    return **(Block **)GetServerSymbol("?mSeaGrass@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SeaLantern() {
    return **(Block **)GetServerSymbol("?mSeaLantern@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SeaPickle() {
    return **(Block **)GetServerSymbol("?mSeaPickle@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &ShulkerBox() {
    return **(Block **)GetServerSymbol("?mShulkerBox@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Sign() {
    return **(Block **)GetServerSymbol("?mSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Skull() {
    return **(Block **)GetServerSymbol("?mSkull@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SlimeBlock() {
    return **(Block **)GetServerSymbol("?mSlimeBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SmithingTable() {
    return **(Block **)GetServerSymbol("?mSmithingTable@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SmokerBlock() {
    return **(Block **)GetServerSymbol("?mSmokerBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SmoothQuartzStairs() {
    return **(Block **)GetServerSymbol("?mSmoothQuartzStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SmoothRedSandstoneStairs() {
    return **(Block **)GetServerSymbol("?mSmoothRedSandstoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SmoothSandstoneStairs() {
    return **(Block **)GetServerSymbol("?mSmoothSandstoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SmoothStone() {
    return **(Block **)GetServerSymbol("?mSmoothStone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Snow() {
    return **(Block **)GetServerSymbol("?mSnow@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SoulSand() {
    return **(Block **)GetServerSymbol("?mSoulSand@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Sponge() {
    return **(Block **)GetServerSymbol("?mSponge@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SpruceSign() {
    return **(Block **)GetServerSymbol("?mSpruceSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SpruceStairs() {
    return **(Block **)GetServerSymbol("?mSpruceStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SpruceWallSign() {
    return **(Block **)GetServerSymbol("?mSpruceWallSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SpuceFenceGate() {
    return **(Block **)GetServerSymbol("?mSpuceFenceGate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StainedClay() {
    return **(Block **)GetServerSymbol("?mStainedClay@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StainedGlass() {
    return **(Block **)GetServerSymbol("?mStainedGlass@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StainedGlassPane() {
    return **(Block **)GetServerSymbol("?mStainedGlassPane@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StandingBanner() {
    return **(Block **)GetServerSymbol("?mStandingBanner@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StickyPiston() {
    return **(Block **)GetServerSymbol("?mStickyPiston@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StickyPistonArm() {
    return **(Block **)GetServerSymbol("?mStickyPistonArm@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StillLava() {
    return **(Block **)GetServerSymbol("?mStillLava@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StillWater() {
    return **(Block **)GetServerSymbol("?mStillWater@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Stone() {
    return **(Block **)GetServerSymbol("?mStone@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneBrick() {
    return **(Block **)GetServerSymbol("?mStoneBrick@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneBrickStairs() {
    return **(Block **)GetServerSymbol("?mStoneBrickStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneButton() {
    return **(Block **)GetServerSymbol("?mStoneButton@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StonePressurePlate() {
    return **(Block **)GetServerSymbol("?mStonePressurePlate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneSlab2() {
    return **(Block **)GetServerSymbol("?mStoneSlab2@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneSlab3() {
    return **(Block **)GetServerSymbol("?mStoneSlab3@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneSlab4() {
    return **(Block **)GetServerSymbol("?mStoneSlab4@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneSlab() {
    return **(Block **)GetServerSymbol("?mStoneSlab@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StoneStairs() {
    return **(Block **)GetServerSymbol("?mStoneStairs@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StonecutterBench() {
    return **(Block **)GetServerSymbol("?mStonecutterBench@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StrippedAcaciaLog() {
    return **(Block **)GetServerSymbol("?mStrippedAcaciaLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StrippedBirchLog() {
    return **(Block **)GetServerSymbol("?mStrippedBirchLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StrippedDarkOakLog() {
    return **(Block **)GetServerSymbol("?mStrippedDarkOakLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StrippedJungleLog() {
    return **(Block **)GetServerSymbol("?mStrippedJungleLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StrippedOakLog() {
    return **(Block **)GetServerSymbol("?mStrippedOakLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StrippedSpruceLog() {
    return **(Block **)GetServerSymbol("?mStrippedSpruceLog@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &StructureBlock() {
    return **(Block **)GetServerSymbol("?mStructureBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &SweetBerryBushBlock() {
    return **(Block **)GetServerSymbol("?mSweetBerryBushBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TNT() {
    return **(Block **)GetServerSymbol("?mTNT@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Tallgrass() {
    return **(Block **)GetServerSymbol("?mTallgrass@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TopSnow() {
    return **(Block **)GetServerSymbol("?mTopSnow@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Torch() {
    return **(Block **)GetServerSymbol("?mTorch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Trapdoor() {
    return **(Block **)GetServerSymbol("?mTrapdoor@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TrapdoorAcacia() {
    return **(Block **)GetServerSymbol("?mTrapdoorAcacia@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TrapdoorBirch() {
    return **(Block **)GetServerSymbol("?mTrapdoorBirch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TrapdoorDarkOak() {
    return **(Block **)GetServerSymbol("?mTrapdoorDarkOak@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TrapdoorJungle() {
    return **(Block **)GetServerSymbol("?mTrapdoorJungle@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TrapdoorSpruce() {
    return **(Block **)GetServerSymbol("?mTrapdoorSpruce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TrappedChest() {
    return **(Block **)GetServerSymbol("?mTrappedChest@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Tripwire() {
    return **(Block **)GetServerSymbol("?mTripwire@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TripwireHook() {
    return **(Block **)GetServerSymbol("?mTripwireHook@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &TurtleEgg() {
    return **(Block **)GetServerSymbol("?mTurtleEgg@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &UndyedShulkerBox() {
    return **(Block **)GetServerSymbol("?mUndyedShulkerBox@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &UnlitRedStoneLamp() {
    return **(Block **)GetServerSymbol("?mUnlitRedStoneLamp@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &UnlitRedStoneTorch() {
    return **(Block **)GetServerSymbol("?mUnlitRedStoneTorch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &UnpoweredComparator() {
    return **(Block **)GetServerSymbol("?mUnpoweredComparator@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &UnpoweredRepeater() {
    return **(Block **)GetServerSymbol("?mUnpoweredRepeater@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Vine() {
    return **(Block **)GetServerSymbol("?mVine@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WallBanner() {
    return **(Block **)GetServerSymbol("?mWallBanner@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WallBlock() {
    return **(Block **)GetServerSymbol("?mWallBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WallSign() {
    return **(Block **)GetServerSymbol("?mWallSign@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Waterlily() {
    return **(Block **)GetServerSymbol("?mWaterlily@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Web() {
    return **(Block **)GetServerSymbol("?mWeb@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WheatCrop() {
    return **(Block **)GetServerSymbol("?mWheatCrop@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WitherRose() {
    return **(Block **)GetServerSymbol("?mWitherRose@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodBlock() {
    return **(Block **)GetServerSymbol("?mWoodBlock@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodButton() {
    return **(Block **)GetServerSymbol("?mWoodButton@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodPlanks() {
    return **(Block **)GetServerSymbol("?mWoodPlanks@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodPressurePlate() {
    return **(Block **)GetServerSymbol("?mWoodPressurePlate@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenDoor() {
    return **(Block **)GetServerSymbol("?mWoodenDoor@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenDoorAcacia() {
    return **(Block **)GetServerSymbol("?mWoodenDoorAcacia@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenDoorBirch() {
    return **(Block **)GetServerSymbol("?mWoodenDoorBirch@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenDoorDarkOak() {
    return **(Block **)GetServerSymbol("?mWoodenDoorDarkOak@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenDoorJungle() {
    return **(Block **)GetServerSymbol("?mWoodenDoorJungle@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenDoorSpruce() {
    return **(Block **)GetServerSymbol("?mWoodenDoorSpruce@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoodenSlab() {
    return **(Block **)GetServerSymbol("?mWoodenSlab@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &Wool() {
    return **(Block **)GetServerSymbol("?mWool@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WoolCarpet() {
    return **(Block **)GetServerSymbol("?mWoolCarpet@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &WorkBench() {
    return **(Block **)GetServerSymbol("?mWorkBench@VanillaBlocks@@3PEBVBlock@@EB");
}
inline Block &YellowFlower() {
    return **(Block **)GetServerSymbol("?mYellowFlower@VanillaBlocks@@3PEBVBlock@@EB");
}

inline Block &Air() {
    return **(Block **)GetServerSymbol("?mAir@BedrockBlocks@@3PEBVBlock@@EB");
}
};  // namespace VanillaBlocks
