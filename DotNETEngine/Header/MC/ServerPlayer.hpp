#pragma once
#include <MC/ServerPlayer.hpp>
#include "Player.hpp"

namespace MC
{
ref class ServerPlayer : public Player
{
public:
    __ctor_base(ServerPlayer, ::ServerPlayer, Player);
};
} // namespace MC