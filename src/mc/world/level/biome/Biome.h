#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/util/IDType.h"
#include "mc/util/TagRegistry.h"
#include "mc/util/WeightedRandomList.h"
#include "mc/world/level/biome/components/vanilla/VanillaBiomeTypes.h"

// auto generated forward declare list
// clang-format off
class BaseGameVersion;
class BiomeComponentStorage;
class BlockPos;
class BlockSource;
class CompoundTag;
class HashedString;
class MobSpawnerData;
class WellKnownTagID;
struct BiomeTagIDType;
struct BiomeTagSetIDType;
struct OceanRuinConfiguration;
namespace mce { class Color; }
// clang-format on

class Biome {
public:
    // Biome inner types declare
    // clang-format off
    struct CachedClientComponentData;
    // clang-format on

    // Biome inner types define
    enum class BiomeTempCategory : int {
        Ocean  = 0,
        Cold   = 1,
        Medium = 2,
        Warm   = 3,
    };

    struct CachedClientComponentData {
    public:
        // member variables
        // NOLINTBEGIN
        ::ll::UntypedStorage<1, 1> mUnk586aaa;
        ::ll::UntypedStorage<1, 1> mUnka6d024;
        // NOLINTEND

    public:
        // prevent constructor by default
        CachedClientComponentData& operator=(CachedClientComponentData const&);
        CachedClientComponentData(CachedClientComponentData const&);
        CachedClientComponentData();
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<8, 48, ::HashedString const>                               mHash;
    ::ll::TypedStorage<4, 4, float>                                               mTemperature;
    ::ll::TypedStorage<4, 4, float>                                               mDownfall;
    ::ll::TypedStorage<4, 4, float>                                               mRedSporeDensity;
    ::ll::TypedStorage<4, 4, float>                                               mBlueSporeDensity;
    ::ll::TypedStorage<4, 4, float>                                               mAshDensity;
    ::ll::TypedStorage<4, 4, float>                                               mWhiteAshDensity;
    ::ll::TypedStorage<4, 4, float>                                               mSnowAccumulation;
    ::ll::TypedStorage<4, 4, float>                                               mFoliageSnow;
    ::ll::TypedStorage<4, 4, float>                                               mMinSnowLevel;
    ::ll::TypedStorage<4, 4, float>                                               mMaxSnowLevel;
    ::ll::TypedStorage<4, 4, float>                                               mDepth;
    ::ll::TypedStorage<4, 4, float>                                               mScale;
    ::ll::TypedStorage<4, 4, int>                                                 mMapWaterColor;
    ::ll::TypedStorage<4, 4, float const>                                         mMapWaterTransparency;
    ::ll::TypedStorage<1, 1, bool>                                                mRain;
    ::ll::TypedStorage<4, 12, ::OceanRuinConfiguration>                           mOceanRuinConfig;
    ::ll::TypedStorage<8, 24, ::std::vector<::std::shared_ptr<::MobSpawnerData>>> mMobs;
    ::ll::TypedStorage<8, 256, ::std::array<::WeightedRandomList<::std::shared_ptr<::MobSpawnerData>>, 8>> mMobsMap;
    ::ll::TypedStorage<1, 2, ::Biome::CachedClientComponentData> mCachedClientComponentData;
    ::ll::TypedStorage<2, 2, ushort const>                       mId;
    ::ll::TypedStorage<8, 32, ::BiomeComponentStorage>           mBiomeComponentStorage;
    // NOLINTEND

public:
    // virtual functions
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~Biome() = default;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI Biome(ushort id, ::std::string_view name);

    MCAPI ::Biome&
    addTag(::HashedString tag, ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>& tagRegistry);

    MCAPI ::VanillaBiomeTypes getBiomeType() const;

    MCAPI int getMapFoliageColor() const;

    MCAPI int getMapGrassColor(::BlockPos const& pos) const;

    MCAPI float getTemperature(::BlockSource const& region, ::BlockPos const& pos) const;

    MCAPI ::Biome::BiomeTempCategory getTemperatureCategory() const;

    MCAPI float getTemperatureWorldGen(::BlockPos const& pos, short seaLevel) const;

    MCAPI bool hasTag(::WellKnownTagID const& tagID) const;

    MCAPI bool hasTag(
        uint64                                                                          tagHash,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const& tagRegistry
    ) const;

    MCAPI bool hasTag(
        ::IDType<::BiomeTagIDType> const&                                               tagID,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>> const& tagRegistry
    ) const;

    MCAPI bool isHumid() const;

    MCAPI ::Biome& setMapWaterColor(int color);

    MCAPI void writePacketData(
        ::CompoundTag&                                                            tag,
        ::TagRegistry<::IDType<::BiomeTagIDType>, ::IDType<::BiomeTagSetIDType>>& tagRegistry,
        ::BaseGameVersion const&                                                  baseGameVersion
    ) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::mce::Color getColorBySamplingSurroundings(
        ::BlockSource&                                                 region,
        ::BlockPos const&                                              pos,
        ::std::vector<::BlockPos> const&                               pattern,
        ::std::function<int(::Biome const&, ::BlockPos const&)> const& sampler
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::mce::Color const& BIRCH_FOLIAGE_COLOR();

    MCAPI static ::mce::Color const& DEFAULT_FOLIAGE_COLOR();

    MCAPI static ::mce::Color const& DEFAULT_GRASS_COLOR();

    MCAPI static ::mce::Color const& DEFAULT_UNDERWATER_COLOR();

    MCAPI static ::mce::Color const& DEFAULT_WATER_COLOR();

    MCAPI static ::mce::Color const& EVERGREEN_FOLIAGE_COLOR();

    MCAPI static float const& RAIN_TEMP_THRESHOLD();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(ushort id, ::std::string_view name);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN

    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCAPI static void** $vftable();
    // NOLINTEND
};
