/**
 * @file  Parser.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "../../Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class Parser.
 *
 */
class Parser {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PARSER
public:
    class Parser& operator=(class Parser const &) = delete;
    Parser(class Parser const &) = delete;
    Parser() = delete;
#endif

public:
    /**
     * @hash   2143434516
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAEE\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, unsigned char &, unsigned char);
    /**
     * @hash   210845718
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAHPEBDH\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, int &, char const *, int);
    /**
     * @hash   -1851755588
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAIPEBDI\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, unsigned int &, char const *, unsigned int);
    /**
     * @hash   -808129732
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAMPEBDM\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, float &, char const *, float);
    /**
     * @hash   -20970812
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAUActorDefinitionIdentifier\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, struct ActorDefinitionIdentifier &, char const *, char const *);
    /**
     * @hash   971749424
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAUFloatRange\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, struct FloatRange &, char const *);
    /**
     * @hash   -2056150816
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAUIntRange\@\@PEBDHH\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, struct IntRange &, char const *, int, int);
    /**
     * @hash   2065628814
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV23\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class Json::Value &, char const *);
    /**
     * @hash   -180108163
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$WeightedChoices\@VActorDefinitionTrigger\@\@\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class WeightedChoices<class ActorDefinitionTrigger> &, char const *);
    /**
     * @hash   1148639306
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::string &, char const *, char const *);
    /**
     * @hash   -1074210035
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<std::string> &, char const *);
    /**
     * @hash   -925097004
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<class BlockDescriptor> &);
    /**
     * @hash   -389600104
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<class BlockDescriptor> &, char const *);
    /**
     * @hash   991701928
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@W4LevelSoundEvent\@\@V?$allocator\@W4LevelSoundEvent\@\@\@std\@\@\@std\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<enum class LevelSoundEvent> &, char const *, char const *);
    /**
     * @hash   2003279900
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVBlockDescriptor\@\@\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class BlockDescriptor &);
    /**
     * @hash   -1504950776
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVHashedString\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class HashedString &, char const *, char const *);
    /**
     * @hash   -1415476380
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVMobEffectInstance\@\@PEBD\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class MobEffectInstance &, char const *);
    /**
     * @hash   893793047
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVVec3\@\@PEBDAEBV5\@\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class Vec3 &, char const *, class Vec3 const &);
    /**
     * @hash   1926031452
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4ActorType\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, enum class ActorType &, char const *, char const *);
    /**
     * @hash   2134280796
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4Difficulty\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, enum class Difficulty &, char const *, char const *);
    /**
     * @hash   -533568164
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4ParticleType\@\@PEBD3\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, enum class ParticleType &, char const *, char const *);
    /**
     * @hash   12463460
     * @symbol  ?parse\@Parser\@\@SAXAEBVValue\@Json\@\@AEBVSemVersion\@\@AEA_NPEBD_N\@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, bool &, char const *, bool);
    /**
     * @hash   528381293
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VActorDefinitionTrigger\@\@V?$allocator\@VActorDefinitionTrigger\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, std::vector<class ActorDefinitionTrigger> &);
    /**
     * @hash   476746697
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAV?$vector\@VItemDescriptor\@\@V?$allocator\@VItemDescriptor\@\@\@std\@\@\@std\@\@\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, std::vector<class ItemDescriptor> &);
    /**
     * @hash   -18110179
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVActorDefinitionTrigger\@\@PEBD\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class ActorDefinitionTrigger &, char const *);
    /**
     * @hash   1423515026
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVActorDefinitionTrigger\@\@_N\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class ActorDefinitionTrigger &, bool);
    /**
     * @hash   1855584492
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVDefinitionTrigger\@\@_N\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class DefinitionTrigger &, bool);
    /**
     * @hash   -25892507
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAVItemDescriptor\@\@\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class ItemDescriptor &);
    /**
     * @hash   -625236133
     * @symbol  ?parse\@Parser\@\@SA_NAEBVValue\@Json\@\@AEBVSemVersion\@\@AEAW4FilterSubject\@\@PEBD3\@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, enum class FilterSubject &, char const *, char const *);
    /**
     * @hash   1489052677
     * @symbol  ?serialize\@Parser\@\@SAXAEBUActorDefinitionIdentifier\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(struct ActorDefinitionIdentifier const &, class Json::Value &, char const *);
    /**
     * @hash   2040712809
     * @symbol  ?serialize\@Parser\@\@SAXAEBUFloatRange\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(struct FloatRange const &, class Json::Value &, char const *);
    /**
     * @hash   1487936559
     * @symbol  ?serialize\@Parser\@\@SAXAEBUIntRange\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(struct IntRange const &, class Json::Value &, char const *);
    /**
     * @hash   -172584150
     * @symbol  ?serialize\@Parser\@\@SAXAEBV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(std::vector<std::string> const &, class Json::Value &, char const *);
    /**
     * @hash   868654469
     * @symbol  ?serialize\@Parser\@\@SAXAEBV?$vector\@VBlockDescriptor\@\@V?$allocator\@VBlockDescriptor\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(std::vector<class BlockDescriptor> const &, class Json::Value &, char const *);
    /**
     * @hash   1402260529
     * @symbol  ?serialize\@Parser\@\@SAXAEBV?$vector\@VMobEffectInstance\@\@V?$allocator\@VMobEffectInstance\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(std::vector<class MobEffectInstance> const &, class Json::Value &, char const *);
    /**
     * @hash   -1535701671
     * @symbol  ?serialize\@Parser\@\@SAXAEBV?$vector\@W4LevelSoundEvent\@\@V?$allocator\@W4LevelSoundEvent\@\@\@std\@\@\@std\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(std::vector<enum class LevelSoundEvent> const &, class Json::Value &, char const *);
    /**
     * @hash   -2084642115
     * @symbol  ?serialize\@Parser\@\@SAXAEBVActorDefinitionTrigger\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(class ActorDefinitionTrigger const &, class Json::Value &, char const *);
    /**
     * @hash   388810849
     * @symbol  ?serialize\@Parser\@\@SAXAEBVHashedString\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(class HashedString const &, class Json::Value &, char const *);
    /**
     * @hash   -103038263
     * @symbol  ?serialize\@Parser\@\@SAXAEBVMobEffectInstance\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(class MobEffectInstance const &, class Json::Value &, char const *);
    /**
     * @hash   55362175
     * @symbol  ?serialize\@Parser\@\@SAXAEBVVec3\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(class Vec3 const &, class Json::Value &, char const *);
    /**
     * @hash   -1164281767
     * @symbol  ?serialize\@Parser\@\@SAXAEBW4ActorType\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class ActorType const &, class Json::Value &, char const *);
    /**
     * @hash   1876072965
     * @symbol  ?serialize\@Parser\@\@SAXAEBW4Difficulty\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class Difficulty const &, class Json::Value &, char const *);
    /**
     * @hash   -1954975441
     * @symbol  ?serialize\@Parser\@\@SAXAEBW4FilterSubject\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class FilterSubject const &, class Json::Value &, char const *);
    /**
     * @hash   -507304197
     * @symbol  ?serialize\@Parser\@\@SAXAEBW4ParticleType\@\@AEAVValue\@Json\@\@PEBD\@Z
     */
    MCAPI static void serialize(enum class ParticleType const &, class Json::Value &, char const *);

};