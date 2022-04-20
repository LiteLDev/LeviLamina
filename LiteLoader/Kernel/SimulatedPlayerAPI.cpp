#include <Global.h>
#include <MC/SimulatedPlayer.hpp>
#include <MC/BlockInstance.hpp>

static_assert(sizeof(ScriptNavigationResult) == 32);

bool SimulatedPlayer::simulateDestory()
{
    FaceID face = FaceID::Unknown;
    auto block = getBlockFromViewVector(face);
    return simulateDestroyBlock(block.getPosition(), (ScriptFacing)face);
}

bool SimulatedPlayer::simulateUseItem()
{
    auto slot = getSelectedItemSlot();
    return simulateUseItemInSlot(slot);
}
