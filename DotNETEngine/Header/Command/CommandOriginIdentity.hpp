#pragma once
#include <MC/CommandOriginIdentity.hpp>
#include "../MC/Types.hpp"
namespace MC
{
public
ref struct CommandOriginIdentity : ClassTemplate<CommandOriginIdentity, ::CommandOriginIdentity>
{
public:
    __ctor(CommandOriginIdentity, ::CommandOriginIdentity);
};
} // namespace MC
