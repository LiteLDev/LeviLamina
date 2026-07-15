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
MCAPI ::WallConnectionType fromJavaNbtString(::std::string_view tag);
// NOLINTEND

// static variables
// NOLINTBEGIN
#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::AnvilDamage> const& ANVIL_DAMAGE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::AnvilDamage> const& ANVIL_DAMAGE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::AttachmentType> const& ATTACHMENT_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::AttachmentType> const& ATTACHMENT_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::BigDripleafTilt> const& BIG_DRIPLEAF_TILT_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::BigDripleafTilt> const& BIG_DRIPLEAF_TILT_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::BlockColor> const& BLOCK_COLOR_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::BlockColor> const& BLOCK_COLOR_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::CauldronLiquidType> const& CAULDRON_LIQUID_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::CauldronLiquidType> const& CAULDRON_LIQUID_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::ChemistryTableType> const& CHEMISTRY_TABLE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::ChemistryTableType> const& CHEMISTRY_TABLE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::ChiselType> const& CHISEL_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::ChiselType> const& CHISEL_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::CoralColor> const& CORAL_COLOR_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::CoralColor> const& CORAL_COLOR_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::CornerShape> const& CORNER_SHAPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::CornerShape> const& CORNER_SHAPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::CreakingHeartState> const& CREAKING_HEART_STATE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::CreakingHeartState> const& CREAKING_HEART_STATE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::DirtType> const& DIRT_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::DirtType> const& DIRT_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::DoublePlantType> const& DOUBLE_PLANT_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::DoublePlantType> const& DOUBLE_PLANT_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::EggCount> const& EGG_COUNT_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::EggCount> const& EGG_COUNT_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::FlowerType> const& FLOWER_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::FlowerType> const& FLOWER_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::FrontAndTop> const& FRONT_AND_TOP_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::FrontAndTop> const& FRONT_AND_TOP_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::HatchLevel> const& HATCH_LEVEL_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::HatchLevel> const& HATCH_LEVEL_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::LeafSize> const& LEAF_SIZE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::LeafSize> const& LEAF_SIZE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::LeverDirection> const& LEVER_DIRECTION_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::LeverDirection> const& LEVER_DIRECTION_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::MonsterEggStoneType> const& MONSTER_EGG_STONE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::MonsterEggStoneType> const& MONSTER_EGG_STONE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::NewLeavesType> const& NEW_LEAVES_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::NewLeavesType> const& NEW_LEAVES_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::NewLogType> const& NEW_LOG_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::NewLogType> const& NEW_LOG_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::OldLeavesType> const& OLD_LEAVES_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::OldLeavesType> const& OLD_LEAVES_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::OldLogType> const& OLD_LOG_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::OldLogType> const& OLD_LOG_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::PaleMossCarpetSide> const& PALE_MOSS_CARPET_SIDE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::PaleMossCarpetSide> const& PALE_MOSS_CARPET_SIDE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::PillarAxis> const& PILLAR_AXIS_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::PillarAxis> const& PILLAR_AXIS_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::PortalAxis> const& PORTAL_AXIS_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::PortalAxis> const& PORTAL_AXIS_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::PotentSulfurState> const& POTENT_SULFUR_STATE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::PotentSulfurState> const& POTENT_SULFUR_STATE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::PrismarineBlockType> const& PRISMARINE_BLOCK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::PrismarineBlockType> const& PRISMARINE_BLOCK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::SandstoneType> const& SANDSTONE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::SandstoneType> const& SANDSTONE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::SandType> const& SAND_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::SandType> const& SAND_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::SaplingType_DEPRECATED> const& SAPLING_TYPE_DEPRECATED_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::SaplingType_DEPRECATED> const& SAPLING_TYPE_DEPRECATED_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::SeagrassType> const& SEAGRASS_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::SeagrassType> const& SEAGRASS_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::SpeleothemThickness> const& SPELEOTHEM_THICKNESS_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::SpeleothemThickness> const& SPELEOTHEM_THICKNESS_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::SpongeType> const& SPONGE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::SpongeType> const& SPONGE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StalkThickness> const& STALK_THICKNESS_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StalkThickness> const& STALK_THICKNESS_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneBrickType> const& STONE_BRICK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneBrickType> const& STONE_BRICK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType2> const& STONE_SLAB_TYPE_2_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType2> const& STONE_SLAB_TYPE_2_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType3> const& STONE_SLAB_TYPE_3_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType3> const& STONE_SLAB_TYPE_3_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType4> const& STONE_SLAB_TYPE_4_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType4> const& STONE_SLAB_TYPE_4_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType> const& STONE_SLAB_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneSlabType> const& STONE_SLAB_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneType> const& STONE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StoneType> const& STONE_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StructureBlockType> const& STRUCTURE_BLOCK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StructureBlockType> const& STRUCTURE_BLOCK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::StructureVoidType> const& STRUCTURE_VOID_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::StructureVoidType> const& STRUCTURE_VOID_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::TallGrassType> const& TALL_GRASS_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::TallGrassType> const& TALL_GRASS_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::TorchFacing> const& TORCH_FACING_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::TorchFacing> const& TORCH_FACING_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::VaultBlockState> const& VAULT_BLOCK_STATE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::VaultBlockState> const& VAULT_BLOCK_STATE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::VerticalHalfEnum> const& VERTICAL_HALF_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::VerticalHalfEnum> const& VERTICAL_HALF_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::WallBlockType> const& WALL_BLOCK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::WallBlockType> const& WALL_BLOCK_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::WallConnectionType> const& WALL_CONNECTION_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::WallConnectionType> const& WALL_CONNECTION_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_C
MCAPI ::StateSerializationUtils::EnumStateMapper<::WoodType> const& WOOD_TYPE_MAPPER();
#endif

#ifdef LL_PLAT_S
MCAPI ::StateSerializationUtils::EnumStateMapper<::WoodType> const& WOOD_TYPE_MAPPER();
#endif
// NOLINTEND

} // namespace StateSerializationUtils
