#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class PlayDeadGoal {
public:
    // PlayDeadGoal inner types declare
    // clang-format off
    class Definition;
    // clang-format on

    // PlayDeadGoal inner types define
    class Definition {

    public:
        // prevent constructor by default
        Definition& operator=(Definition const&) = delete;
        Definition(Definition const&)            = delete;

    public:
        // NOLINTBEGIN
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYDEADGOAL_DEFINITION
        /**
         * @symbol __unk_destructor_-1
         */
        MCVAPI ~Definition();
#endif
        /**
         * @symbol ??0Definition\@PlayDeadGoal\@\@QEAA\@XZ
         */
        MCAPI Definition();
        /**
         * @symbol
         * ?addDamageCause\@Definition\@PlayDeadGoal\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
         */
        MCAPI void addDamageCause(std::string const&);
        /**
         * @symbol ?initialize\@Definition\@PlayDeadGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class PlayDeadGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@Definition\@PlayDeadGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VDefinition\@PlayDeadGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class PlayDeadGoal::Definition>>&);
        // NOLINTEND
    };

public:
    // prevent constructor by default
    PlayDeadGoal& operator=(PlayDeadGoal const&) = delete;
    PlayDeadGoal(PlayDeadGoal const&)            = delete;
    PlayDeadGoal()                               = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@PlayDeadGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@PlayDeadGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@PlayDeadGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@PlayDeadGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@PlayDeadGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0PlayDeadGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI PlayDeadGoal(class Mob&);
    // NOLINTEND
};
