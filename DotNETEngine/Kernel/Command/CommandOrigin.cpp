#include "../../Header/Command/CommandOrigin.hpp"

#include "../../Header/MC/ServerPlayer.hpp"
#include "../../Header/MC/Level.hpp"
#include "../../Header/MC/BlockPos.hpp"
#include "../../Header/MC/Vec3.hpp"
#include "../../Header/MC/Vec2.hpp"
#include "../../Header/MC/Dimension.hpp"
#include "../../Header/MC/NetworkIdentifier.hpp"
#include "../../Header/Command/CommandOriginIdentity.hpp"
#include "../../Header/Command/CommandOriginData.hpp"
#include "../../Header/Command/CommandPositionFloat.hpp"
#include "../../Header/MC/CompoundTag.hpp"
#include "../../Header/Command/CommandArea.hpp"
#include "../../Header/Command/Command.hpp"

enum AbilitiesIndex;
enum CommandOriginType : char;

namespace MC
{

inline ServerPlayer ^ CommandOrigin::Player::get()
{
    return gcnew ServerPlayer(NativePtr->getPlayer());
}

String ^ CommandOrigin::RequestId::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getRequestId());
}

String ^ CommandOrigin::Name::get()
{
    return marshalString<Encoding::E_UTF8>(NativePtr->getName());
}

BlockPos ^ CommandOrigin::BlockPosition::get()
{
    return gcnew BlockPos(NativePtr->getBlockPosition());
}

Vec3 ^ CommandOrigin::WorldPosition::get()
{
    return gcnew Vec3(NativePtr->getWorldPosition());
}

Vec2 ^ CommandOrigin::Rotation::get()
{
    auto op = NativePtr->getRotation();
    return op ? gcnew Vec2(*op) : nullptr;
}

Level ^ CommandOrigin::Level::get()
{
    return gcnew MC::Level(NativePtr->getLevel());
}

Dimension ^ CommandOrigin::Dimension::get()
{
    return gcnew MC::Dimension(NativePtr->getDimension());
}

Actor ^ CommandOrigin::Entity::get()
{
    return gcnew Actor(NativePtr->getEntity());
}

// MC::CommandPermissionLevel CommandOrigin::PermissionsLevel::get()
//{
//     return MC::CommandPermissionLevel(NativePtr->getPermissionsLevel());
// }

CommandOrigin ^ CommandOrigin::Clone()
{
    return gcnew CommandOrigin(NativePtr->clone().release(), true);
}

BlockPos ^ CommandOrigin::CursorHitBlockPos::get()
{
    auto op = NativePtr->getCursorHitBlockPos();
    return op ? gcnew BlockPos(*op) : nullptr;
}

Vec3 ^ CommandOrigin::CursorHitPos::get()
{
    auto op = NativePtr->getCursorHitPos();
    return op ? gcnew Vec3(*op) : nullptr;
}

bool CommandOrigin::HasChatPerms::get()
{
    return NativePtr->hasChatPerms();
}

bool CommandOrigin::HasTellPerms::get()
{
    return NativePtr->hasTellPerms();
}

bool CommandOrigin::CanUseAbility(int _EnumAbilitiesIndex)
{
    return NativePtr->canUseAbility(::AbilitiesIndex(_EnumAbilitiesIndex));
}

bool CommandOrigin::IsWorldBuilder::get()
{
    return NativePtr->isWorldBuilder();
}

bool CommandOrigin::CanUseCommandsWithoutCheatsEnabled::get()
{
    return NativePtr->canUseCommandsWithoutCheatsEnabled();
}

bool CommandOrigin::IsSelectorExpansionAllowed::get()
{
    return NativePtr->isSelectorExpansionAllowed();
}

NetworkIdentifier ^ CommandOrigin::SourceId::get()
{
    return gcnew NetworkIdentifier((::NetworkIdentifier*)&NativePtr->getSourceId());
}

unsigned char CommandOrigin::SourceSubId::get()
{
    return NativePtr->getSourceSubId();
}

CommandOrigin ^ CommandOrigin::OutputReceiver::get()
{
    return gcnew CommandOrigin(&(::CommandOrigin&)NativePtr->getOutputReceiver());
}

CommandOriginIdentity ^ CommandOrigin::Identity::get()
{
    return gcnew CommandOriginIdentity(&NativePtr->getIdentity());
}

int CommandOrigin::OriginType::get()
{
    return int(NativePtr->getOriginType());
}

CommandOriginData ^ CommandOrigin::ToCommandOriginData()
{
    return gcnew CommandOriginData(NativePtr->toCommandOriginData());
}

Mce::UUID ^ CommandOrigin::UUID::get()
{
    return gcnew Mce::UUID((::mce::UUID&)NativePtr->getUUID());
}

void CommandOrigin::UpdateValues()
{
    NativePtr->updateValues();
}

Vec3 ^ CommandOrigin::GetExecutePosition(int a0, CommandPositionFloat ^ a1)
{
    return gcnew Vec3((::Vec3)NativePtr->getExecutePosition(a0, *(a1->NativePtr)));
}

CompoundTag ^ CommandOrigin::Serialize()
{
    return gcnew CompoundTag(&NativePtr->serialize());
}

bool CommandOrigin::IsValid::get()
{
    return NativePtr->isValid();
}

void CommandOrigin::UUID::set(Mce::UUID ^ a0)
{
    NativePtr->_setUUID(a0);
}

CommandArea ^ CommandOrigin::GetAreaAt(BlockPos ^ bp0, BlockPos ^ bp1, int a0, bool a1)
{
    return gcnew CommandArea(NativePtr->getAreaAt(bp0, bp1, a0, a1).release(), true);
}

CommandArea ^ CommandOrigin::GetAreaAt(BlockPos ^ bp0, int a0)
{
    return gcnew CommandArea(NativePtr->getAreaAt(bp0, a0).release(), true);
}

CommandArea ^ CommandOrigin::GetAreaAtWithBuffer(BlockPos ^ bp0, BlockPos ^ bp1, int a0, bool a1)
{
    return gcnew CommandArea(NativePtr->getAreaAtWithBuffer(bp0, bp1, a0, a1).release(), true);
}

CommandArea ^ CommandOrigin::GetAreaAtWithBuffer(BlockPos ^ bp0,int a0)
{
    return gcnew CommandArea(NativePtr->getAreaAtWithBuffer(bp0, a0).release(), true);
}

} // namespace MC