#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ActorMigratedDefinitionFactory;
class BedrockLoadContext;
namespace JsonComponentGlueUtils { struct CustomUpgradeData; }
namespace SharedTypes::Beta { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocument; }
namespace SharedTypes::Legacy { struct ActorDocumentCorrected; }
namespace SharedTypes::v1_21_100 { struct ActorDocument; }
namespace SharedTypes::v1_21_110 { struct ActorDocument; }
namespace SharedTypes::v1_21_120 { struct ActorDocument; }
namespace SharedTypes::v1_21_130 { struct ActorDocument; }
namespace SharedTypes::v1_21_90 { struct ActorDocument; }
namespace SharedTypes::v1_26_0 { struct ActorDocument; }
namespace SharedTypes::v1_26_10 { struct ActorDocument; }
namespace SharedTypes::v1_26_20 { struct ActorDocument; }
namespace SharedTypes::v1_26_30 { struct ActorDocument; }
namespace SharedTypes::v1_26_40 { struct ActorDocument; }
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
        ::SharedTypes::v1_21_130::ActorDocument,
        ::SharedTypes::v1_26_0::ActorDocument,
        ::SharedTypes::v1_26_10::ActorDocument,
        ::SharedTypes::v1_26_20::ActorDocument,
        ::SharedTypes::v1_26_30::ActorDocument,
        ::SharedTypes::v1_26_40::ActorDocument,
        ::SharedTypes::Beta::ActorDocument>;

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void upgrade_v1_26_40(
        ::Puv::CerealUpgrader<
            ::SharedTypes::v1_26_30::ActorDocument,
            ::SharedTypes::v1_26_40::ActorDocument,
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
