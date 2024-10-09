#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/puv/FilterSubject.h"
#include "mc/deps/puv/LevelSoundEvent.h"
#include "mc/util/WeightedChoices.h"
#include "mc/world/Difficulty.h"
#include "mc/world/actor/ActorType.h"
#include "mc/world/actor/ParticleType.h"

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
    MCAPI static bool parse(class Json::Value const& val, std::vector<class ActorDefinitionTrigger>& triggers);

    MCAPI static bool
    parse(class Json::Value const& val, class ActorDefinitionTrigger& definitionTrigger, bool acceptString);

    MCAPI static bool parse(class Json::Value const& val, class ActorDefinitionTrigger& trigger, char const* jsonName);

    MCAPI static bool
    parse(class Json::Value const& val, class DefinitionTrigger& definitionTrigger, bool acceptString);

    MCAPI static bool
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class ItemDescriptor& itemDescriptor);

    MCAPI static bool parse(
        class Json::Value const&           val,
        class SemVersion const&            engineVersion,
        std::vector<class ItemDescriptor>& itemDescriptors
    );

    MCAPI static bool parse(
        class Json::Value const&      val,
        ::Puv::Legacy::FilterSubject& target,
        char const*                   jsonName,
        char const*                   defaultValue
    );

    MCAPI static void parse(class Json::Value const& val, class Json::Value& variable, char const* jsonName);

    MCAPI static void parse(class Json::Value const& val, class MobEffectInstance& variable, char const* jsonName);

    MCAPI static void
    parse(class Json::Value const& val, class SemVersion const& engineVersion, class BlockDescriptor& blockDescriptor);

    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& blockDescriptors
    );

    MCAPI static void parse(
        class Json::Value const&                             val,
        class WeightedChoices<class ActorDefinitionTrigger>& variable,
        char const*                                          jsonName
    );

    MCAPI static void parse(class Json::Value const& val, std::vector<std::string>& variable, char const* jsonName);

    MCAPI static void parse(class Json::Value const& val, struct FloatRange& variable, char const* jsonName);

    MCAPI static void parse(class Json::Value const& val, uchar& face, uchar defaultValue);

    MCAPI static void parse(class Json::Value const& val, bool& variable, char const* jsonName, bool defaultValue);

    MCAPI static void
    parse(class Json::Value const& val, class FilterGroup& variable, char const* jsonName, char const*);

    MCAPI static void
    parse(class Json::Value const& val, class HashedString& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void parse(
        class Json::Value const&            val,
        class SemVersion const&             engineVersion,
        std::vector<class BlockDescriptor>& variable,
        char const*                         jsonName
    );

    MCAPI static void
    parse(class Json::Value const& val, class Vec3& variable, char const* jsonName, class Vec3 const& defaultValue);

    MCAPI static void
    parse(class Json::Value const& val, std::string& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void parse(
        class Json::Value const&                     val,
        std::vector<::Puv::Legacy::LevelSoundEvent>& variable,
        char const*                                  jsonName,
        char const*                                  defaultValue
    );

    MCAPI static void parse(
        class Json::Value const&                       val,
        std::vector<struct ActorDefinitionIdentifier>& variable,
        char const*                                    jsonName,
        char const*                                    defaultValue
    );

    MCAPI static void
    parse(class Json::Value const& val, ::ActorType& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void
    parse(class Json::Value const& val, ::Difficulty& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void
    parse(class Json::Value const& val, ::ParticleType& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void parse(class Json::Value const& val, float& variable, char const* jsonName, float defaultValue);

    MCAPI static void parse(class Json::Value const& val, int& variable, char const* jsonName, int defaultValue);

    MCAPI static void parse(
        class Json::Value const&          val,
        struct ActorDefinitionIdentifier& variable,
        char const*                       jsonName,
        char const*                       defaultValue
    );

    MCAPI static void parse(class Json::Value const& val, uint& variable, char const* jsonName, uint defaultValue);

    MCAPI static void parse(
        class Json::Value const& val,
        struct IntRange&         variable,
        char const*              jsonName,
        int                      defaultMin,
        int                      defaultMax
    );

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
