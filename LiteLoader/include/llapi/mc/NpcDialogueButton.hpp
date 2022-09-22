/**
 * @file  NpcDialogueButton.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure NpcDialogueButton.
 *
 */
struct NpcDialogueButton {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUEBUTTON
public:
    struct NpcDialogueButton& operator=(struct NpcDialogueButton const &) = delete;
    NpcDialogueButton(struct NpcDialogueButton const &) = delete;
#endif

public:
    /**
     * @hash   703804791
     * @symbol ??0NpcDialogueButton@@QEAA@XZ
     */
    MCAPI NpcDialogueButton();
    /**
     * @hash   -1199881977
     * @symbol ??1NpcDialogueButton@@QEAA@XZ
     */
    MCAPI ~NpcDialogueButton();
    /**
     * @hash   1060675225
     * @symbol ?parse@NpcDialogueButton@@SA?AU1@AEBVValue@Json@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@H@Z
     */
    MCAPI static struct NpcDialogueButton parse(class Json::Value const &, std::string const &, int);

};