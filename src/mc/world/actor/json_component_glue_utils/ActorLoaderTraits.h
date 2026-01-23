#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BedrockLoadContext;
namespace JsonComponentGlueUtils { struct CustomUpgradeData; }
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
namespace SharedTypes::v1_21_130 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
// clang-format on

namespace JsonComponentGlueUtils {

struct ActorLoaderTraits {
public:
    // ActorLoaderTraits inner types define
    using CustomParseData = ::BedrockLoadContext;

    using CustomUpgradeData = ::JsonComponentGlueUtils::CustomUpgradeData;

    using Slices = ::std::tuple<
        ::SharedTypes::Legacy::ActorDocument,
        ::SharedTypes::Legacy::ActorDocumentCorrected,
        ::SharedTypes::v1_21_90::ActorDocument,
        ::SharedTypes::v1_21_100::ActorDocument,
        ::SharedTypes::v1_21_110::ActorDocument,
        ::SharedTypes::v1_21_120::ActorDocument,
        ::SharedTypes::v1_21_130::ActorDocument>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void upgrade_v1_21_100(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_90::ActorDocument,
            ::SharedTypes::v1_21_100::ActorDocument,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_110(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_100::ActorDocument,
            ::SharedTypes::v1_21_110::ActorDocument,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_120(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_110::ActorDocument,
            ::SharedTypes::v1_21_120::ActorDocument,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_130(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_21_120::ActorDocument,
            ::SharedTypes::v1_21_130::ActorDocument,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_89(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocument,
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    );

    MCAPI static void upgrade_v1_21_90(
        ::Puv::CerealUpgrader<
            ::SharedTypes::Legacy::ActorDocumentCorrected,
            ::SharedTypes::v1_21_90::ActorDocument,
            ::JsonComponentGlueUtils::CustomUpgradeData const&>& upgrader
    );
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::ActorMigratedDefinitionFactory const*& mFactoryPtr();
    // NOLINTEND
};

} // namespace JsonComponentGlueUtils
