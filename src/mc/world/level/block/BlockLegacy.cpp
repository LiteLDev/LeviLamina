#include "mc/world/level/block/BlockLegacy.h"

std::string const& BlockLegacy::getTypeName() const {
    return reinterpret_cast<BlockLegacy::NameInfo const*>(&(this->getRawNameHash()))->mFullName.getString();
}