/**
 * @file  CommandOutput.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here
#include "CommandOutputParameter.hpp"
#include "CommandOrigin.hpp"
#include "Command.hpp"
#include "ServerPlayer.hpp"
#include "../utils/PluginOwnData.h"
#include "../I18nAPI.h"

#define POD_COMMANDOUTPUT_LANGCODE ("_ll_plugin_cmdoutp_langcode_" + std::to_string((uint64_t)this))
#undef BEFORE_EXTRA

/**
 * @brief Command execution output
 *
 */
class CommandOutput {

#define AFTER_EXTRA
public:
    /**
     * @brief Output a normal message.
     *
     * @param str The message
     */
    LIAPI void addMessage(const std::string& str);

    /**
     * @brief Output a success message.
     *
     * @param str The message
     */
    LIAPI void success(const string& str);

    /**
     * @brief Output a error message.
     *
     * @param str The message
     */
    LIAPI void error(const string& str);

    inline void setLanguageCode(const std::string& code = "") {
        PluginOwnData::set<std::string>(POD_COMMANDOUTPUT_LANGCODE, code);
    }

    inline void setLanguageCode(const CommandOrigin& ori) {
        std::string code = "en_US";
        if (PluginOwnData::has(I18nBase::POD_KEY)) {
            auto& i18n = PluginOwnData::get<I18nBase>(I18nBase::POD_KEY);
            switch ((OriginType)ori.getOriginType()) {
                case OriginType::Player:
                    code = ori.getPlayer()->getLanguageCode();
                    break;
                default:
                    code = i18n.getDefaultLocaleName();
                    break;
            }
        }
        PluginOwnData::set<std::string>(POD_COMMANDOUTPUT_LANGCODE, code);
    }

    template <typename... Args>
    inline void trAddMessage(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->addMessage(
                trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->addMessage(tr(format, std::forward<Args>(args)...));
    }

    template <typename... Args>
    inline void trSuccess(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->success(
                trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->success(tr(format, std::forward<Args>(args)...));
    }

    template <typename... Args>
    inline void trError(const std::string& format, Args&&... args) {
        if (PluginOwnData::has(POD_COMMANDOUTPUT_LANGCODE))
            this->error(
                trl(PluginOwnData::get<std::string>(POD_COMMANDOUTPUT_LANGCODE), format, std::forward<Args>(args)...));
        else
            this->error(tr(format, std::forward<Args>(args)...));
    }

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMMANDOUTPUT
public:
    class CommandOutput& operator=(class CommandOutput const &) = delete;
    CommandOutput() = delete;
#endif

public:
    /**
     * @hash   1673608903
     * @symbol  ??0CommandOutput\@\@QEAA\@W4CommandOutputType\@\@\@Z
     */
    MCAPI CommandOutput(enum class CommandOutputType);
    /**
     * @hash   -2133005519
     * @symbol  ??0CommandOutput\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandOutput(class CommandOutput const &);
    /**
     * @hash   910831274
     * @symbol  ?addToResultList\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addToResultList(std::string const &, std::string const &);
    /**
     * @hash   1560363093
     * @symbol  ?addToResultList\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addToResultList(std::string const &, class Actor const &);
    /**
     * @hash   1399956326
     * @symbol  ?empty\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool empty() const;
    /**
     * @hash   705250931
     * @symbol  ?error\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void error(std::string const &, std::vector<class CommandOutputParameter> const &);
    /**
     * @hash   316906331
     * @symbol  ?forceOutput\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void forceOutput(std::string const &, std::vector<class CommandOutputParameter> const &);
    /**
     * @hash   -1213786350
     * @symbol  ?getData\@CommandOutput\@\@QEBAAEBVCommandPropertyBag\@\@XZ
     */
    MCAPI class CommandPropertyBag const & getData() const;
    /**
     * @hash   549542560
     * @symbol  ?getMessages\@CommandOutput\@\@QEBAAEBV?$vector\@VCommandOutputMessage\@\@V?$allocator\@VCommandOutputMessage\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class CommandOutputMessage> const & getMessages() const;
    /**
     * @hash   435136428
     * @symbol  ?getSuccessCount\@CommandOutput\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const;
    /**
     * @hash   -908692290
     * @symbol  ?getType\@CommandOutput\@\@QEBA?AW4CommandOutputType\@\@XZ
     */
    MCAPI enum class CommandOutputType getType() const;
    /**
     * @hash   -1982801754
     * @symbol  ?hasErrorMessage\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool hasErrorMessage() const;
    /**
     * @hash   896587766
     * @symbol  ?hasPlayerText\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool hasPlayerText() const;
    /**
     * @hash   132468258
     * @symbol  ?load\@CommandOutput\@\@QEAAXW4CommandOutputType\@\@H$$QEAV?$vector\@VCommandOutputMessage\@\@V?$allocator\@VCommandOutputMessage\@\@\@std\@\@\@std\@\@$$QEAV?$unique_ptr\@VCommandPropertyBag\@\@U?$default_delete\@VCommandPropertyBag\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void load(enum class CommandOutputType, int, std::vector<class CommandOutputMessage> &&, std::unique_ptr<class CommandPropertyBag> &&);
    /**
     * @hash   619267423
     * @symbol  ?setHasPlayerText\@CommandOutput\@\@QEAAXXZ
     */
    MCAPI void setHasPlayerText();
    /**
     * @hash   1065692121
     * @symbol  ?success\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void success(std::string const &, std::vector<class CommandOutputParameter> const &);
    /**
     * @hash   -551397909
     * @symbol  ?success\@CommandOutput\@\@QEAAXXZ
     */
    MCAPI void success();
    /**
     * @hash   -1981273626
     * @symbol  ?wantsData\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool wantsData() const;
    /**
     * @hash   -1178513368
     * @symbol  ??1CommandOutput\@\@QEAA\@XZ
     */
    MCAPI ~CommandOutput();

//private:
    /**
     * @hash   1455621638
     * @symbol  ?addMessage\@CommandOutput\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@W4CommandOutputMessageType\@\@\@Z
     */
    MCAPI void addMessage(std::string const &, std::vector<class CommandOutputParameter> const &, enum class CommandOutputMessageType);

private:

};