#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CommandOutput {

public:
    // prevent constructor by default
    CommandOutput& operator=(CommandOutput const&) = delete;
    CommandOutput()                                = delete;

public:
    /**
     * @symbol ??0CommandOutput\@\@QEAA\@AEBV0\@\@Z
     */
    MCAPI CommandOutput(class CommandOutput const&); // NOLINT
    /**
     * @symbol ??0CommandOutput\@\@QEAA\@W4CommandOutputType\@\@\@Z
     */
    MCAPI CommandOutput(enum class CommandOutputType); // NOLINT
    /**
     * @symbol
     * ?addToResultList\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBVActor\@\@\@Z
     */
    MCAPI void addToResultList(std::string const&, class Actor const&); // NOLINT
    /**
     * @symbol
     * ?addToResultList\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0\@Z
     */
    MCAPI void addToResultList(std::string const&, std::string const&); // NOLINT
    /**
     * @symbol ?empty\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool empty() const; // NOLINT
    /**
     * @symbol
     * ?error\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void error(std::string const&, std::vector<class CommandOutputParameter> const&); // NOLINT
    /**
     * @symbol
     * ?forceOutput\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void forceOutput(std::string const&, std::vector<class CommandOutputParameter> const&); // NOLINT
    /**
     * @symbol ?getData\@CommandOutput\@\@QEBAAEBVCommandPropertyBag\@\@XZ
     */
    MCAPI class CommandPropertyBag const& getData() const; // NOLINT
    /**
     * @symbol
     * ?getMessages\@CommandOutput\@\@QEBAAEBV?$vector\@VCommandOutputMessage\@\@V?$allocator\@VCommandOutputMessage\@\@\@std\@\@\@std\@\@XZ
     */
    MCAPI std::vector<class CommandOutputMessage> const& getMessages() const; // NOLINT
    /**
     * @symbol ?getSuccessCount\@CommandOutput\@\@QEBAHXZ
     */
    MCAPI int getSuccessCount() const; // NOLINT
    /**
     * @symbol ?getType\@CommandOutput\@\@QEBA?AW4CommandOutputType\@\@XZ
     */
    MCAPI enum class CommandOutputType getType() const; // NOLINT
    /**
     * @symbol ?hasErrorMessage\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool hasErrorMessage() const; // NOLINT
    /**
     * @symbol
     * ?load\@CommandOutput\@\@QEAAXW4CommandOutputType\@\@H$$QEAV?$vector\@VCommandOutputMessage\@\@V?$allocator\@VCommandOutputMessage\@\@\@std\@\@\@std\@\@$$QEAV?$unique_ptr\@VCommandPropertyBag\@\@U?$default_delete\@VCommandPropertyBag\@\@\@std\@\@\@4\@\@Z
     */
    MCAPI void
    load(enum class CommandOutputType, int, std::vector<class CommandOutputMessage>&&, std::unique_ptr<class CommandPropertyBag>&&); // NOLINT
    /**
     * @symbol ?setHasPlayerText\@CommandOutput\@\@QEAAXXZ
     */
    MCAPI void setHasPlayerText(); // NOLINT
    /**
     * @symbol ?success\@CommandOutput\@\@QEAAXXZ
     */
    MCAPI void success(); // NOLINT
    /**
     * @symbol
     * ?success\@CommandOutput\@\@QEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@\@Z
     */
    MCAPI void success(std::string const&, std::vector<class CommandOutputParameter> const&); // NOLINT
    /**
     * @symbol ?wantsData\@CommandOutput\@\@QEBA_NXZ
     */
    MCAPI bool wantsData() const; // NOLINT
    /**
     * @symbol ??1CommandOutput\@\@QEAA\@XZ
     */
    MCAPI ~CommandOutput(); // NOLINT

    // private:
    /**
     * @symbol
     * ?addMessage\@CommandOutput\@\@AEAAXAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@AEBV?$vector\@VCommandOutputParameter\@\@V?$allocator\@VCommandOutputParameter\@\@\@std\@\@\@3\@W4CommandOutputMessageType\@\@\@Z
     */
    MCAPI void addMessage(
        std::string const&,
        std::vector<class CommandOutputParameter> const&,
        enum class CommandOutputMessageType
    ); // NOLINT

private:
};
