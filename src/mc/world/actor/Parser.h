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
struct FloatRange;
namespace Json { class Value; }
namespace mce { class Color; }
// clang-format on

class Parser {
public:
    // static functions
    // NOLINTBEGIN
    MCNAPI static bool parse(::Json::Value const& val, ::std::vector<::ActorDefinitionTrigger>& triggers);

    MCNAPI static bool parse(::Json::Value const& val, ::ActorDefinitionTrigger& definitionTrigger, bool acceptString);

    MCNAPI static bool parse(::Json::Value const& val, ::DefinitionTrigger& definitionTrigger, bool acceptString);

    MCNAPI static bool
    parse(::Json::Value const& val, ::MolangVersion molangVersion, ::std::vector<::ItemDescriptor>& itemDescriptors);

    MCNAPI static bool
    parse(::Json::Value const& val, ::std::vector<::ActorDefinitionTrigger>& triggers, char const* jsonName);

    MCNAPI static bool parse(
        ::Json::Value const&                  val,
        ::SharedTypes::Legacy::FilterSubject& target,
        char const*                           jsonName,
        char const*                           defaultValue
    );

    MCNAPI static bool
    parse(::Json::Value const& val, ::EffectDuration& variable, char const* jsonName, bool convertToTicks);

    MCNAPI static void parse(::Json::Value const& val, uchar& face, uchar defaultValue);

    MCNAPI static void
    parse(::Json::Value const& val, ::WeightedChoices<::ActorDefinitionTrigger>& variable, char const* jsonName);

    MCNAPI static void parse(::Json::Value const& val, ::MobEffectInstance& variable, char const* jsonName);

    MCNAPI static void parse(
        ::Json::Value const&         val,
        ::ActorDefinitionIdentifier& variable,
        char const*                  jsonName,
        char const*                  defaultValue
    );

    MCNAPI static void
    parse(::Json::Value const& val, ::std::string& variable, char const* jsonName, char const* defaultValue);

    MCNAPI static void parse(
        ::Json::Value const&                        val,
        ::std::vector<::ActorDefinitionIdentifier>& variable,
        char const*                                 jsonName,
        char const*                                 defaultValue
    );

    MCNAPI static void parse(
        ::Json::Value const&                                   val,
        ::std::vector<::SharedTypes::Legacy::LevelSoundEvent>& variable,
        char const*                                            jsonName,
        char const*                                            defaultValue
    );

#ifdef LL_PLAT_C
    MCNAPI static void
    parse(::Json::Value const& val, ::mce::Color& variable, char const* jsonName, ::mce::Color const& defaultValue);

    MCNAPI static void
    parse(::Json::Value const& val, ::HashedString& variable, char const* jsonName, char const* defaultValue);
#endif

    MCNAPI static void
    parse(::Json::Value const& val, ::Vec3& variable, char const* jsonName, ::Vec3 const& defaultValue);

    MCNAPI static void parse(
        ::Json::Value const&               val,
        ::SharedTypes::Legacy::Difficulty& variable,
        char const*                        jsonName,
        char const*                        defaultValue
    );

    MCNAPI static void
    parse(::Json::Value const& val, ::ParticleType& variable, char const* jsonName, char const* defaultValue);

    MCNAPI static void parse(::Json::Value const& val, bool& variable, char const* jsonName, bool defaultValue);

    MCNAPI static void serialize(::FloatRange const& variable, ::Json::Value& val, char const* jsonName);

    MCNAPI static void
    serialize(::std::vector<::ActorDefinitionTrigger> const& variable, ::Json::Value& val, char const* jsonName);

    MCNAPI static void
    serialize(::std::vector<::BlockDescriptor> const& variable, ::Json::Value& val, char const* jsonName);

    MCNAPI static void
    serialize(::std::vector<::MobEffectInstance> const& variable, ::Json::Value& val, char const* jsonName);

    MCNAPI static void serialize(::ActorType const& variable, ::Json::Value& val, char const* jsonName);

    MCNAPI static void
    serialize(::SharedTypes::Legacy::FilterSubject const& variable, ::Json::Value& val, char const* jsonName);

    MCNAPI static void serialize(::ParticleType const& variable, ::Json::Value& val, char const* jsonName);
    // NOLINTEND
};
