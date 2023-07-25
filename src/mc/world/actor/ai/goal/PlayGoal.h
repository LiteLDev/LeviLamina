#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PlayGoal {
public:
    // PlayGoal inner types declare
    // clang-format off
    class PlayDefinition;
    // clang-format on

    // PlayGoal inner types define
    class PlayDefinition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYGOAL_PLAYDEFINITION
    public:
        PlayDefinition& operator=(PlayDefinition const&) = delete;
        PlayDefinition(PlayDefinition const&)            = delete;
        PlayDefinition()                                 = delete;
#endif

    public:
        /**
         * @symbol ?initialize\@PlayDefinition\@PlayGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class PlayGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@PlayDefinition\@PlayGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VPlayDefinition\@PlayGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PlayGoal::PlayDefinition>>&);
        /**
         * @symbol ?getStrictParsingVersion\@PlayDefinition\@PlayGoal\@\@SA?AVSemVersion\@\@XZ
         */
        MCAPI static class SemVersion getStrictParsingVersion();
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYGOAL
public:
    PlayGoal& operator=(PlayGoal const&) = delete;
    PlayGoal(PlayGoal const&)            = delete;
    PlayGoal()                           = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@PlayGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PlayGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@PlayGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@PlayGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@PlayGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PlayGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0PlayGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayGoal(class Mob&);
};
