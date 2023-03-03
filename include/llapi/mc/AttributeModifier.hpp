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
     * @vftbl  1
     * @symbol  ?isInstantaneous\@AttributeModifier\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
    /**
     * @symbol  ??0AttributeModifier\@\@QEAA\@XZ
     */
    MCAPI AttributeModifier();
    /**
     * @symbol  ??0AttributeModifier\@\@QEAA\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MW4AttributeModifierOperation\@\@W4AttributeOperands\@\@_N\@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, enum class AttributeModifierOperation, enum class AttributeOperands, bool);
    /**
     * @symbol  ??0AttributeModifier\@\@QEAA\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MHH_N\@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const &, float, int, int, bool);
    /**
     * @symbol  ??0AttributeModifier\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeModifier(class AttributeModifier const &);
    /**
     * @symbol  ?getAmount\@AttributeModifier\@\@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @symbol  ?getId\@AttributeModifier\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const & getId() const;
    /**
     * @symbol  ?getName\@AttributeModifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getName() const;
    /**
     * @symbol  ?getOperand\@AttributeModifier\@\@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @symbol  ?getOperation\@AttributeModifier\@\@QEBAHXZ
     */
    MCAPI int getOperation() const;
    /**
     * @symbol  ?isSerializable\@AttributeModifier\@\@QEBA_NXZ
     */
    MCAPI bool isSerializable() const;
    /**
     * @symbol  ??4AttributeModifier\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AttributeModifier & operator=(class AttributeModifier const &);
    /**
     * @symbol  ??8AttributeModifier\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeModifier const &) const;

//private:

private:
    /**
     * @symbol  ?mInvalidUUID\@AttributeModifier\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const mInvalidUUID;

};