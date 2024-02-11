#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/common/WeightedChoices.h"
#include "mc/deps/puv/FilterSubject.h"
#include "mc/entity/utilities/ActorType.h"
#include "mc/enums/Difficulty.h"
#include "mc/enums/ParticleType.h"
#include "mc/events/LevelSoundEvent.h"

// auto generated forward declare list
// clang-format off
namespace Json { class Value; }
// clang-format on

class Parser {
public:
    // prevent constructor by default
    Parser& operator=(Parser const&);
    Parser(Parser const&);
    Parser();

public:
    // NOLINTBEGIN
    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVItemDescriptor@@@Z
    MCAPI static bool
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class ItemDescriptor& itemDescriptor);

    // symbol:
    // ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VActorDefinitionTrigger@@V?$allocator@VActorDefinitionTrigger@@@std@@@std@@@Z
    MCAPI static bool parse(
        class Json::Value const&                   val,
        class SemVersion const&                    engineVersion,
        std::vector<class ActorDefinitionTrigger>& triggers
    );

    // symbol:
    // ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@@Z
    MCAPI static bool parse(
        class Json::Value const&           val,
        class SemVersion const&            engineVersion,
        std::vector<class ItemDescriptor>& itemDescriptors
    );

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVActorDefinitionTrigger@@_N@Z
    MCAPI static bool parse(
        class Json::Value const&      val,
        class SemVersion const&       engineVersion,
        class ActorDefinitionTrigger& definitionTrigger,
        bool
    );

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVActorDefinitionTrigger@@PEBD@Z
    MCAPI static bool parse(
        class Json::Value const&      val,
        class SemVersion const&       engineVersion,
        class ActorDefinitionTrigger& trigger,
        char const*                   jsonName
    );

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVDefinitionTrigger@@_N@Z
    MCAPI static bool parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        class DefinitionTrigger& definitionTrigger,
        bool
    );

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAW4FilterSubject@Legacy@Puv@@PEBD3@Z
    MCAPI static bool parse(
        class Json::Value const&      val,
        class SemVersion const&       engineVersion,
        ::Puv::Legacy::FilterSubject& target,
        char const*                   jsonName,
        char const*                   defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVBlockDescriptor@@@Z
    MCAPI static void
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class BlockDescriptor&);

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
    MCAPI static void
    parse(class Json::Value const& val, class SemVersion const& engineVersion, std::vector<class BlockDescriptor>&);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV23@PEBD@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        class Json::Value&       variable,
        char const*              jsonName
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVMobEffectInstance@@PEBD@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        class MobEffectInstance& variable,
        char const*              jsonName
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$WeightedChoices@VActorDefinitionTrigger@@@@PEBD@Z
    MCAPI static void parse(
        class Json::Value const&                             val,
        class SemVersion const&                              engineVersion,
        class WeightedChoices<class ActorDefinitionTrigger>& variable,
        char const*                                          jsonName
    );

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@PEBD@Z
    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& variable,
        char const*                         jsonName
    );

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBD@Z
    MCAPI static void parse(
        class Json::Value const&  val,
        class SemVersion const&   engineVersion,
        std::vector<std::string>& variable,
        char const*               jsonName
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAUFloatRange@@PEBD@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        struct FloatRange&       variable,
        char const*              jsonName
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAEE@Z
    MCAPI static void
    parse(class Json::Value const& val, class SemVersion const& engineVersion, uchar& face, uchar defaultValue);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEA_NPEBD_N@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        bool&                    variable,
        char const*              jsonName,
        bool                     defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVFilterGroup@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        class FilterGroup&       variable,
        char const*              jsonName,
        char const*              defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVHashedString@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        class HashedString&      variable,
        char const*              jsonName,
        char const*              defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVVec3@@PEBDAEBV5@@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        class Vec3&              variable,
        char const*              jsonName,
        class Vec3 const&        defaultValue
    );

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        std::string&             variable,
        char const*              jsonName,
        char const*              defaultValue
    );

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@W4LevelSoundEvent@Legacy@Puv@@V?$allocator@W4LevelSoundEvent@Legacy@Puv@@@std@@@std@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const&                     val,
        class SemVersion const&                      engineVersion,
        std::vector<::Puv::Legacy::LevelSoundEvent>& variable,
        char const*                                  jsonName,
        char const*                                  defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAW4ActorType@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        ::ActorType&             variable,
        char const*              jsonName,
        char const*              defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAW4Difficulty@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        ::Difficulty&            variable,
        char const*              jsonName,
        char const*              defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAW4ParticleType@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        ::ParticleType&          variable,
        char const*              jsonName,
        char const*              defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAMPEBDM@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        float&                   variable,
        char const*              jsonName,
        float                    defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAHPEBDH@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        int&                     variable,
        char const*              jsonName,
        int                      defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAUActorDefinitionIdentifier@@PEBD3@Z
    MCAPI static void parse(
        class Json::Value const&          val,
        class SemVersion const&           engineVersion,
        struct ActorDefinitionIdentifier& variable,
        char const*                       jsonName,
        char const*                       defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAIPEBDI@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        uint&                    variable,
        char const*              jsonName,
        uint                     defaultValue
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAUIntRange@@PEBDHH@Z
    MCAPI static void parse(
        class Json::Value const& val,
        class SemVersion const&  engineVersion,
        struct IntRange&         variable,
        char const*              jsonName,
        int                      defaultMin,
        int                      defaultMax
    );

    // symbol: ?serialize@Parser@@SAXAEBVActorDefinitionTrigger@@AEAVValue@Json@@PEBD@Z
    MCAPI static void
    serialize(class ActorDefinitionTrigger const& trigger, class Json::Value& val, char const* jsonName);

    // symbol:
    // ?serialize@Parser@@SAXAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEAVValue@Json@@PEBD@Z
    MCAPI static void
    serialize(std::vector<class BlockDescriptor> const& variable, class Json::Value& val, char const* jsonName);

    // symbol:
    // ?serialize@Parser@@SAXAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@AEAVValue@Json@@PEBD@Z
    MCAPI static void
    serialize(std::vector<class MobEffectInstance> const& variable, class Json::Value& val, char const* jsonName);

    // symbol: ?serialize@Parser@@SAXAEBW4ActorType@@AEAVValue@Json@@PEBD@Z
    MCAPI static void serialize(::ActorType const& variable, class Json::Value& val, char const* jsonName);

    // symbol: ?serialize@Parser@@SAXAEBW4ParticleType@@AEAVValue@Json@@PEBD@Z
    MCAPI static void serialize(::ParticleType const& variable, class Json::Value& val, char const* jsonName);

    // symbol: ?serialize@Parser@@SAXAEBW4FilterSubject@Legacy@Puv@@AEAVValue@Json@@PEBD@Z
    MCAPI static void
    serialize(::Puv::Legacy::FilterSubject const& variable, class Json::Value& val, char const* jsonName);

    // symbol: ?serialize@Parser@@SAXAEBUActorDefinitionIdentifier@@AEAVValue@Json@@PEBD@Z
    MCAPI static void
    serialize(struct ActorDefinitionIdentifier const& variable, class Json::Value& val, char const* jsonName);

    // symbol: ?serialize@Parser@@SAXAEBUFloatRange@@AEAVValue@Json@@PEBD@Z
    MCAPI static void serialize(struct FloatRange const& variable, class Json::Value& val, char const* jsonName);

    // NOLINTEND
};
