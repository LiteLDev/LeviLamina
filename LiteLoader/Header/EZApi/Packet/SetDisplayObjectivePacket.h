#pragma once

#include "../Core/Packet.h"
#include "../Scoreboard/ObjectiveSortOrder.h"
#include "../dll.h"

class SetDisplayObjectivePacket : public Packet {
public:
    std::string        slot, objective_name, display_name, criteria_name;
    ObjectiveSortOrder order;

    inline ~SetDisplayObjectivePacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};