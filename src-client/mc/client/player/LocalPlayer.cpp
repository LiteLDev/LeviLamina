#include "mc/client/player/LocalPlayer.h"

void LocalPlayer::closeContainerScreen(::SharedTypes::Legacy::ContainerType containerType) {
    mContainerCloseInfo->mShouldCloseContainerScreen = true;
    mContainerCloseInfo->mContainerTypeToClose       = containerType;

    switch (containerType) {
    case ::SharedTypes::Legacy::ContainerType::Inventory:
    case ::SharedTypes::Legacy::ContainerType::Container:
    case ::SharedTypes::Legacy::ContainerType::Workbench:
    case ::SharedTypes::Legacy::ContainerType::Furnace:
    case ::SharedTypes::Legacy::ContainerType::BrewingStand:
    case ::SharedTypes::Legacy::ContainerType::Anvil:
    case ::SharedTypes::Legacy::ContainerType::Dispenser:
    case ::SharedTypes::Legacy::ContainerType::Dropper:
    case ::SharedTypes::Legacy::ContainerType::Hopper:
    case ::SharedTypes::Legacy::ContainerType::Trade:
    case ::SharedTypes::Legacy::ContainerType::Grindstone:
    case ::SharedTypes::Legacy::ContainerType::BlastFurnace:
    case ::SharedTypes::Legacy::ContainerType::Smoker:
        this->deleteContainerManager();
        break;
    default:
        break;
    }
}
