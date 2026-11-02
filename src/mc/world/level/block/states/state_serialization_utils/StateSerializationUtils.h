#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/AnvilDamage.h"
#include "mc/world/level/block/AttachmentType.h"
#include "mc/world/level/block/BigDripleafTilt.h"
#include "mc/world/level/block/BlockColor.h"
#include "mc/world/level/block/CauldronLiquidType.h"
#include "mc/world/level/block/ChemistryTableType.h"
#include "mc/world/level/block/ChiselType.h"
#include "mc/world/level/block/CoralColor.h"
#include "mc/world/level/block/CornerShape.h"
#include "mc/world/level/block/CreakingHeartState.h"
#include "mc/world/level/block/DirtType.h"
#include "mc/world/level/block/DoublePlantType.h"
#include "mc/world/level/block/EggCount.h"
#include "mc/world/level/block/FlowerType.h"
#include "mc/world/level/block/FrontAndTop.h"
#include "mc/world/level/block/HatchLevel.h"
#include "mc/world/level/block/LeafSize.h"
#include "mc/world/level/block/LeverDirection.h"
#include "mc/world/level/block/MonsterEggStoneType.h"
#include "mc/world/level/block/NewLeavesType.h"
#include "mc/world/level/block/NewLogType.h"
#include "mc/world/level/block/OldLeavesType.h"
#include "mc/world/level/block/OldLogType.h"
#include "mc/world/level/block/PaleMossCarpetSide.h"
#include "mc/world/level/block/PillarAxis.h"
#include "mc/world/level/block/PortalAxis.h"
#include "mc/world/level/block/PotentSulfurState.h"
#include "mc/world/level/block/PrismarineBlockType.h"
#include "mc/world/level/block/RedstoneSide.h"
#include "mc/world/level/block/SandType.h"
#include "mc/world/level/block/SandstoneType.h"
#include "mc/world/level/block/SaplingType_DEPRECATED.h"
#include "mc/world/level/block/SeagrassType.h"
#include "mc/world/level/block/SpeleothemThickness.h"
#include "mc/world/level/block/SpongeType.h"
#include "mc/world/level/block/StalkThickness.h"
#include "mc/world/level/block/StoneBrickType.h"
#include "mc/world/level/block/StoneSlabType.h"
#include "mc/world/level/block/StoneSlabType2.h"
#include "mc/world/level/block/StoneSlabType3.h"
#include "mc/world/level/block/StoneSlabType4.h"
#include "mc/world/level/block/StoneType.h"
#include "mc/world/level/block/StructureBlockType.h"
#include "mc/world/level/block/StructureVoidType.h"
#include "mc/world/level/block/TallGrassType.h"
#include "mc/world/level/block/TorchFacing.h"
#include "mc/world/level/block/VaultBlockState.h"
#include "mc/world/level/block/VerticalHalfEnum.h"
#include "mc/world/level/block/WallBlockType.h"
#include "mc/world/level/block/WallConnectionType.h"
#include "mc/world/level/block/WoodType.h"
#include "mc/world/level/block/states/state_serialization_utils/EnumStateMapper.h"

namespace StateSerializationUtils {
// functions
// NOLINTBEGIN
MCNAPI ::WallConnectionType fromJavaNbtString(::std::string_view tag);
// NOLINTEND

// static variables
// NOLINTBEGIN
MCNAPI ::StateSerializationUtils::EnumStateMapper<::AnvilDamage> const& ANVIL_DAMAGE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::AttachmentType> const& ATTACHMENT_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::BigDripleafTilt> const& BIG_DRIPLEAF_TILT_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::BlockColor> const& BLOCK_COLOR_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::CauldronLiquidType> const& CAULDRON_LIQUID_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::ChemistryTableType> const& CHEMISTRY_TABLE_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::ChiselType> const& CHISEL_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::CoralColor> const& CORAL_COLOR_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::CornerShape> const& CORNER_SHAPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::CreakingHeartState> const& CREAKING_HEART_STATE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::DirtType> const& DIRT_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::DoublePlantType> const& DOUBLE_PLANT_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::EggCount> const& EGG_COUNT_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::FlowerType> const& FLOWER_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::FrontAndTop> const& FRONT_AND_TOP_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::HatchLevel> const& HATCH_LEVEL_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::LeafSize> const& LEAF_SIZE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::LeverDirection> const& LEVER_DIRECTION_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::MonsterEggStoneType> const& MONSTER_EGG_STONE_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::NewLeavesType> const& NEW_LEAVES_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::NewLogType> const& NEW_LOG_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::OldLeavesType> const& OLD_LEAVES_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::OldLogType> const& OLD_LOG_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::PaleMossCarpetSide> const& PALE_MOSS_CARPET_SIDE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::PillarAxis> const& PILLAR_AXIS_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::PortalAxis> const& PORTAL_AXIS_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::PotentSulfurState> const& POTENT_SULFUR_STATE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::PrismarineBlockType> const& PRISMARINE_BLOCK_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::RedstoneSide> const& REDSTONE_SIDE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::SandstoneType> const& SANDSTONE_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::SandType> const& SAND_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::SaplingType_DEPRECATED> const& SAPLING_TYPE_DEPRECATED_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::SeagrassType> const& SEAGRASS_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::SpeleothemThickness> const& SPELEOTHEM_THICKNESS_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::SpongeType> const& SPONGE_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StalkThickness> const& STALK_THICKNESS_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StoneBrickType> const& STONE_BRICK_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType2> const& STONE_SLAB_TYPE_2_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType3> const& STONE_SLAB_TYPE_3_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType4> const& STONE_SLAB_TYPE_4_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType> const& STONE_SLAB_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StoneType> const& STONE_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StructureBlockType> const& STRUCTURE_BLOCK_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::StructureVoidType> const& STRUCTURE_VOID_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::TallGrassType> const& TALL_GRASS_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::TorchFacing> const& TORCH_FACING_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::VaultBlockState> const& VAULT_BLOCK_STATE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::VerticalHalfEnum> const& VERTICAL_HALF_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::WallBlockType> const& WALL_BLOCK_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::WallConnectionType> const& WALL_CONNECTION_TYPE_MAPPER();

MCNAPI ::StateSerializationUtils::EnumStateMapper<::WoodType> const& WOOD_TYPE_MAPPER();
// NOLINTEND

} // namespace StateSerializationUtils
