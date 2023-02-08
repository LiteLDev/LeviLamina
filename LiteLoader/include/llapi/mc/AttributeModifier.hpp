/**
 * @file  AttributeModifier.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
enum class AttributeModifierOperation : int {
    OPERATION_ADDITION = 0x0,
    OPERATION_MULTIPLY_BASE = 0x1,
    OPERATION_MULTIPLY_TOTAL = 0x2,
    OPERATION_CAP = 0x3,
    TOTAL_OPERATIONS = 0x4,
    OPERATION_INVALID = 0x4,
};

enum class AttributeOperands : int {
    OPERAND_MIN = 0x0,
    OPERAND_MAX = 0x1,
    OPERAND_CURRENT = 0x2,
    TOTAL_OPERANDS = 0x3,
    OPERAND_INVALID = 0x3,
};
#undef BEFORE_EXTRA

/**
 * @brief MC class AttributeModifier.
 *
 */
class AttributeModifier {

#define AFTER_EXTRA
    // Add Member There
public:
    float mAmount;
    AttributeModifierOperation mOperation;
    AttributeOperands mOperand;
    string mName;
    mce::UUID mId;
    bool mSerialize;

#undef AFTER_EXTRA
public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~AttributeModifier();
    /**
     * @hash   -557695407
     * @vftbl  1
     * @symbol  ?isInstantaneous\@AttributeModifier\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @hash   183417023
     * @symbol  ??0AttributeModifier\@\@QEAA\@XZ
     */
    MCAPI AttributeModifier();
    /**
     * @hash   656582535
     * @symbol  ??0AttributeModifier\@\@QEAA\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MW4AttributeModifierOperation\@\@W4AttributeOperands\@\@_N\@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, enum class AttributeModifierOperation, enum class AttributeOperands, bool);
    /**
     * @hash   113016129
     * @symbol  ??0AttributeModifier\@\@QEAA\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MHH_N\@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, int, int, bool);
    /**
     * @hash   -1543388335
     * @symbol  ??0AttributeModifier\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeModifier(class AttributeModifier const &);
    /**
     * @hash   -54810846
     * @symbol  ?getAmount\@AttributeModifier\@\@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @hash   -804601664
     * @symbol  ?getId\@AttributeModifier\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getId() const;
    /**
     * @hash   1386316944
     * @symbol  ?getName\@AttributeModifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @hash   -642426020
     * @symbol  ?getOperand\@AttributeModifier\@\@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @hash   -1163408344
     * @symbol  ?getOperation\@AttributeModifier\@\@QEBAHXZ
     */
    MCAPI int getOperation() const;
    /**
     * @hash   94296810
     * @symbol  ?isSerializable\@AttributeModifier\@\@QEBA_NXZ
     */
    MCAPI bool isSerializable() const;
    /**
     * @hash   -832510164
     * @symbol  ??4AttributeModifier\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AttributeModifier & operator=(class AttributeModifier const &);
    /**
     * @hash   -1736971468
     * @symbol  ??8AttributeModifier\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeModifier const &) const;

//private:

private:
    /**
     * @hash   -80861108
     * @symbol  ?mInvalidUUID\@AttributeModifier\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const mInvalidUUID;

};