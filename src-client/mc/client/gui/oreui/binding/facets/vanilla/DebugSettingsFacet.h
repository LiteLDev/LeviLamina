#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/client/gui/oreui/binding/FacetBase.h"

// auto generated forward declare list
// clang-format off
namespace OreUI { class WorldSettingsProvider_DEPRECATED; }
namespace OreUI { struct BiomeData; }
// clang-format on

namespace OreUI {

class DebugSettingsFacet : public ::OreUI::FacetBase<::OreUI::DebugSettingsFacet> {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                                          mIsDirty;
    ::ll::TypedStorage<8, 24, ::std::vector<::OreUI::BiomeData>>                            mBiomes;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnableGameVersionOverride;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mDefaultGameVersion;
    ::ll::TypedStorage<8, 32, ::std::string>                                                mTypedGameVersion;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnableSpawnBiome;
    ::ll::TypedStorage<4, 4, int>                                                           mLocalSpawnBiomeId;
    ::ll::TypedStorage<4, 4, int>                                                           mLocalDimensionId;
    ::ll::TypedStorage<1, 1, bool>                                                          mEnableBiomeOverride;
    ::ll::TypedStorage<4, 4, int>                                                           mLocalBiomeOverrideId;
    ::ll::TypedStorage<8, 16, ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED>> mWorldSettingsProvider;
    // NOLINTEND

public:
    // prevent constructor by default
    DebugSettingsFacet();

public:
    // virtual functions
    // NOLINTBEGIN
    virtual bool update() /*override*/;

    virtual ~DebugSettingsFacet() /*override*/;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI explicit DebugSettingsFacet(
        ::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED> worldSettingsProvider
    );

    MCAPI void _setGameVersion(::std::string const& versionName);

    MCFOLD int getBiomeOverride() const;

    MCFOLD bool getEnableGameVersionOverride() const;

    MCAPI bool getFlatNether() const;

    MCFOLD ::std::string const& getGameVersionOverride() const;

    MCFOLD int getSpawnBiome() const;

    MCFOLD int getSpawnDimension() const;

    MCAPI bool isEnableBiomeOverride() const;

    MCFOLD bool isEnableSpawnBiome() const;

    MCAPI void setBiomeOverride(int biomeIndex);

    MCAPI void setEnableBiomeOverride(bool enable);

    MCAPI void setEnableGameVersionOverride(bool doOverride);

    MCAPI void setEnableSpawnBiome(bool enable);

    MCAPI void setFlatNether(bool isFlat);

    MCAPI void setGameVersionOverride(::std::string const& version);

    MCAPI void setSpawnBiome(int biomeIndex);

    MCAPI void setSpawnDimension(int spawnDimensionIndex);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::add_lvalue_reference_t<char const[]> NAME();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::std::shared_ptr<::OreUI::WorldSettingsProvider_DEPRECATED> worldSettingsProvider);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND

public:
    // virtual function thunks
    // NOLINTBEGIN
    MCFOLD bool $update();
    // NOLINTEND

public:
    // vftables
    // NOLINTBEGIN
    MCNAPI static void** $vftable();
    // NOLINTEND
};

} // namespace OreUI
