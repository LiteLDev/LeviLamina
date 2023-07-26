/**
 * @file  ItemStackNetManagerScreen.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ItemStackNetManagerScreen.
 *
 */
class ItemStackNetManagerScreen {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ITEMSTACKNETMANAGERSCREEN
public:
    class ItemStackNetManagerScreen& operator=(class ItemStackNetManagerScreen const &) = delete;
    ItemStackNetManagerScreen(class ItemStackNetManagerScreen const &) = delete;
    ItemStackNetManagerScreen() = delete;
#endif

public:
    /**
     * @symbol  ??0ItemStackNetManagerScreen\@\@QEAA\@AEAVEntityRegistry\@\@\@Z
     */
    MCAPI ItemStackNetManagerScreen(class EntityRegistry &);
    /**
     * @symbol  ?getEntity\@ItemStackNetManagerScreen\@\@QEAAAEAVEntityContext\@\@XZ
     */
    MCAPI class EntityContext & getEntity();
    /**
     * @symbol  ?getEntity\@ItemStackNetManagerScreen\@\@QEBAAEBVEntityContext\@\@XZ
     */
    MCAPI class EntityContext const & getEntity() const;

};