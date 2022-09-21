/**
 * @file  MC/INpcDialogueData.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure INpcDialogueData.
 *
 */
struct INpcDialogueData {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INPCDIALOGUEDATA
public:
    struct INpcDialogueData& operator=(struct INpcDialogueData const &) = delete;
    INpcDialogueData(struct INpcDialogueData const &) = delete;
    INpcDialogueData() = delete;
#endif

public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INPCDIALOGUEDATA
    /**
     * @hash   -673922123
     * @symbol ?getRawDialogueText@INpcDialogueData@@UEBAAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     */
    MCVAPI std::string const & getRawDialogueText() const;
    /**
     * @hash   -1728725307
     * @symbol ?isRemoteFire@INpcDialogueData@@UEAA_NXZ
     */
    MCVAPI bool isRemoteFire();
#endif

};