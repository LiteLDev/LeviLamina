#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/utility/NonOwnerPointer.h"
#include "mc/world/level/levelgen/structure/StructureBlockPaletteLoadResult.h"

class StructureBlockPalette {
public:
    // StructureBlockPalette inner types declare
    // clang-format off
    struct BlockPositionData;
    // clang-format on

    // StructureBlockPalette inner types define
    struct BlockPositionData {
    public:
        // prevent constructor by default
        BlockPositionData& operator=(BlockPositionData const&);
        BlockPositionData();

    public:
        // NOLINTBEGIN
        MCAPI BlockPositionData(struct StructureBlockPalette::BlockPositionData const& rhs);

        MCAPI bool isValid() const;

        MCAPI ~BlockPositionData();

        // NOLINTEND

        // thunks
    public:
        // NOLINTBEGIN
        template <class... Args>
        auto* ctor$(Args... args) {
            return std::construct_at(this, std::forward<Args>(args)...);
        }

        MCAPI void dtor$();

        // NOLINTEND
    };

public:
    // prevent constructor by default
    StructureBlockPalette& operator=(StructureBlockPalette const&);
    StructureBlockPalette(StructureBlockPalette const&);

public:
    // NOLINTBEGIN
    MCAPI StructureBlockPalette();

    MCAPI StructureBlockPalette(class StructureBlockPalette&&);

    MCAPI void addBlockPositionData(uint64 id, struct StructureBlockPalette::BlockPositionData blockPositionData);

    MCAPI uint64 addMapping(std::unique_ptr<class CompoundTag> serializationId);

    MCAPI std::unordered_map<uint64, struct StructureBlockPalette::BlockPositionData> const&
          getAllBlockPositionData() const;

    MCAPI class Block const& getBlock(
        class BlockPalette const&                                       blockPalette,
        uint64                                                          paletteId,
        class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCAPI struct StructureBlockPalette::BlockPositionData const* getBlockPositionData(uint64 blockIndex) const;

    MCAPI uint64 getSize() const;

    MCAPI bool load(class CompoundTag const& tag, int formatVersion);

    MCAPI void removeBlockPositionData(uint64 id);

    MCAPI std::unique_ptr<class CompoundTag> save() const;

    MCAPI class Block const* tryGetBlock(
        uint64                                                          paletteId,
        class Bedrock::NonOwnerPointer<class IUnknownBlockTypeRegistry> unknownBlockRegistry
    ) const;

    MCAPI ~StructureBlockPalette();

    // NOLINTEND

    // protected:
    // NOLINTBEGIN
    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPalette(class CompoundTag const& tag);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionData(class CompoundTag const& tag, int index);

    MCAPI ::StructureBlockPaletteLoadResult _parseBlockPositionDataList(class CompoundTag const& tag);

    MCAPI void _saveBlockPositionDataList(class CompoundTag& tag) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _contentErrorMissingField(std::string const& tagName) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    template <class... Args>
    auto* ctor$(Args... args) {
        return std::construct_at(this, std::forward<Args>(args)...);
    }

    MCAPI void dtor$();

    // NOLINTEND
};
