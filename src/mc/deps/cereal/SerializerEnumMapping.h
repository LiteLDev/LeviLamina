#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/cereal/schema/ReflectedType.h"
#include "mc/deps/core/math/EasingType.h"
#include "mc/deps/shared_types/EquipmentSlot.h"
#include "mc/deps/shared_types/Facing.h"
#include "mc/deps/shared_types/FilterSubject.h"
#include "mc/deps/shared_types/JigsawJointType.h"
#include "mc/deps/shared_types/LevelSoundEvent.h"
#include "mc/deps/shared_types/UseAnimation.h"
#include "mc/deps/shared_types/v1_20_60/OverworldHeightBiomeJsonComponent.h"
#include "mc/deps/shared_types/v1_21_10/CoordinateEvaluationOrder.h"
#include "mc/deps/shared_types/v1_21_10/RandomDistributionType.h"
#include "mc/deps/shared_types/v1_21_20/IntProviderType.h"
#include "mc/deps/shared_types/v1_21_20/structure/Axis.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockEntityModifierType.h"
#include "mc/deps/shared_types/v1_21_20/structure/BlockType.h"
#include "mc/deps/shared_types/v1_21_20/structure/PosType.h"
#include "mc/deps/shared_types/v1_21_20/structure/Type.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/GenerationStep.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/HeightmapProjection.h"
#include "mc/deps/shared_types/v1_21_20/structure/definition/TerrainAdaptation.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/PlacementType.h"
#include "mc/deps/shared_types/v1_21_20/structure/set/SpreadType.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/ElementType.h"
#include "mc/deps/shared_types/v1_21_20/structure/template_pool/Projection.h"
#include "mc/editor/Axis.h"
#include "mc/editor/Mode.h"
#include "mc/editor/OperationType.h"
#include "mc/editor/Plane.h"
#include "mc/editor/ScriptManagerEventType.h"
#include "mc/editor/cursor/ControlMode.h"
#include "mc/editor/cursor/TargetMode.h"
#include "mc/editor/datastore/EventType.h"
#include "mc/editor/input/KeyInputType.h"
#include "mc/editor/logging/LogContext.h"
#include "mc/editor/logging/LogLevel.h"
#include "mc/editor/selection/SelectionContainerColorPayload.h"
#include "mc/editor/selection/SelectionContainerUnaryPayload.h"
#include "mc/editor/selection/SelectionServicePayload.h"
#include "mc/editor/services/native_brush/BrushPaintCompletionState.h"
#include "mc/editor/services/native_brush/BrushPaintMode.h"
#include "mc/editor/services/native_brush/BrushShapeMethod.h"
#include "mc/editor/services/render_helper/PrimitiveType.h"
#include "mc/editor/services/render_helper/SplineType.h"
#include "mc/editor/services/widgets/GroupSelectionMode.h"
#include "mc/editor/settings/ThemeSettingsColorKey.h"
#include "mc/scripting/diagnostics/ScriptStat.h"
#include "mc/util/Mirror.h"
#include "mc/util/Rotation.h"
#include "mc/world/WorldTransferResult.h"
#include "mc/world/actor/ArmorTextureType.h"
#include "mc/world/item/CreativeItemCategory.h"
#include "mc/world/item/Rarity.h"
#include "mc/world/level/WorldVersion.h"
#include "mc/world/level/biome/BiomeTemperatureCategory.h"
#include "mc/world/level/block/BlockRenderLayer.h"
#include "mc/world/level/block/CompoundBlockVolumeAction.h"
#include "mc/world/level/block/CompoundBlockVolumePositionRelativity.h"
#include "mc/world/level/block/LiquidReaction.h"
#include "mc/world/level/block/LiquidType.h"
#include "mc/world/level/block/components/BreathingType.h"
#include "mc/world/level/camera/CameraPreset.h"
#include "mc/world/level/camera/aimassist/camera_aim_assist/TargetMode.h"
#include "mc/world/level/material/MaterialType.h"

namespace cereal {

class SerializerEnumMapping {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 24> mUnka0608a;
    // NOLINTEND

public:
    // prevent constructor by default
    SerializerEnumMapping& operator=(SerializerEnumMapping const&);
    SerializerEnumMapping();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI SerializerEnumMapping(::cereal::SerializerEnumMapping const&);

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::ScriptManagerEventType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Settings::ThemeSettingsColorKey>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureDefinition::GenerationStep>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::LogContext>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::Editor::Network::SelectionContainerUnaryPayload::UnaryAction>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureSet::PlacementType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockType>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Input::KeyInputType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::ElementType>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::JigsawJointType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_20_60::OverworldHeightBiomeJsonComponent::NoiseType>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::CompoundBlockVolumePositionRelativity>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::v1_21_20::IntProviderType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Cursor::ControlMode>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::Processors::Type>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureDefinition::TerrainAdaptation>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::cereal::internal::ReflectedType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::CompoundBlockVolumeAction>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Widgets::GroupSelectionMode>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Network::SelectionServicePayload::Action>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Brush::BrushShapeMethod>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::BreathingType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Axis>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Brush::BrushPaintMode>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::UseAnimation>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Mode>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::Axis>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::WorldTransferResult>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::LogLevel>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::BiomeTemperatureCategory>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::EquipmentSlot>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::ScriptStat::Type>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::MaterialType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::ArmorTextureType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::BlockRenderLayer>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::v1_21_10::RandomDistributionType>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::CreativeItemCategory>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::RenderHelper::PrimitiveType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(::std::initializer_list<::std::pair<::std::string const, ::Rotation>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::Editor::Network::SelectionContainerColorPayload::Element>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::FilterSubject>> mappings
    );

