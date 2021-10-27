#pragma once

#include <initializer_list>
#include <vector>

#include "../Core/Packet.h"
#include "../Scoreboard/Objective.h"
#include "../Scoreboard/ScorePacketInfo.h"
#include "../dll.h"

enum class ScorePacketType : char { set,
                                    remove };

class SetScorePacket : public Packet {
    MCAPI SetScorePacket(ScorePacketType, ScoreboardId const&, Objective const&);
    inline SetScorePacket(ScoreboardId const& id)
        : type(ScorePacketType::remove)
        , infos{id} {
    }
    inline SetScorePacket(std::vector<ScorePacketInfo> infos)
        : type(ScorePacketType::set)
        , infos(std::move(infos)) {
    }

public:
    ScorePacketType              type;
    std::vector<ScorePacketInfo> infos;

    inline SetScorePacket() {
    }

    static SetScorePacket change(std::vector<ScorePacketInfo> infos) {
        return {std::move(infos)};
    }
    static SetScorePacket change(ScorePacketType type, ScoreboardId const& id, Objective const& obj) {
        return {type, id, obj};
    }
    static SetScorePacket remove(ScoreboardId const& id) {
        return {id};
    }
    static SetScorePacket remove(ScoreboardId const& id, Objective const& obj) {
        return {ScorePacketType::remove, id, obj};
    }

    inline ~SetScorePacket() {
    }
    MCAPI virtual MinecraftPacketIds getId() const;
    MCAPI virtual std::string        getName() const;
    MCAPI virtual void               write(BinaryStream&) const;

private:
    MCAPI virtual StreamReadResult _read(ReadOnlyBinaryStream&);
};