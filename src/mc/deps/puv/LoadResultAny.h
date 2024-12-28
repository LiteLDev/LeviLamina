#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class SemVersion;
struct ActorSpawnRuleData;
struct BetaItemComponentData;
struct BlockDefinition;
struct ComponentItemDataAll_Latest;
struct ComponentItemData_v1_19_83;
struct ComponentItemData_v1_20;
struct ComponentItemData_v1_20_20;
struct ComponentItemData_v1_20_30;
struct ComponentItemData_v1_20_40;
struct ComponentItemData_v1_20_50;
struct ComponentItemData_v1_20_60;
struct ComponentItemData_v1_20_80;
struct ComponentItemData_v1_21_10;
struct ComponentItemData_v1_21_30;
struct ComponentItemData_v1_21_40;
struct ComponentItemData_v1_21_50;
struct FeatureResult;
namespace Puv { class Logger; }
namespace SharedTypes::v1_21_20 { struct AutomaticFeatureRulesData; }
namespace SharedTypes::v1_21_20::JigsawStructureDefinition { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureProcessorList { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureSet { struct Contents; }
namespace SharedTypes::v1_21_20::JigsawStructureTemplatePool { struct Contents; }
namespace SharedTypes::v1_21_30 { struct TradeTableData; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistCategoriesFile; }
namespace SharedTypes::v1_21_50 { struct CameraAimAssistPresetFile; }
namespace SharedTypes::v1_21_50 { struct JigsawStructureMetadataFile; }
// clang-format on

namespace Puv {

class LoadResultAny {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 112> mUnk545455;
    ::ll::UntypedStorage<8, 40>  mUnk8aa8ef;
    ::ll::UntypedStorage<8, 80>  mUnk6e20bb;
    // NOLINTEND

public:
    // prevent constructor by default
    LoadResultAny& operator=(LoadResultAny const&);
    LoadResultAny(LoadResultAny const&);
    LoadResultAny();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI LoadResultAny(::Puv::LoadResultAny&&);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20_40&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::BlockDefinition&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::BetaItemComponentData&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemDataAll_Latest&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_30::TradeTableData&&, ::Puv::Logger);

    MCAPI
    LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_21_50&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_21_40&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20_50&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20_60&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::FeatureResult&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ActorSpawnRuleData&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_19_83&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_21_10&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_20::AutomaticFeatureRulesData&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20_20&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_50::CameraAimAssistPresetFile&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_50::CameraAimAssistCategoriesFile&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_21_30&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20_30&&, ::Puv::Logger);

    MCAPI
    LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_50::JigsawStructureMetadataFile&&, ::Puv::Logger);

    MCAPI LoadResultAny(
        ::SemVersion const&,
        ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&&,
        ::Puv::Logger
    );

    MCAPI LoadResultAny(::SemVersion const&, ::ComponentItemData_v1_20_80&&, ::Puv::Logger);

    MCAPI LoadResultAny(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureSet::Contents&&, ::Puv::Logger);

    MCAPI bool isValid() const;

    MCAPI ::Puv::Logger const& log() const;

    MCAPI ::Puv::Logger& log();

    MCAPI explicit operator bool() const;

    MCAPI ::SemVersion const& version() const;

    MCAPI ~LoadResultAny();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static ::Puv::LoadResultAny makeError(::Puv::Logger log);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(::Puv::LoadResultAny&&);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20_40&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::BlockDefinition&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::BetaItemComponentData&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemDataAll_Latest&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::SharedTypes::v1_21_30::TradeTableData&&, ::Puv::Logger);

    MCAPI void*
    $ctor(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureDefinition::Contents&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_21_50&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_21_40&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20_50&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20_60&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::FeatureResult&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ActorSpawnRuleData&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_19_83&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_21_10&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::SharedTypes::v1_21_20::AutomaticFeatureRulesData&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20_20&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::SharedTypes::v1_21_50::CameraAimAssistPresetFile&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::SharedTypes::v1_21_50::CameraAimAssistCategoriesFile&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_21_30&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20_30&&, ::Puv::Logger);

    MCAPI void*
    $ctor(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureTemplatePool::Contents&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::SharedTypes::v1_21_50::JigsawStructureMetadataFile&&, ::Puv::Logger);

    MCAPI void*
    $ctor(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureProcessorList::Contents&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::ComponentItemData_v1_20_80&&, ::Puv::Logger);

    MCAPI void* $ctor(::SemVersion const&, ::SharedTypes::v1_21_20::JigsawStructureSet::Contents&&, ::Puv::Logger);
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};

} // namespace Puv
