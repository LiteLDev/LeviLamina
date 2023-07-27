#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ParticleType : int {
    Undefined             = 0x0,
    Bubble                = 0x1,
    BubbleManual          = 0x2,
    Crit                  = 0x3,
    BlockForceField       = 0x4,
    Smoke                 = 0x5,
    Explode               = 0x6,
    Evaporation           = 0x7,
    Flame                 = 0x8,
    CandleFlame           = 0x9,
    Lava                  = 0xA,
    LargeSmoke            = 0xB,
    RedDust               = 0xC,
    RisingBorderDust      = 0xD,
    IconCrack             = 0xE,
    SnowballPoof          = 0xF,
    LargeExplode          = 0x10,
    HugeExplosion         = 0x11,
    MobFlame              = 0x12,
    Heart                 = 0x13,
    Terrain               = 0x14,
    TownAura              = 0x15,
    Portal                = 0x16,
    MobPortal             = 0x17,
    WaterSplash           = 0x18,
    WaterSplashManual     = 0x19,
    WaterWake             = 0x1A,
    DripWater             = 0x1B,
    DripLava              = 0x1C,
    DripHoney             = 0x1D,
    StalactiteDripWater   = 0x1E,
    StalactiteDripLava    = 0x1F,
    FallingDust           = 0x20,
    MobSpell              = 0x21,
    MobSpellAmbient       = 0x22,
    MobSpellInstantaneous = 0x23,
    Ink                   = 0x24,
    Slime                 = 0x25,
    RainSplash            = 0x26,
    VillagerAngry         = 0x27,
    VillagerHappy         = 0x28,
    EnchantingTable       = 0x29,
    TrackingEmitter       = 0x2A,
    Note                  = 0x2B,
    WitchSpell            = 0x2C,
    CarrotBoost           = 0x2D,
    MobAppearance         = 0x2E,
    EndRod                = 0x2F,
    DragonBreath          = 0x30,
    Spit                  = 0x31,
    Totem                 = 0x32,
    Food                  = 0x33,
    FireworksStarter      = 0x34,
    Fireworks             = 0x35,
    FireworksOverlay      = 0x36,
    BalloonGas            = 0x37,
    ColoredFlame          = 0x38,
    Sparkler              = 0x39,
    Conduit               = 0x3A,
    BubbleColumnUp        = 0x3B,
    BubbleColumnDown      = 0x3C,
    Sneeze                = 0x3D,
    ShulkerBullet         = 0x3E,
    Bleach                = 0x3F,
    DragonDestroyBlock    = 0x40,
    MyceliumDust          = 0x41,
    FallingBorderDust     = 0x42,
    CampfireSmoke         = 0x43,
    CampfireSmokeTall     = 0x44,
    DragonBreathFire      = 0x45,
    DragonBreathTrail     = 0x46,
    BlueFlame             = 0x47,
    Soul                  = 0x48,
    ObsidianTear          = 0x49,
    PortalReverse         = 0x4A,
    Snowflake             = 0x4B,
    VibrationSignal       = 0x4C,
    SculkSensorRedstone   = 0x4D,
    SporeBlossomShower    = 0x4E,
    SporeBlossomAmbient   = 0x4F,
    Wax                   = 0x50,
    ElectricSpark         = 0x51,
    Shriek                = 0x52,
    SculkSoul             = 0x53,
    SonicExplosion        = 0x54,
    BrushDust             = 0x55,
    Count                = 0x56,
};
