#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
namespace JsonUtil { class EmptyClass; }
// clang-format on

class OfferFlowerGoal {
public:
    // OfferFlowerGoal inner types declare
    // clang-format off
    class OfferFlowerDefinition;
    // clang-format on

    // OfferFlowerGoal inner types define
    class OfferFlowerDefinition {

    public:
        // prevent constructor by default
        OfferFlowerDefinition& operator=(OfferFlowerDefinition const&) = delete;
        OfferFlowerDefinition(OfferFlowerDefinition const&)            = delete;
        OfferFlowerDefinition()                                        = delete;

    public:
        // NOLINTBEGIN
        /**
         * @symbol ?initialize\@OfferFlowerDefinition\@OfferFlowerGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class OfferFlowerGoal&) const;
        /**
         * @symbol
         * ?buildSchema\@OfferFlowerDefinition\@OfferFlowerGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VOfferFlowerDefinition\@OfferFlowerGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OfferFlowerGoal::OfferFlowerDefinition>>&);
        /**
         * @symbol ?getStrictParsingVersion\@OfferFlowerDefinition\@OfferFlowerGoal\@\@SA?AVSemVersion\@\@XZ
         */
        MCAPI static class SemVersion getStrictParsingVersion();
        // NOLINTEND
    };

public:
    // prevent constructor by default
    OfferFlowerGoal& operator=(OfferFlowerGoal const&) = delete;
    OfferFlowerGoal(OfferFlowerGoal const&)            = delete;
    OfferFlowerGoal()                                  = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?canUse\@OfferFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@OfferFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl 4
     * @symbol ?start\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void start();
    /**
     * @vftbl 5
     * @symbol ?stop\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl 6
     * @symbol ?tick\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void tick();
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@OfferFlowerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const;
    /**
     * @symbol ??0OfferFlowerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI OfferFlowerGoal(class Mob&);
    /**
     * @symbol ?getMaxOfferFlowerDurationTicks\@OfferFlowerGoal\@\@QEBAHXZ
     */
    MCAPI int getMaxOfferFlowerDurationTicks() const;
    // NOLINTEND
};
