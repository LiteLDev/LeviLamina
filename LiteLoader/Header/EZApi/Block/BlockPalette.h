#pragma once

#include <string>

#include "../dll.h"

class BlockPalette {
public:
    void initFromBlockDefinitions(void);

    class Block const&       getBlock(unsigned int const&) const;
    class Block const&       getBlock(class CompoundTag const&) const;
    class BlockLegacy const* getBlockLegacy(std::string const&) const;
    class Block const&       getBlockFromLegacyData(struct NewBlockID, unsigned int) const;

    class Block const& switchBlock(class Block const&, class BlockLegacy const&) const;

private:
    bool shouldWarnFor(struct NewBlockID, unsigned short) const;
};