    MCAPI explicit SerializerEnumMapping(::std::initializer_list<::std::pair<::std::string const, ::Mirror>> mappings);

    MCAPI explicit SerializerEnumMapping(::std::initializer_list<::std::pair<::std::string const, ::Rarity>> mappings);

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::EasingType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::LiquidType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::LiquidReaction>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Facing>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::CameraPreset::AudioListener>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::DataStore::EventType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::CameraAimAssist::TargetMode>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::BlockMask::OperationType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::RenderHelper::SplineType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::LevelSoundEvent>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Brush::BrushPaintCompletionState>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureSet::SpreadType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::PosType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<
            ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureDefinition::HeightmapProjection>>
            mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<
            ::std::string const,
            ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockEntityModifierType>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Plane>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::WorldVersion>> mappings
    );

    MCAPI explicit SerializerEnumMapping(
        ::std::initializer_list<::std::pair<::std::string const, ::Editor::Cursor::TargetMode>> mappings
    );

    MCAPI ::std::optional<::std::string> lookup(int64 key) const;

    MCAPI ::std::optional<int64> lookup(::std::string_view key) const;

    MCAPI ::entt::iterable_adaptor<
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::pair<::std::string, int64>>>>,
        ::std::_Vector_const_iterator<::std::_Vector_val<::std::_Simple_types<::std::pair<::std::string, int64>>>>>
    mapping() const;

    MCAPI ~SerializerEnumMapping();
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::cereal::SerializerEnumMapping const&);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::ScriptManagerEventType>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Settings::ThemeSettingsColorKey>> mappings
    );

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureDefinition::GenerationStep>> mappings
    );

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::LogContext>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::Editor::Network::SelectionContainerUnaryPayload::UnaryAction>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureSet::PlacementType>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Projection>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockType>> mappings
    );

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Input::KeyInputType>> mappings
    );

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::ElementType>> mappings
    );

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::JigsawJointType>> mappings
    );

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_20_60::OverworldHeightBiomeJsonComponent::NoiseType>>
              mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::CompoundBlockVolumePositionRelativity>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::v1_21_20::IntProviderType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Cursor::ControlMode>> mappings
    );

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::Processors::Type>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureDefinition::TerrainAdaptation>>
              mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::cereal::internal::ReflectedType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::CompoundBlockVolumeAction>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Widgets::GroupSelectionMode>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Network::SelectionServicePayload::Action>>
              mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Brush::BrushShapeMethod>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::BreathingType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Axis>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Brush::BrushPaintMode>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::UseAnimation>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Mode>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::Axis>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::WorldTransferResult>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::LogLevel>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::BiomeTemperatureCategory>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::EquipmentSlot>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::ScriptStat::Type>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::MaterialType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::ArmorTextureType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::BlockRenderLayer>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::v1_21_10::RandomDistributionType>>
              mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::CreativeItemCategory>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::RenderHelper::PrimitiveType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Rotation>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::Editor::Network::SelectionContainerColorPayload::Element>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::FilterSubject>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Mirror>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Rarity>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::EasingType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::LiquidType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::LiquidReaction>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Facing>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::CameraPreset::AudioListener>> mappings
    );

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::DataStore::EventType>> mappings
    );

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::CameraAimAssist::TargetMode>> mappings
    );

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::BlockMask::OperationType>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::RenderHelper::SplineType>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::Legacy::LevelSoundEvent>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Brush::BrushPaintCompletionState>> mappings
    );

    MCAPI void*
    $ctor(::std::initializer_list<::std::pair<::std::string const, ::SharedTypes::v1_21_10::CoordinateEvaluationOrder>>
              mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureSet::SpreadType>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::PosType>> mappings);

    MCAPI void*
    $ctor(::std::initializer_list<
          ::std::pair<::std::string const, ::SharedTypes::v1_21_20::JigsawStructureDefinition::HeightmapProjection>>
              mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<
                          ::std::string const,
                          ::SharedTypes::v1_21_20::JigsawStructure::ProcessorRule::BlockEntityModifierType>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Plane>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::WorldVersion>> mappings);

    MCAPI void* $ctor(::std::initializer_list<::std::pair<::std::string const, ::Editor::Cursor::TargetMode>> mappings);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace cereal
