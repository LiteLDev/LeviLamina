#pragma once
#include <MC/CommandOriginData.hpp>
#include "../MC/Types.hpp"
namespace MC
{
public
ref struct CommandOriginData : ClassTemplate<CommandOriginData, ::CommandOriginData>
{
public:
    __ctor_all(CommandOriginData, ::CommandOriginData);

    static CommandOriginData ^ Create(CommandOriginData ^ val);
    static CommandOriginData ^ Create();
    CommandOriginData ^ operator=(CommandOriginData ^ b);
};
} // namespace MC
