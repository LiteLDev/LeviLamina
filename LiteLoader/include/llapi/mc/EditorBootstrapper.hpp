/**
 * @file  MC/EditorBootstrapper.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class EditorBootstrapper.
 *
 */
class EditorBootstrapper {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDITORBOOTSTRAPPER
public:
    class EditorBootstrapper& operator=(class EditorBootstrapper const &) = delete;
    EditorBootstrapper(class EditorBootstrapper const &) = delete;
    EditorBootstrapper() = delete;
#endif

public:
    /**
     * @hash   1084188102
     * @symbol ?createEditorManager@EditorBootstrapper@@QEBA?AV?$unique_ptr@VIEditorManager@Editor@@U?$default_delete@VIEditorManager@Editor@@@std@@@std@@XZ
     */
    MCAPI std::unique_ptr<class Editor::IEditorManager> createEditorManager() const;
    /**
     * @hash   -1898014084
     * @symbol ?getRequestedMap@EditorBootstrapper@@QEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCAPI std::string const & getRequestedMap() const;
    /**
     * @hash   1534553880
     * @symbol ?hasRequestedMap@EditorBootstrapper@@QEBA_NXZ
     */
    MCAPI bool hasRequestedMap() const;
    /**
     * @hash   761630246
     * @symbol ?isEditorModeEnabled@EditorBootstrapper@@QEBA_NXZ
     */
    MCAPI bool isEditorModeEnabled() const;
    /**
     * @hash   -1484986640
     * @symbol ?processActivationArguments@EditorBootstrapper@@QEAAXAEBVActivationArguments@Bedrock@@@Z
     */
    MCAPI void processActivationArguments(class Bedrock::ActivationArguments const &);

};