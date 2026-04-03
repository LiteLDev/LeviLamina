#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Player;
class Vec3;
namespace Social::Events { class Event; }
namespace Social::Events { struct PlayerTelemetryLoadout; }
// clang-format on

namespace Social::Events {

class PlayerTelemetry {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnke716c1;
    ::ll::UntypedStorage<8, 64> mUnk53b940;
    ::ll::UntypedStorage<8, 64> mUnk6f8dfa;
    ::ll::UntypedStorage<8, 64> mUnk6ece61;
    ::ll::UntypedStorage<8, 64> mUnkd91fc1;
    ::ll::UntypedStorage<8, 64> mUnk7bdf26;
    ::ll::UntypedStorage<8, 64> mUnk953895;
    ::ll::UntypedStorage<8, 64> mUnke031eb;
    ::ll::UntypedStorage<8, 64> mUnkae0859;
    ::ll::UntypedStorage<8, 64> mUnk743504;
    ::ll::UntypedStorage<8, 24> mUnk9c704b;
    ::ll::UntypedStorage<8, 64> mUnk1ff91e;
    ::ll::UntypedStorage<8, 16> mUnkfa52ad;
    ::ll::UntypedStorage<8, 8>  mUnk7ed562;
    ::ll::UntypedStorage<8, 8>  mUnk2c6cf6;
    ::ll::UntypedStorage<8, 64> mUnkbc1121;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerTelemetry& operator=(PlayerTelemetry const&);
    PlayerTelemetry(PlayerTelemetry const&);

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI void AddBiomeVisited(::std::string biome);

    MCNAPI_C void ItemAcquired(::std::string const& itemName, ::std::string const& acquisitionMethod, int itemCount);

    MCNAPI_C void ItemEquipped(::std::string const& itemName, int slot, int enchantCount);

    MCNAPI void ItemUsed(::std::string const& itemName, ::std::string const& useMethod);

    MCNAPI_C void MobInteracted(
        ::std::string                                   InteractedEntity,
        bool                                            isBaby,
        bool                                            isGrowthPaused,
        ::std::string                                   interactionType,
        int                                             interactedEntityVariant,
        uchar                                           interactedEntityColor,
        ::std::string                                   playerMainHand,
        ::Social::Events::PlayerTelemetryLoadout const& loadout,
        ::std::map<::std::string, ::std::string> const& mobProps
    );

    MCNAPI PlayerTelemetry();

    MCNAPI void PopulateEvent(::Social::Events::Event& event) const;

    MCNAPI void SetPosition(::std::string dimension, ::Vec3 pos, double metersTravelled);

    MCNAPI void UpdatePlayerLoadout(::Player& player);

    MCNAPI void VehicleEntered(
        ::std::string const&                            vehicleName,
        int                                             vehicleVariant,
        ::std::map<::std::string, ::std::string> const& mobProps,
        int                                             passengerCount
    );

    MCNAPI void VehicleExited(
        ::std::string const&                            vehicleName,
        int                                             vehicleVariant,
        ::std::map<::std::string, ::std::string> const& mobProps,
        int                                             passengerCount,
        double                                          timeOnMountSeconds,
        double                                          distanceTravelled
    );

    MCNAPI ~PlayerTelemetry();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCNAPI void* $ctor();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};

} // namespace Social::Events
