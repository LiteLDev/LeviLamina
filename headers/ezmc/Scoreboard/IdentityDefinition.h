#pragma once

#include <string>

#include "../Actor/ActorUniqueID.h"
#include "../dll.h"
#include "PlayerScoreboardId.h"
#include "ScoreboardId.h"

class IdentityDefinition {
public:
    enum class Type : char { Invalid = 0,
                             Player  = 1,
                             Actor   = 2,
                             Fake    = 3 };

    ScoreboardId       id;
    bool               hidden_fake_player_type;
    PlayerScoreboardId player_id;
    ActorUniqueID      actor;
    std::string        fake_name;
    Type               type;

    MCAPI static IdentityDefinition Invalid;

    inline IdentityDefinition(ScoreboardId const& id, ActorUniqueID const& actor)
        : id(id)
        , actor(actor)
        , type(Type::Actor) {
        fake_name = std::to_string(actor.value);
        _init();
    }

    inline IdentityDefinition(ScoreboardId const& id, PlayerScoreboardId const& pid)
        : id(id)
        , player_id(pid)
        , type(Type::Player) {
        _init();
    }

    inline IdentityDefinition(ScoreboardId const& id, std::string const& fake)
        : id(id)
        , fake_name(fake)
        , type(Type::Fake) {
        _init();
    }

    inline IdentityDefinition(IdentityDefinition&& rhs)
        : id(std::move(rhs.id))
        , hidden_fake_player_type(std::move(rhs.hidden_fake_player_type))
        , player_id(std::move(rhs.player_id))
        , actor(std::move(rhs.actor))
        , fake_name(std::move(rhs.fake_name))
        , type(std::move(rhs.type)) {
        _init();
    }

    inline IdentityDefinition(IdentityDefinition const& rhs)
        : id(rhs.id)
        , hidden_fake_player_type(rhs.hidden_fake_player_type)
        , player_id(rhs.player_id)
        , actor(rhs.actor)
        , fake_name(rhs.fake_name)
        , type(rhs.type) {
        _init();
    }

    inline IdentityDefinition& operator=(IdentityDefinition&& rhs) {
        id                      = std::move(rhs.id);
        hidden_fake_player_type = std::move(rhs.hidden_fake_player_type);
        player_id               = std::move(rhs.player_id);
        actor                   = std::move(rhs.actor);
        fake_name               = std::move(rhs.fake_name);
        type                    = std::move(rhs.type);
        _init();
        return *this;
    }

    inline IdentityDefinition& operator=(IdentityDefinition const& rhs) {
        id                      = rhs.id;
        hidden_fake_player_type = rhs.hidden_fake_player_type;
        player_id               = rhs.player_id;
        actor                   = rhs.actor;
        fake_name               = rhs.fake_name;
        type                    = rhs.type;
        _init();
        return *this;
    }

private:
    inline void _init() {
        id.def = this;
    }
};