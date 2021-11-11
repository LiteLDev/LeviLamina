#pragma once
#include <Global.h>
#include <MCApi/Mob.hpp>
#include <ActorAPI.h>

struct MobObj : public Mob
{
	LIAPI UserEntityIdentifierComponent* getUserEntityIdentifierComponent();
};