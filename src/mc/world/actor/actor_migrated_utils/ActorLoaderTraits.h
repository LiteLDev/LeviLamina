#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BedrockLoadContext;
namespace ActorMigratedUtils { struct CustomUpgradeData; }
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
// clang-format on

namespace ActorMigratedUtils {

struct ActorLoaderTraits {
public:
    // ActorLoaderTraits inner types define
    using Slices = ::std::tuple<
        ::SharedTypes::Legacy::ActorDocument,
        ::SharedTypes::Legacy::ActorDocumentCorrected,
        ::SharedTypes::v1_21_90::ActorDocument,
        ::SharedTypes::v1_21_100::ActorDocument,
        ::SharedTypes::v1_21_110::ActorDocument,
        ::SharedTypes::v1_21_120::ActorDocument>;

    using CustomParseData = ::BedrockLoadContext;

    using CustomUpgradeData = ::ActorMigratedUtils::CustomUpgradeData;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void upgrade_v1_21_100(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_90::ActorDocument,
            ::SharedTypes::v1_21_100::ActorDocument,
            ::ActorMigratedUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_110(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_100::ActorDocument,
            ::SharedTypes::v1_21_110::ActorDocument,
            ::ActorMigratedUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_120(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_110::ActorDocument,
            ::SharedTypes::v1_21_120::ActorDocument,
            ::ActorMigratedUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_89(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocument,
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::ActorMigratedUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_90(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::SharedTypes::v1_21_90::ActorDocument,
            ::ActorMigratedUtils::CustomUpgradeData const&>& upgrader
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorMigratedDefinitionFactory const*& mFactoryPtr();
    // NOLINTEND
};

} // namespace ActorMigratedUtils
