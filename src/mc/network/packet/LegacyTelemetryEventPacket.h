#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/common/bedrock/Result.h"
#include "mc/entity/utilities/ActorDamageCause.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/MinecraftPacketIds.h"
#include "mc/events/MinecraftEventing.h"
#include "mc/network/packet/Packet.h"
#include "mc/world/AutomaticID.h"
#include "mc/world/item/components/ItemUseMethod.h"

class LegacyTelemetryEventPacket : public ::Packet {
public:
    // LegacyTelemetryEventPacket inner types declare
    // clang-format off
    struct Data;
    // clang-format on

    // LegacyTelemetryEventPacket inner types define
    enum class Type {};

    struct Data {
    public:
        // prevent constructor by default
        Data& operator=(Data const&);
        Data(Data const&);

    public:
        // NOLINTBEGIN
        MCAPI Data();

        MCAPI ~Data();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    LegacyTelemetryEventPacket& operator=(LegacyTelemetryEventPacket const&);
    LegacyTelemetryEventPacket(LegacyTelemetryEventPacket const&);

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LegacyTelemetryEventPacket();

    // vIndex: 1
    virtual ::MinecraftPacketIds getId() const;

    // vIndex: 2
    virtual std::string getName() const;

    // vIndex: 4
    virtual void write(class BinaryStream&) const;

    // vIndex: 8
    virtual class Bedrock::Result<void> _read(class ReadOnlyBinaryStream&);

    MCAPI LegacyTelemetryEventPacket();

    MCAPI LegacyTelemetryEventPacket(class Player const&, std::string const&);

    MCAPI LegacyTelemetryEventPacket(class Player const*, DimensionType);

    MCAPI LegacyTelemetryEventPacket(class Player const*, gsl::not_null<class Mob const*>);

    MCAPI LegacyTelemetryEventPacket(class Player const*, struct LegacyTelemetryEventPacket::Data const&);

    MCAPI LegacyTelemetryEventPacket(class Player const&, std::string const&, int);

    MCAPI LegacyTelemetryEventPacket(class Player const*, DimensionType, DimensionType);

    MCAPI LegacyTelemetryEventPacket(class Player const*, class Raid const&, bool);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        gsl::not_null<class Actor const*>,
        ::MinecraftEventing::InteractionType
    );

    MCAPI LegacyTelemetryEventPacket(class Player const*, ::MinecraftEventing::AchievementIds, bool);

    MCAPI LegacyTelemetryEventPacket(class Player const*, int, gsl::not_null<class Actor const*>);

    MCAPI LegacyTelemetryEventPacket(class Player const&, class ItemStackBase const&, ::ItemUseMethod, int);

    MCAPI LegacyTelemetryEventPacket(class Player const*, short, uint, short);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        class Actor const*,
        gsl::not_null<class Mob const*>,
        ::ActorDamageCause,
        ::ActorType
    );

    MCAPI LegacyTelemetryEventPacket(class Player const*, std::string const&, int, int, std::string const&);

    MCAPI LegacyTelemetryEventPacket(class Player const*, int, int, ::ActorDamageCause, bool);

    MCAPI LegacyTelemetryEventPacket(
        class Player const*,
        class Actor const*,
        gsl::not_null<class Mob const*>,
        ::ActorDamageCause,
        std::string,
        int,
        ::ActorType
    );

    MCAPI class LegacyTelemetryEventPacket& operator=(class LegacyTelemetryEventPacket&&);

    // NOLINTEND
};
