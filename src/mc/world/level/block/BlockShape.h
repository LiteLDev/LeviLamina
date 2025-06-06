#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BlockShape : int {
    Invisible                   = -1,
    Block                       = 0,
    CrossTexture                = 1,
    Torch                       = 2,
    Fire                        = 3,
    Water                       = 4,
    RedDust                     = 5,
    Rows                        = 6,
    Door                        = 7,
    Ladder                      = 8,
    Rail                        = 9,
    Stairs                      = 10,
    Fence                       = 11,
    Lever                       = 12,
    Cactus                      = 13,
    Bed                         = 14,
    Diode                       = 15,
    Unused16                    = 16,
    Unused17                    = 17,
    IronFence                   = 18,
    Stem                        = 19,
    Vine                        = 20,
    FenceGate                   = 21,
    Chest                       = 22,
    Lilypad                     = 23,
    Unused24                    = 24,
    BrewingStand                = 25,
    PortalFrame                 = 26,
    Unused27                    = 27,
    Cocoa                       = 28,
    Unused29                    = 29,
    Unused30                    = 30,
    Tree                        = 31,
    Wall                        = 32,
    Unused33                    = 33,
    Unused34                    = 34,
    Unused35                    = 35,
    Unused36                    = 36,
    Unused37                    = 37,
    Unused38                    = 38,
    Unused39                    = 39,
    DoublePlant                 = 40,
    Unused41                    = 41,
    FlowerPot                   = 42,
    Anvil                       = 43,
    DragonEgg                   = 44,
    Unused45                    = 45,
    Unused46                    = 46,
    Unused47                    = 47,
    StructureVoid               = 48,
    Unused49                    = 49,
    Unused50                    = 50,
    Unused51                    = 51,
    Unused52                    = 52,
    Unused53                    = 53,
    Unused54                    = 54,
    Unused55                    = 55,
    Unused56                    = 56,
    Unused57                    = 57,
    Unused58                    = 58,
    Unused59                    = 59,
    Unused60                    = 60,
    Unused61                    = 61,
    Unused62                    = 62,
    Unused63                    = 63,
    Unused64                    = 64,
    Unused65                    = 65,
    Unused66                    = 66,
    BlockHalf                   = 67,
    TopSnow                     = 68,
    Tripwire                    = 69,
    TripwireHook                = 70,
    Cauldron                    = 71,
    Repeater                    = 72,
    Comparator                  = 73,
    Hopper                      = 74,
    SlimeBlock                  = 75,
    Piston                      = 76,
    Beacon                      = 77,
    ChorusPlant                 = 78,
    ChorusFlower                = 79,
    EndPortal                   = 80,
    EndRod                      = 81,
    EndGateway                  = 82,
    Skull                       = 83,
    FacingBlock                 = 84,
    CommandBlock                = 85,
    Terracotta                  = 86,
    DoubleSideFence             = 87,
    ItemFrame                   = 88,
    ShulkerBox                  = 89,
    DoublesidedCrossTexture     = 90,
    DoublesidedDoublePlant      = 91,
    DoublesidedRows             = 92,
    ElementBlock                = 93,
    ChemistryTable              = 94,
    Unused95                    = 95,
    CoralFan                    = 96,
    Seagrass                    = 97,
    Kelp                        = 98,
    Trapdoor                    = 99,
    SeaPickle                   = 100,
    Conduit                     = 101,
    TurtleEgg                   = 102,
    Unused103                   = 103,
    Unused104                   = 104,
    BubbleColumn                = 105,
    CameraFacingSprite          = 106,
    Sign                        = 107,
    Bamboo                      = 108,
    BambooSapling               = 109,
    Scaffolding                 = 110,
    Grindstone                  = 111,
    Bell                        = 112,
    Lantern                     = 113,
    Campfire                    = 114,
    Lectern                     = 115,
    SweetBerryBush              = 116,
    CartographyTable            = 117,
    Composter                   = 118,
    StoneCutter                 = 119,
    HoneyBlock                  = 120,
    WeepingVine                 = 121,
    TwistingVine                = 122,
    Chain                       = 123,
    DriedKelpBlock              = 124,
    SculkSensor                 = 125,
    PointedDripstone            = 126,
    LightningRod                = 127,
    SporeBlossom                = 128,
    CaveVine                    = 129,
    BigDripleaf                 = 130,
    SmallDripleaf               = 131,
    Azalea                      = 132,
    GlowItemFrame               = 133,
    MultifaceBlock              = 134,
    AmethystCluster             = 135,
    Candle                      = 136,
    CandleCake                  = 137,
    SculkShrieker               = 138,
    ClientRequestPlaceholder    = 139,
    FrogSpawn                   = 140,
    MangrovePropagule           = 141,
    MangroveRoot                = 142,
    BambooBlock                 = 143,
    ChiseledBookshelf           = 144,
    DecoratedPot                = 145,
    FlowerBed                   = 146,
    CalibratedSculkSensor       = 147,
    PitcherCrop                 = 148,
    PitcherPlant                = 149,
    SnifferEgg                  = 150,
    Vault                       = 151,
    HeavyCore                   = 152,
    PaleMossCarpet              = 153,
    Eyeblossom                  = 154,
    DoublesidedWideCrossTexture = 155,
    FireflyBush                 = 156,
    DriedGhast                  = 157,
    Count                       = 158,
};
