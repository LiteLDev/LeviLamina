/**
 * @file  Parser.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

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
     * @hash   -1508139436
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAEE@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, unsigned char &, unsigned char);
    /**
     * @hash   854239062
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAHPEBDH@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, int &, char const *, int);
    /**
     * @hash   -1208362244
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAIPEBDI@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, unsigned int &, char const *, unsigned int);
    /**
     * @hash   -164736388
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAMPEBDM@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, float &, char const *, float);
    /**
     * @hash   622422532
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAUActorDefinitionIdentifier@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, struct ActorDefinitionIdentifier &, char const *, char const *);
    /**
     * @hash   1615173520
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAUFloatRange@@PEBD@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, struct FloatRange &, char const *);
    /**
     * @hash   -1412726720
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAUIntRange@@PEBDHH@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, struct IntRange &, char const *, int, int);
    /**
     * @hash   -1585914386
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV23@PEBD@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class Json::Value &, char const *);
    /**
     * @hash   463315933
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$WeightedChoices@VActorDefinitionTrigger@@@@PEBD@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class WeightedChoices<class ActorDefinitionTrigger> &, char const *);
    /**
     * @hash   1792063402
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::string &, char const *, char const *);
    /**
     * @hash   -430770563
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@PEBD@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<std::string> &, char const *);
    /**
     * @hash   -281657532
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<class BlockDescriptor> &);
    /**
     * @hash   253839368
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@PEBD@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<class BlockDescriptor> &, char const *);
    /**
     * @hash   1635141400
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@W4LevelSoundEvent@@V?$allocator@W4LevelSoundEvent@@@std@@@std@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, std::vector<enum LevelSoundEvent> &, char const *, char const *);
    /**
     * @hash   -1648232548
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVBlockDescriptor@@@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class BlockDescriptor &);
    /**
     * @hash   -861495928
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVHashedString@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class HashedString &, char const *, char const *);
    /**
     * @hash   -772006156
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVMobEffectInstance@@PEBD@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class MobEffectInstance &, char const *);
    /**
     * @hash   1537278647
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAVVec3@@PEBDAEBV5@@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, class Vec3 &, char const *, class Vec3 const &);
    /**
     * @hash   -1725450244
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAW4ActorType@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, enum ActorType &, char const *, char const *);
    /**
     * @hash   -1517185524
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAW4Difficulty@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, enum Difficulty &, char const *, char const *);
    /**
     * @hash   109948188
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEAW4ParticleType@@PEBD3@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, enum ParticleType &, char const *, char const *);
    /**
     * @hash   655995188
     * @symbol ?parse@Parser@@SAXAEBVValue@Json@@AEBVSemVersion@@AEA_NPEBD_N@Z
     */
    MCAPI static void parse(class Json::Value const &, class SemVersion const &, bool &, char const *, bool);
    /**
     * @hash   1171866893
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VActorDefinitionTrigger@@V?$allocator@VActorDefinitionTrigger@@@std@@@std@@@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, std::vector<class ActorDefinitionTrigger> &);
    /**
     * @hash   1120232297
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, std::vector<class ItemDescriptor> &);
    /**
     * @hash   625344669
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVActorDefinitionTrigger@@PEBD@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class ActorDefinitionTrigger &, char const *);
    /**
     * @hash   2066969874
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVActorDefinitionTrigger@@_N@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class ActorDefinitionTrigger &, bool);
    /**
     * @hash   -1795897204
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVDefinitionTrigger@@_N@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class DefinitionTrigger &, bool);
    /**
     * @hash   617623845
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAVItemDescriptor@@@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, class ItemDescriptor &);
    /**
     * @hash   18264843
     * @symbol ?parse@Parser@@SA_NAEBVValue@Json@@AEBVSemVersion@@AEAW4FilterSubject@@PEBD3@Z
     */
    MCAPI static bool parse(class Json::Value const &, class SemVersion const &, enum FilterSubject &, char const *, char const *);
    /**
     * @hash   2132569029
     * @symbol ?serialize@Parser@@SAXAEBUActorDefinitionIdentifier@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(struct ActorDefinitionIdentifier const &, class Json::Value &, char const *);
    /**
     * @hash   -1610738135
     * @symbol ?serialize@Parser@@SAXAEBUFloatRange@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(struct FloatRange const &, class Json::Value &, char const *);
    /**
     * @hash   2131452911
     * @symbol ?serialize@Parser@@SAXAEBUIntRange@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(struct IntRange const &, class Json::Value &, char const *);
    /**
     * @hash   470932202
     * @symbol ?serialize@Parser@@SAXAEBV?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(std::vector<std::string> const &, class Json::Value &, char const *);
    /**
     * @hash   1512170821
     * @symbol ?serialize@Parser@@SAXAEBV?$vector@VBlockDescriptor@@V?$allocator@VBlockDescriptor@@@std@@@std@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(std::vector<class BlockDescriptor> const &, class Json::Value &, char const *);
    /**
     * @hash   2045776881
     * @symbol ?serialize@Parser@@SAXAEBV?$vector@VMobEffectInstance@@V?$allocator@VMobEffectInstance@@@std@@@std@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(std::vector<class MobEffectInstance> const &, class Json::Value &, char const *);
    /**
     * @hash   -892185319
     * @symbol ?serialize@Parser@@SAXAEBV?$vector@W4LevelSoundEvent@@V?$allocator@W4LevelSoundEvent@@@std@@@std@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(std::vector<enum LevelSoundEvent> const &, class Json::Value &, char const *);
    /**
     * @hash   -1441125763
     * @symbol ?serialize@Parser@@SAXAEBVActorDefinitionTrigger@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(class ActorDefinitionTrigger const &, class Json::Value &, char const *);
    /**
     * @hash   1032327201
     * @symbol ?serialize@Parser@@SAXAEBVHashedString@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(class HashedString const &, class Json::Value &, char const *);
    /**
     * @hash   540478089
     * @symbol ?serialize@Parser@@SAXAEBVMobEffectInstance@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(class MobEffectInstance const &, class Json::Value &, char const *);
    /**
     * @hash   698878527
     * @symbol ?serialize@Parser@@SAXAEBVVec3@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(class Vec3 const &, class Json::Value &, char const *);
    /**
     * @hash   -520765415
     * @symbol ?serialize@Parser@@SAXAEBW4ActorType@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(enum ActorType const &, class Json::Value &, char const *);
    /**
     * @hash   -1775377979
     * @symbol ?serialize@Parser@@SAXAEBW4Difficulty@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(enum Difficulty const &, class Json::Value &, char const *);
    /**
     * @hash   -1311535969
     * @symbol ?serialize@Parser@@SAXAEBW4FilterSubject@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(enum FilterSubject const &, class Json::Value &, char const *);
    /**
     * @hash   136150651
     * @symbol ?serialize@Parser@@SAXAEBW4ParticleType@@AEAVValue@Json@@PEBD@Z
     */
    MCAPI static void serialize(enum ParticleType const &, class Json::Value &, char const *);

};