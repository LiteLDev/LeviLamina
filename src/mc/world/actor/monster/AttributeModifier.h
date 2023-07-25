#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace mce { class UUID; }
// clang-format on

class AttributeModifier {

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?isInstantaneous\@AttributeModifier\@\@UEBA_NXZ
     */
    virtual bool isInstantaneous() const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ATTRIBUTEMODIFIER
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~AttributeModifier();
#endif
    /**
     * @symbol
     * ??0AttributeModifier\@\@QEAA\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MW4AttributeModifierOperation\@\@W4AttributeOperands\@\@_N\@Z
     */
    MCAPI AttributeModifier(
        class mce::UUID,
        std::string const&,
        float,
        enum class AttributeModifierOperation,
        enum class AttributeOperands,
        bool
    );
    /**
     * @symbol ??0AttributeModifier\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI AttributeModifier(class AttributeModifier const&);
    /**
     * @symbol ??0AttributeModifier\@\@QEAA\@XZ
     */
    MCAPI AttributeModifier();
    /**
     * @symbol
     * ??0AttributeModifier\@\@QEAA\@VUUID\@mce\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@MHH_N\@Z
     */
    MCAPI AttributeModifier(class mce::UUID, std::string const&, float, int, int, bool);
    /**
     * @symbol ?getAmount\@AttributeModifier\@\@QEBAMXZ
     */
    MCAPI float getAmount() const;
    /**
     * @symbol ?getId\@AttributeModifier\@\@QEBAAEBVUUID\@mce\@\@XZ
     */
    MCAPI class mce::UUID const& getId() const;
    /**
     * @symbol
     * ?getName\@AttributeModifier\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const& getName() const;
    /**
     * @symbol ?getOperand\@AttributeModifier\@\@QEBAHXZ
     */
    MCAPI int getOperand() const;
    /**
     * @symbol ?getOperation\@AttributeModifier\@\@QEBAHXZ
     */
    MCAPI int getOperation() const;
    /**
     * @symbol ?isSerializable\@AttributeModifier\@\@QEBA_NXZ
     */
    MCAPI bool isSerializable() const;
    /**
     * @symbol ??4AttributeModifier\@\@QEAAAEAV0\@AEBV0\@\@Z
     */
    MCAPI class AttributeModifier& operator=(class AttributeModifier const&);
    /**
     * @symbol ??8AttributeModifier\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class AttributeModifier const&) const;

    // private:

private:
    /**
     * @symbol ?mInvalidUUID\@AttributeModifier\@\@0VUUID\@mce\@\@B
     */
    MCAPI static class mce::UUID const mInvalidUUID;
};
