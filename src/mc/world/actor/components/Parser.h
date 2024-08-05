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
    MCAPI static bool parse(class Json::Value const&, std::vector<class ActorDefinitionTrigger>&);

    MCAPI static bool parse(class Json::Value const&, class ActorDefinitionTrigger&, bool);

    MCAPI static bool parse(class Json::Value const&, class ActorDefinitionTrigger&, char const*);

    MCAPI static bool parse(class Json::Value const&, class DefinitionTrigger&, bool);

    MCAPI static bool
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class ItemDescriptor& itemDescriptor);

    MCAPI static bool parse(
        class Json::Value const&           val,
        class SemVersion const&            engineVersion,
        std::vector<class ItemDescriptor>& itemDescriptors
    );

    MCAPI static bool parse(class Json::Value const&, ::Puv::Legacy::FilterSubject&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, class Json::Value&, char const*);

    MCAPI static void parse(class Json::Value const&, class MobEffectInstance&, char const*);

    MCAPI static void
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class BlockDescriptor& blockDescriptor);

    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& blockDescriptors
    );

    MCAPI static void
    parse(class Json::Value const&, class WeightedChoices<class ActorDefinitionTrigger>&, char const*);

    MCAPI static void parse(class Json::Value const&, std::vector<std::string>&, char const*);

    MCAPI static void parse(class Json::Value const&, struct FloatRange&, char const*);

    MCAPI static void parse(class Json::Value const&, uchar&, uchar);

    MCAPI static void parse(class Json::Value const&, bool&, char const*, bool);

    MCAPI static void parse(class Json::Value const&, class FilterGroup&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, class HashedString&, char const*, char const*);

    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& variable,
        char const*                         jsonName
    );

    MCAPI static void parse(class Json::Value const&, class Vec3&, char const*, class Vec3 const&);

    MCAPI static void parse(class Json::Value const&, std::string&, char const*, char const*);

    MCAPI static void
    parse(class Json::Value const&, std::vector<::Puv::Legacy::LevelSoundEvent>&, char const*, char const*);

    MCAPI static void
    parse(class Json::Value const&, std::vector<struct ActorDefinitionIdentifier>&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, ::ActorType&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, ::Difficulty&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, ::ParticleType&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, float&, char const*, float);

    MCAPI static void parse(class Json::Value const&, int&, char const*, int);

    MCAPI static void parse(class Json::Value const&, struct ActorDefinitionIdentifier&, char const*, char const*);

    MCAPI static void parse(class Json::Value const&, uint&, char const*, uint);

    MCAPI static void parse(class Json::Value const&, struct IntRange&, char const*, int, int);

    MCAPI static void
    serialize(class ActorDefinitionTrigger const& trigger, class Json::Value& val, char const* jsonName);

    MCAPI static void
    serialize(std::vector<class BlockDescriptor> const& variable, class Json::Value& val, char const* jsonName);

    MCAPI static void
    serialize(std::vector<class MobEffectInstance> const& variable, class Json::Value& val, char const* jsonName);

    MCAPI static void serialize(::ActorType const& variable, class Json::Value& val, char const* jsonName);

    MCAPI static void serialize(::ParticleType const& variable, class Json::Value& val, char const* jsonName);

    MCAPI static void
    serialize(::Puv::Legacy::FilterSubject const& variable, class Json::Value& val, char const* jsonName);

    MCAPI static void
    serialize(struct ActorDefinitionIdentifier const& variable, class Json::Value& val, char const* jsonName);

    MCAPI static void serialize(struct FloatRange const& variable, class Json::Value& val, char const* jsonName);

    // NOLINTEND
};
