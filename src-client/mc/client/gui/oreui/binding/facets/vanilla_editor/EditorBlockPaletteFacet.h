#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct EditorBlockPaletteFacet {
public:
    // EditorBlockPaletteFacet inner types declare
    // clang-format off
    struct BlockPalette;
    struct BlockPaletteItem;
    struct BlockPaletteItemTypeOreUI;
    struct WeightedBlock;
    // clang-format on

    // EditorBlockPaletteFacet inner types define
    enum class BlockPaletteItemType : int {};

    enum class BlockPaletteItemTypestruct : uint {};

    struct BlockPalette {};

    struct BlockPaletteItem {};

    struct BlockPaletteItemTypeOreUI {
    public:
        // BlockPaletteItemTypeOreUI inner types declare
        // clang-format off
        struct EditorBlockPaletteFacet;
        // clang-format on

        // BlockPaletteItemTypeOreUI inner types define
        struct EditorBlockPaletteFacet {
        public:
            // EditorBlockPaletteFacet inner types define
            enum class BlockPaletteItem : uint {};
        };
    };

    struct WeightedBlock {};
};

} // namespace OreUI
