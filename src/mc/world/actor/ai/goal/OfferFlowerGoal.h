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
        /**
         * @symbol ?initialize\@OfferFlowerDefinition\@OfferFlowerGoal\@\@QEBAXAEAVEntityContext\@\@AEAV2\@\@Z
         */
        MCAPI void initialize(class EntityContext&, class OfferFlowerGoal&) const; // NOLINT
        /**
         * @symbol
         * ?buildSchema\@OfferFlowerDefinition\@OfferFlowerGoal\@\@SAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEAV?$shared_ptr\@V?$JsonSchemaObjectNode\@VEmptyClass\@JsonUtil\@\@VOfferFlowerDefinition\@OfferFlowerGoal\@\@\@JsonUtil\@\@\@4\@\@Z
         */
        MCAPI static void
        buildSchema(std::string const&, class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, class OfferFlowerGoal::OfferFlowerDefinition>>&); // NOLINT
        /**
         * @symbol ?getStrictParsingVersion\@OfferFlowerDefinition\@OfferFlowerGoal\@\@SA?AVSemVersion\@\@XZ
         */
        MCAPI static class SemVersion getStrictParsingVersion(); // NOLINT
    };

public:
    // prevent constructor by default
    OfferFlowerGoal& operator=(OfferFlowerGoal const&) = delete;
    OfferFlowerGoal(OfferFlowerGoal const&)            = delete;
    OfferFlowerGoal()                                  = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?canUse\@OfferFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canUse(); // NOLINT
    /**
     * @vftbl 2
     * @symbol ?canContinueToUse\@OfferFlowerGoal\@\@UEAA_NXZ
     */
    virtual bool canContinueToUse(); // NOLINT
    /**
     * @vftbl 3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3(); // NOLINT
    /**
     * @vftbl 4
     * @symbol ?start\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void start(); // NOLINT
    /**
     * @vftbl 5
     * @symbol ?stop\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void stop(); // NOLINT
    /**
     * @vftbl 6
     * @symbol ?tick\@OfferFlowerGoal\@\@UEAAXXZ
     */
    virtual void tick(); // NOLINT
    /**
     * @vftbl 7
     * @symbol
     * ?appendDebugInfo\@OfferFlowerGoal\@\@UEBAXAEAV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    virtual void appendDebugInfo(std::string&) const; // NOLINT
    /**
     * @symbol ??0OfferFlowerGoal\@\@QEAA\@AEAVMob\@\@\@Z
     */
    MCAPI OfferFlowerGoal(class Mob&); // NOLINT
    /**
     * @symbol ?getMaxOfferFlowerDurationTicks\@OfferFlowerGoal\@\@QEBAHXZ
     */
    MCAPI int getMaxOfferFlowerDurationTicks() const; // NOLINT
};
