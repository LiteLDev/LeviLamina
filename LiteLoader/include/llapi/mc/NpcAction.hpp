/**
 * @file  NpcAction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcAction.
 *
 */
class NpcAction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCACTION
public:
    class NpcAction& operator=(class NpcAction const &) = delete;
    NpcAction(class NpcAction const &) = delete;
    NpcAction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~NpcAction();
    /**
     * @vftbl  1
     * @symbol  __unk_vfn_1
     */
    virtual void __unk_vfn_1() = 0;
    /**
     * @hash   -66927196
     * @vftbl  2
     * @symbol  ?fromJson\@NpcAction\@\@UEAA_NAEBVValue\@Json\@\@\@Z
     */
    virtual bool fromJson(class Json::Value const &);
    /**
     * @hash   -743331544
     * @symbol  ?getMode\@NpcAction\@\@QEBA?AW4NpcActionMode\@\@XZ
     */
    MCAPI enum class NpcActionMode getMode() const;
    /**
     * @hash   386388644
     * @symbol  ?getText\@NpcAction\@\@QEBAAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@XZ
     */
    MCAPI std::string const & getText() const;
    /**
     * @hash   1215689832
     * @symbol  ?getType\@NpcAction\@\@QEBA?AW4NpcActionType\@\@XZ
     */
    MCAPI enum class NpcActionType getType() const;
    /**
     * @hash   -272265467
     * @symbol  ??9NpcAction\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator!=(class NpcAction const &) const;
    /**
     * @hash   2141233344
     * @symbol  ??8NpcAction\@\@QEBA_NAEBV0\@\@Z
     */
    MCAPI bool operator==(class NpcAction const &) const;
    /**
     * @hash   607609646
     * @symbol  ?setButtonName\@NpcAction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setButtonName(std::string const &);
    /**
     * @hash   -1268622280
     * @symbol  ?setMode\@NpcAction\@\@QEAAXW4NpcActionMode\@\@\@Z
     */
    MCAPI void setMode(enum class NpcActionMode);
    /**
     * @hash   -1676045122
     * @symbol  ?setText\@NpcAction\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI void setText(std::string const &);
    /**
     * @hash   -1808723123
     * @symbol  ?read\@NpcAction\@\@SA?AV?$unique_ptr\@VNpcAction\@\@U?$default_delete\@VNpcAction\@\@\@std\@\@\@std\@\@AEBVValue\@Json\@\@\@Z
     */
    MCAPI static std::unique_ptr<class NpcAction> read(class Json::Value const &);

//protected:
    /**
     * @hash   1609548835
     * @symbol  ?toJsonBase\@NpcAction\@\@IEAA?AVValue\@Json\@\@AEAV23\@\@Z
     */
    MCAPI class Json::Value toJsonBase(class Json::Value &);

//private:

protected:

private:
    /**
     * @hash   264803236
     * @symbol  ?BUTTON_NAME_KEY\@NpcAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const BUTTON_NAME_KEY;
    /**
     * @hash   -1026862218
     * @symbol  ?DATA_KEY\@NpcAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const DATA_KEY;
    /**
     * @hash   2032009085
     * @symbol  ?MAX_BUTTON_NAME_LENGTH\@NpcAction\@\@0HB
     */
    MCAPI static int const MAX_BUTTON_NAME_LENGTH;
    /**
     * @hash   719653807
     * @symbol  ?MODE_KEY\@NpcAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const MODE_KEY;
    /**
     * @hash   -1723967847
     * @symbol  ?TEXT_KEY\@NpcAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TEXT_KEY;
    /**
     * @hash   159505638
     * @symbol  ?TYPE_KEY\@NpcAction\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const TYPE_KEY;

};