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
    // symbol:
    // ?parse@Parser@@SA_NAEBVValue@Json@@AEAV?$vector@VActorDefinitionTrigger@@V?$allocator@VActorDefinitionTrigger@@@std@@@std@@@Z
    MCAPI static bool parse(class Json::Value const&, std::vector<class ActorDefinitionTrigger>&);

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEAVActorDefinitionTrigger@@_N@Z
    MCAPI static bool parse(class Json::Value const&, class ActorDefinitionTrigger&, bool);

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEAVActorDefinitionTrigger@@PEBD@Z
    MCAPI static bool parse(class Json::Value const&, class ActorDefinitionTrigger&, char const*);

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEAVDefinitionTrigger@@_N@Z
    MCAPI static bool parse(class Json::Value const&, class DefinitionTrigger&, bool);

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVItemDescriptor@@@Z
    MCAPI static bool
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class ItemDescriptor& itemDescriptor);

    // symbol:
    // ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@@Z
    MCAPI static bool parse(
        class Json::Value const&           val,
        class SemVersion const&            engineVersion,
        std::vector<class ItemDescriptor>& itemDescriptors
    );

    // symbol: ?parse@Parser@@SA_NAEBVValue@Json@@AEAW4FilterSubject@Legacy@Puv@@PEBD2@Z
    MCAPI static bool parse(class Json::Value const&, ::Puv::Legacy::FilterSubject&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAV23@PEBD@Z
    MCAPI static void parse(class Json::Value const&, class Json::Value&, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAVMobEffectInstance@@PEBD@Z
    MCAPI static void parse(class Json::Value const&, class MobEffectInstance&, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVBlockDescriptor@@@Z
    MCAPI static void
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class BlockDescriptor& blockDescriptor);

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& blockDescriptors
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAV?$WeightedChoices@VActorDefinitionTrigger@@@@PEBD@Z
    MCAPI static void
    parse(class Json::Value const&, class WeightedChoices<class ActorDefinitionTrigger>&, char const*);

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBD@Z
    MCAPI static void parse(class Json::Value const&, std::vector<std::string>&, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAUFloatRange@@PEBD@Z
    MCAPI static void parse(class Json::Value const&, struct FloatRange&, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAEE@Z
    MCAPI static void parse(class Json::Value const&, uchar&, uchar);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEA_NPEBD_N@Z
    MCAPI static void parse(class Json::Value const&, bool&, char const*, bool);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAVFilterGroup@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, class FilterGroup&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAVHashedString@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, class HashedString&, char const*, char const*);

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@PEBD@Z
    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& variable,
        char const*                         jsonName
    );

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAVVec3@@PEBDAEBV4@@Z
    MCAPI static void parse(class Json::Value const&, class Vec3&, char const*, class Vec3 const&);

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, std::string&, char const*, char const*);

    // symbol:
    // ?parse@Parser@@SAXAEBVValue@Json@@AEAV?$vector@W4LevelSoundEvent@Legacy@Puv@@V?$allocator@W4LevelSoundEvent@Legacy@Puv@@@std@@@std@@PEBD2@Z
    MCAPI static void
    parse(class Json::Value const&, std::vector<::Puv::Legacy::LevelSoundEvent>&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAW4ActorType@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, ::ActorType&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAW4Difficulty@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, ::Difficulty&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAW4ParticleType@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, ::ParticleType&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAMPEBDM@Z
    MCAPI static void parse(class Json::Value const&, float&, char const*, float);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAHPEBDH@Z
    MCAPI static void parse(class Json::Value const&, int&, char const*, int);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAUActorDefinitionIdentifier@@PEBD2@Z
    MCAPI static void parse(class Json::Value const&, struct ActorDefinitionIdentifier&, char const*, char const*);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAIPEBDI@Z
    MCAPI static void parse(class Json::Value const&, uint&, char const*, uint);

    // symbol: ?parse@Parser@@SAXAEBVValue@Json@@AEAUIntRange@@PEBDHH@Z
    MCAPI static void parse(class Json::Value const&, struct IntRange&, char const*, int, int);

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
