#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class SniffGoal {
public:
    // SniffGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // SniffGoal inner types define
    class Definition {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNIFFGOAL_DEFINITION
    public:
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;
#endif

    public:
        /**
         * @symbol ??0Definition\@SniffGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol ?initialize\@Definition\@SniffGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class SniffGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@SniffGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@SniffGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class SniffGoal::Definition>>&);
    };

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SNIFFGOAL
public:
    SniffGoal& operator=(SniffGoal const&) = delete;
    SniffGoal(SniffGoal const&)            = delete;
    SniffGoal()                            = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@SniffGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@SniffGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@SniffGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@SniffGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@SniffGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@SniffGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0SniffGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI SniffGoal(class Mob&);

    // private:
    /**
     * @symbol
     * ?_fetchNearbySniffableActors\@SniffGoal\@\@AEBA?AV?$vector\@UDistanceSortedActor\@\@V?$allocator\@UDistanceSortedActor\@\@\@std\@\@\@std\@\@W4ActorType\@\@\@Z
     */
    MCAPI std::vector<struct DistanceSortedActor> _fetchNearbySniffableActors(enum class ActorType) const;
    /**
     * @symbol ?_fetchNearestSniffableActor\@SniffGoal\@\@AEBA?AV?$optional\@UDistanceSortedActor\@\@\@std\@\@XZ
     */
    MCAPI class std::optional<struct DistanceSortedActor> _fetchNearestSniffableActor() const;

private:
};
