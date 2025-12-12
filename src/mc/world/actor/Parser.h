#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/comprehensive/ParticleType.h"
#include "mc/deps/shared_types/legacy/Difficulty.h"
#include "mc/deps/shared_types/legacy/FilterSubject.h"
#include "mc/deps/shared_types/legacy/LevelSoundEvent.h"
#include "mc/molang/MolangVersion.h"
#include "mc/util/WeightedChoices.h"
#include "mc/world/actor/ActorType.h"

// auto generated forward declare list
// clang-format off
class ActorDefinitionTrigger;
class BlockDescriptor;
class DefinitionTrigger;
class HashedString;
class ItemDescriptor;
class MobEffectInstance;
class Vec3;
struct ActorDefinitionIdentifier;
struct EffectDuration;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Parser {
public:
    // static functions
    // NOLINTBEGIN
    MCAPI static bool parse(::Json::Value const& val, ::std::vector<::ActorDefinitionTrigger>& triggers);

    MCAPI static bool parse(::Json::Value const& val, ::ActorDefinitionTrigger& definitionTrigger, bool acceptString);

    MCAPI static bool parse(::Json::Value const& val, ::DefinitionTrigger& definitionTrigger, bool acceptString);

    MCAPI static bool parse(::Json::Value const& val, ::MolangVersion molangVersion, ::ItemDescriptor& itemDescriptor);

    MCAPI static bool
    parse(::Json::Value const& val, ::MolangVersion molangVersion, ::std::vector<::ItemDescriptor>& itemDescriptors);

    MCAPI static bool parse(::Json::Value const& val, ::ActorDefinitionTrigger& trigger, char const* jsonName);

    MCAPI static bool
    parse(::Json::Value const& val, ::std::vector<::ActorDefinitionTrigger>& triggers, char const* jsonName);

    MCAPI static bool parse(
        ::Json::Value const&                  val,
        ::SharedTypes::Legacy::FilterSubject& target,
        char const*                           jsonName,
        char const*                           defaultValue
    );

    MCAPI static bool
    parse(::Json::Value const& val, ::EffectDuration& variable, char const* jsonName, bool convertToTicks);

    MCAPI static void parse(::Json::Value const& val, uchar& face, uchar defaultValue);

    MCAPI static void
    parse(::Json::Value const& val, ::MolangVersion molangVersion, ::std::vector<::BlockDescriptor>& blockDescriptors);

    MCAPI static void
    parse(::Json::Value const& val, ::WeightedChoices<::ActorDefinitionTrigger>& variable, char const* jsonName);

    MCAPI static void parse(::Json::Value const& val, ::std::vector<::std::string>& variable, char const* jsonName);

    MCAPI static void parse(::Json::Value const& val, ::MobEffectInstance& variable, char const* jsonName);

    MCAPI static void parse(
        ::Json::Value const&         val,
        ::ActorDefinitionIdentifier& variable,
        char const*                  jsonName,
        char const*                  defaultValue
    );

    MCAPI static void
    parse(::Json::Value const& val, ::std::string& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void parse(
        ::Json::Value const&                        val,
        ::std::vector<::ActorDefinitionIdentifier>& variable,
        char const*                                 jsonName,
        char const*                                 defaultValue
    );

    MCAPI static void parse(
        ::Json::Value const&                                   val,
        ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>& variable,
        char const*                                            jsonName,
        char const*                                            defaultValue
    );

    MCAPI_C static void
    parse(::Json::Value const& val, ::mce::Color& variable, char const* jsonName, ::mce::Color const& defaultValue);

    MCAPI static void
    parse(::Json::Value const& val, ::HashedString& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void
    parse(::Json::Value const& val, ::Vec3& variable, char const* jsonName, ::Vec3 const& defaultValue);

    MCAPI static void
    parse(::Json::Value const& val, ::ActorType& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void parse(
        ::Json::Value const&               val,
        ::SharedTypes::Legacy::Difficulty& variable,
        char const*                        jsonName,
        char const*                        defaultValue
    );

    MCAPI static void
    parse(::Json::Value const& val, ::ParticleType& variable, char const* jsonName, char const* defaultValue);

    MCAPI static void parse(::Json::Value const& val, bool& variable, char const* jsonName, bool defaultValue);

    MCAPI static void
    serialize(::SharedTypes::Legacy::FilterSubject const& variable, ::Json::Value& val, char const* jsonName);
    // NOLINTEND
};
