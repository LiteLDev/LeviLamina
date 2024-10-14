#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"

// auto generated forward declare list
// clang-format off
class Block;
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlock {
public:
    // prevent constructor by default
    ScriptBlock& operator=(ScriptBlock const&);
    ScriptBlock(ScriptBlock const&);
    ScriptBlock();

public:
    // NOLINTBEGIN
    MCAPI ScriptBlock(class ScriptModuleMinecraft::ScriptBlock&& rhs);

    MCAPI ScriptBlock(class BlockSource& region, class BlockPos pos, class Scripting::WeakLifetimeScope const& scope);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    above(int steps) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    below(int steps) const;

    MCAPI class Vec3 bottomCenter() const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    canPlace(
        std::variant<
            std::string,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>> const&
                                                             blockToPlace,
        std::optional<::ScriptModuleMinecraft::ScriptFacing> faceToPlaceOn
    ) const;

    MCAPI class Vec3 center() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    east(int steps) const;

    MCAPI class Block const& getBlock() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getComponent(std::string const& componentName);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::BaseScriptBlockComponent>>>
    getComponent_010(std::string const& componentName);

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    MCAPI std::string getId_010() const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptItemStack>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getItemStack(int amount, bool withData) const;

    MCAPI class Scripting::Result<class Vec3> getLocation() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class BlockPos> getLocation_010() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPermutation() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockPermutation>
    getPermutation_010() const;

    MCAPI class Scripting::Result<
        std::optional<int>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getRedstonePower() const;

    MCAPI class Scripting::Result<
        std::vector<std::string>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTags() const;

    MCAPI std::vector<std::string> getTags_010() const;

    MCAPI class Scripting::Result<
        class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getType() const;

    MCAPI class Scripting::Result<
        std::string,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTypeId() const;

    MCAPI class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType> getType_010() const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getWaterlogged() const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    hasTag(std::string const& tag) const;

    MCAPI bool hasTag_010(std::string const& tag) const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isAir() const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isLiquid() const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isSolid() const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    matches(
        std::string                                                                          blockName,
        std::optional<std::unordered_map<std::string, std::variant<int, std::string, bool>>> properties
    ) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    north(int steps) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    offset(class Vec3 const& offset) const;

    MCAPI class ScriptModuleMinecraft::ScriptBlock& operator=(class ScriptModuleMinecraft::ScriptBlock&& rhs);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const& blockData);

    MCAPI void setPermutation_010(class ScriptModuleMinecraft::ScriptBlockPermutation const& blockData);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setType(std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const& blockType);

    MCAPI void setType_010(class ScriptModuleMinecraft::ScriptBlockType const& blockType);

    MCAPI class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setWaterlogged(bool setWaterlogged);

    MCAPI class Scripting::Result<void> setWaterlogged_010(bool setWaterlogged);

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    south(int steps) const;

    MCAPI class Scripting::Result<
        bool,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    trySetPermutation(class ScriptModuleMinecraft::ScriptBlockPermutation const& blockData) const;

    MCAPI class Scripting::Result<
        std::optional<class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlock>>,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    west(int steps) const;

    MCAPI ~ScriptBlock();

    MCAPI static class Scripting::ClassBindingBuilder<class ScriptModuleMinecraft::ScriptBlock> bind();

    MCAPI static class Scripting::Result<
        void,
        struct ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        struct ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        struct Scripting::Error>
    setTypeStatic(
        class BlockSource&    region,
        class BlockPos const& location,
        std::variant<
            class Scripting::StrongTypedObjectHandle<class ScriptModuleMinecraft::ScriptBlockType>,
            std::string> const& blockType
    );

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::vector<std::string> _collectTags(class Block const& block) const;

    MCAPI bool _isValid() const;

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

}; // namespace ScriptModuleMinecraft
