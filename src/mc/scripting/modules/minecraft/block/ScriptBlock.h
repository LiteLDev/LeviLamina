#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/external/scripting/binding_type/ClassBindingBuilder.h"
#include "mc/external/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/external/scripting/runtime/Result.h"
#include "mc/external/scripting/runtime/Result_deprecated.h"
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
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { class WeakLifetimeScope; }
namespace Scripting { struct Error; }
// clang-format on

namespace ScriptModuleMinecraft {

class ScriptBlock {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 16> mUnk53b5f2;
    ::ll::UntypedStorage<8, 8>  mUnk4d878d;
    ::ll::UntypedStorage<4, 12> mUnk9176f9;
    // NOLINTEND

public:
    // prevent constructor by default
    ScriptBlock& operator=(ScriptBlock const&);
    ScriptBlock(ScriptBlock const&);
    ScriptBlock();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI ScriptBlock(::ScriptModuleMinecraft::ScriptBlock&&);

    MCAPI ScriptBlock(::BlockSource& region, ::BlockPos pos, ::Scripting::WeakLifetimeScope const& scope);

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    above(int steps) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    below(int steps) const;

    MCAPI ::Vec3 bottomCenter() const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    canPlace(
        ::std::variant<
            ::std::string,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>> const& blockToPlace,
        ::std::optional<::ScriptModuleMinecraft::ScriptFacing>                                            faceToPlaceOn
    ) const;

    MCAPI ::Vec3 center() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    east(int steps) const;

    MCAPI ::Block const& getBlock() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getComponent(::std::string const& componentName);

    MCAPI ::Scripting::Result_deprecated<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>>
    getComponent_010(::std::string const& componentName);

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    MCAPI ::std::string getId_010() const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getItemStack(int amount, bool withData) const;

    MCAPI ::Scripting::Result_deprecated<::Vec3> getLocation() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::BlockPos> getLocation_010() const;

    MCAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptRGBA,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getMapColor() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPermutation() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>
    getPermutation_010() const;

    MCAPI ::Scripting::Result<
        ::std::optional<int>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getRedstonePower() const;

    MCAPI ::Scripting::Result<
        ::std::vector<::std::string>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTags() const;

    MCAPI ::std::vector<::std::string> getTags_010() const;

    MCAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getType() const;

    MCAPI ::Scripting::Result<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTypeId() const;

    MCAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> getType_010() const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getWaterlogged() const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    hasTag(::std::string const& tag) const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isAir() const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isLiquid() const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isSolid() const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    matches(
        ::std::string                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    north(int steps) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    offset(::Vec3 const& offset) const;

    MCAPI ::ScriptModuleMinecraft::ScriptBlock& operator=(::ScriptModuleMinecraft::ScriptBlock&&);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setType(::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& blockType);

    MCAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setWaterlogged(bool setWaterlogged);

    MCAPI ::Scripting::Result<void> setWaterlogged_010(bool setWaterlogged);

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    south(int steps) const;

    MCAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    trySetPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData) const;

    MCAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    west(int steps) const;

    MCAPI ~ScriptBlock();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Scripting::ClassBindingBuilder<::ScriptModuleMinecraft::ScriptBlock> bind();

    MCAPI static ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutationStatic(
        ::BlockSource&                                         region,
        ::BlockPos const&                                      location,
        ::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData
    );

    MCAPI static ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setTypeStatic(
        ::BlockSource&    region,
        ::BlockPos const& location,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& blockType
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::ScriptModuleMinecraft::ScriptBlock&&);

    MCAPI void* $ctor(::BlockSource& region, ::BlockPos pos, ::Scripting::WeakLifetimeScope const& scope);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
