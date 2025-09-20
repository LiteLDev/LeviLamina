#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/game_refs/WeakRef.h"
#include "mc/deps/scripting/lifetime_registry/StrongTypedObjectHandle.h"
#include "mc/deps/scripting/runtime/Result.h"
#include "mc/deps/scripting/runtime/Result_deprecated.h"
#include "mc/scripting/modules/minecraft/ScriptFacing.h"
#include "mc/world/level/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
class BlockPos;
class BlockSource;
class Vec3;
namespace ScriptModuleMinecraft { class BaseScriptBlockComponent; }
namespace ScriptModuleMinecraft { class IScriptBlockCustomComponentReader; }
namespace ScriptModuleMinecraft { class ScriptBlockComponents; }
namespace ScriptModuleMinecraft { class ScriptBlockPermutation; }
namespace ScriptModuleMinecraft { class ScriptBlockType; }
namespace ScriptModuleMinecraft { class ScriptDimension; }
namespace ScriptModuleMinecraft { class ScriptItemStack; }
namespace ScriptModuleMinecraft { class ScriptRGBA; }
namespace ScriptModuleMinecraft { struct ScriptLocationInUnloadedChunkError; }
namespace ScriptModuleMinecraft { struct ScriptLocationOutOfWorldBoundsError; }
namespace Scripting { struct ClassBinding; }
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
    MCNAPI bool _isValid() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    above(int steps) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    below(int steps) const;

    MCNAPI ::Vec3 bottomCenter() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    canBeDestroyedByLiquidSpread(::LiquidType liquidType) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    canContainLiquid(::LiquidType liquidType) const;

    MCNAPI ::Scripting::Result<
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

    MCNAPI ::Vec3 center() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    east(int steps) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getComponent_V1(
        ::ScriptModuleMinecraft::ScriptBlockComponents const& components,
        ::std::string const&                                  componentName
    );

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::BaseScriptBlockComponent>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getComponent_V2(
        ::ScriptModuleMinecraft::ScriptBlockComponents const& components,
        ::std::string const&                                  componentName
    );

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptDimension> getDimension() const;

    MCNAPI ::std::string getId_010() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptItemStack>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getItemStack(int amount, bool withData) const;

    MCNAPI ::Scripting::Result<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getLocalizationKey() const;

    MCNAPI ::Scripting::Result_deprecated<::Vec3> getLocation() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::BlockPos> getLocation_010() const;

    MCNAPI ::Scripting::Result<
        ::ScriptModuleMinecraft::ScriptRGBA,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getMapColor() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getPermutation() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockPermutation>
    getPermutation_010() const;

    MCNAPI ::Scripting::Result<
        ::std::optional<int>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getRedstonePower() const;

    MCNAPI ::Scripting::Result<
        ::std::vector<::std::string>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTags() const;

    MCNAPI ::std::vector<::std::string> getTags_010() const;

    MCNAPI ::Scripting::Result<
        ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getType() const;

    MCNAPI ::Scripting::Result<
        ::std::string,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getTypeId() const;

    MCNAPI ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType> getType_010() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    getWaterlogged() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    hasTag(::std::string const& tag) const;

    MCNAPI bool hasTag_010(::std::string const& tag) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isAir() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isLiquid() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    isLiquidBlocking(::LiquidType liquidType) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    isSolid() const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    liquidCanFlowFromDirection(::LiquidType liquidType, ::ScriptModuleMinecraft::ScriptFacing flowDirection) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    liquidSpreadCausesSpawn(::LiquidType liquidType) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    matches(
        ::std::string                                                                                  blockName,
        ::std::optional<::std::unordered_map<::std::string, ::std::variant<int, ::std::string, bool>>> properties
    ) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    north(int steps) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    offset(::Vec3 const& offset) const;

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData);

    MCNAPI void setPermutation_010(::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setType(
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& blockType
    );

    MCNAPI void setType_010(::ScriptModuleMinecraft::ScriptBlockType const& blockType);

    MCNAPI ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setWaterlogged(bool setWaterlogged);

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    south(int steps) const;

    MCNAPI ::Scripting::Result<
        bool,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    trySetPermutation(::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData) const;

    MCNAPI ::Scripting::Result<
        ::std::optional<::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlock>>,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    west(int steps) const;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static ::Scripting::ClassBinding
    bind(::WeakRef<::ScriptModuleMinecraft::IScriptBlockCustomComponentReader const> blockCustomComponentReader);

    MCNAPI static ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError>
    setPermutationStatic(
        ::BlockSource&                                         region,
        ::BlockPos const&                                      location,
        ::ScriptModuleMinecraft::ScriptBlockPermutation const& blockData
    );

    MCNAPI static ::Scripting::Result<
        void,
        ::ScriptModuleMinecraft::ScriptLocationInUnloadedChunkError,
        ::ScriptModuleMinecraft::ScriptLocationOutOfWorldBoundsError,
        ::Scripting::Error>
    setTypeStatic(
        ::BlockSource&    region,
        ::BlockPos const& location,
        ::std::variant<
            ::Scripting::StrongTypedObjectHandle<::ScriptModuleMinecraft::ScriptBlockType>,
            ::std::string> const& blockTypeOrBlockTypeName
    );
    // NOLINTEND
};

} // namespace ScriptModuleMinecraft
