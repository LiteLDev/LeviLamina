/**
 * @file  CommandOutputSender.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class CommandOutputSender.
 *
 */
class CommandOutputSender {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUTSENDER
public:
    class CommandOutputSender& operator=(class CommandOutputSender const &) = delete;
    CommandOutputSender(class CommandOutputSender const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol  __unk_destructor_0
     */
    virtual ~CommandOutputSender();
    /**
     * @vftbl  1
     * @symbol  ?send\@CommandOutputSender\@\@UEAAXAEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    virtual void send(class CommandOrigin const &, class CommandOutput const &);
    /**
     * @vftbl  2
     * @symbol  ?registerOutputCallback\@CommandOutputSender\@\@UEAAXAEBV?$function\@$$A6AXAEAVAutomationCmdOutput\@\@\@Z\@std\@\@\@Z
     */
    virtual void registerOutputCallback(class std::function<void (class AutomationCmdOutput &)> const &);
    /**
     * @vftbl  3
     * @symbol  __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  ?_Get\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEBAPEBXXZ
     */
    virtual void const * _Get() const;
    /**
     * @vftbl  9
     * @symbol  __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @vftbl  10
     * @symbol  __unk_vfn_10
     */
    virtual void __unk_vfn_10();
    /**
     * @vftbl  11
     * @symbol  __unk_vfn_11
     */
    virtual void __unk_vfn_11();
    /**
     * @vftbl  12
     * @symbol  __unk_vfn_12
     */
    virtual void __unk_vfn_12();
    /**
     * @vftbl  13
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @symbol  ??0CommandOutputSender\@\@QEAA\@XZ
     */
    MCAPI CommandOutputSender();
    /**
     * @symbol  ?sendToAdmins\@CommandOutputSender\@\@QEAAXAEBVCommandOrigin\@\@AEBVCommandOutput\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void sendToAdmins(class CommandOrigin const &, class CommandOutput const &, enum class CommandPermissionLevel);
    /**
     * @symbol  ?translate\@CommandOutputSender\@\@SA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::vector<std::string> translate(std::vector<std::string> const &);

//protected:
    /**
     * @symbol  ?_toJson\@CommandOutputSender\@\@IEBA?AVValue\@Json\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI class Json::Value _toJson(class CommandOutput const &) const;

protected:

};