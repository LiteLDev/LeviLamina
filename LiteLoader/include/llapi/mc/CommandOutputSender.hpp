/**
 * @file  CommandOutputSender.hpp
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
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?send\@CommandOutputSender\@\@UEAAXAEBVCommandOrigin\@\@AEBVCommandOutput\@\@\@Z
     */
    virtual void send(class CommandOrigin const &, class CommandOutput const &);
    /**
     * @vftbl 2
     * @symbol ?registerOutputCallback\@CommandOutputSender\@\@UEAAXAEBV?$function\@$$A6AXAEAVAutomationCmdOutput\@\@\@Z\@std\@\@\@Z
     */
    virtual void registerOutputCallback(class std::function<void (class AutomationCmdOutput &)> const &);
    /**
     * @symbol ??0CommandOutputSender\@\@QEAA\@XZ
     */
    MCAPI CommandOutputSender();
    /**
     * @symbol ?sendToAdmins\@CommandOutputSender\@\@QEAAXAEBVCommandOrigin\@\@AEBVCommandOutput\@\@W4CommandPermissionLevel\@\@\@Z
     */
    MCAPI void sendToAdmins(class CommandOrigin const &, class CommandOutput const &, enum class CommandPermissionLevel);
    /**
     * @symbol ?translate\@CommandOutputSender\@\@SA?AV?$vector\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@V?$allocator\@V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@2\@\@std\@\@AEBV23\@\@Z
     */
    MCAPI static std::vector<std::string> translate(std::vector<std::string> const &);

//protected:
    /**
     * @symbol ?_toJson\@CommandOutputSender\@\@IEBA?AVValue\@Json\@\@AEBVCommandOutput\@\@\@Z
     */
    MCAPI class Json::Value _toJson(class CommandOutput const &) const;

protected:

};
