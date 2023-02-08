/**
 * @file  NpcDialogueStorage.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class NpcDialogueStorage.
 *
 */
class NpcDialogueStorage {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_NPCDIALOGUESTORAGE
public:
    class NpcDialogueStorage& operator=(class NpcDialogueStorage const &) = delete;
    NpcDialogueStorage(class NpcDialogueStorage const &) = delete;
    NpcDialogueStorage() = delete;
#endif

public:
    /**
     * @hash   1667687178
     * @symbol  ?getScene\@NpcDialogueStorage\@\@QEAAPEAUNpcDialogueScene\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct NpcDialogueScene * getScene(std::string const &);
    /**
     * @hash   1545538218
     * @symbol  ?getScene\@NpcDialogueStorage\@\@QEBAPEBUNpcDialogueScene\@\@AEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@\@Z
     */
    MCAPI struct NpcDialogueScene const * getScene(std::string const &) const;
    /**
     * @hash   -815997448
     * @symbol  ?init\@NpcDialogueStorage\@\@QEAAXAEAVResourcePackManager\@\@\@Z
     */
    MCAPI void init(class ResourcePackManager &);
    /**
     * @hash   -1263481644
     * @symbol  ?parseFile\@NpcDialogueStorage\@\@QEAA_NAEBV?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@0W4CurrentCmdVersion\@\@\@Z
     */
    MCAPI bool parseFile(std::string const &, std::string const &, enum class CurrentCmdVersion);

};